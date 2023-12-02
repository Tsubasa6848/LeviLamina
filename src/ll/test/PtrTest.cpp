#include "ll/api/memory/Hook.h"
#include "mc/server/ServerInstance.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/definition/BlockDefinitionGroup.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"
#include "mc/world/level/material/Material.h"

#include "ll/api/base/ErrorInfo.h"
#include "ll/api/utils/StacktraceUtils.h"
#include "ll/core/LeviLamina.h"

#include "ll/api/memory/Closure.h"

struct SystemCategory;

#include "ll/api/service/GlobalService.h"
#include "mc/entity/gamerefs_entity/EntityRegistry.h"
#include "mc/entity/systems/ComponentInfo.h"
#include "mc/entity/systems/EntitySystems.h"
#include "mc/entity/systems/IEntitySystemsCollection.h"
#include "mc/entity/systems/ISystem.h"
#include "mc/entity/systems/InternalSystemInfo.h"
#include "mc/entity/systems/SystemTiming.h"

class DefaultEntitySystemsCollection : public IEntitySystemsCollection {
public:
    struct ECSTiming {
        int   mCount;  // this+0x0
        float mMsTime; // this+0x4
    };
    struct TickingSystemsInCategory {
        Bedrock::typeid_t<SystemCategory> mCategory; // this+0x0
        std::vector<uint>                 mSystems;  // this+0x8
        std::vector<ECSTiming>            mTimings;  // this+0x20
    };

    std::vector<std::shared_ptr<ISystem>> mAllSystems;              // this+0x8
    std::vector<InternalSystemInfo>       mAllSystemsInfo;          // this+0x20
    std::vector<TickingSystemsInCategory> mTickingSystemCategories; // this+0x38
    entt::dense_map<uint, ComponentInfo>  mAllComponentsInfo;       // this+0x50
    std::mutex                            mTimingMutex;             // this+0x98
};

auto test() {
    ll::logger.warn("mAllSystemsInfo");
    for (auto& info : ((DefaultEntitySystemsCollection*)ll::Global<IEntitySystemsCollection>)->mAllSystemsInfo) {
        ll::logger.warn("info {}", info.mName);
    }

// struct EntitySystems::EditorSystemCategory
// struct EntitySystems::GameSystemCategory
// struct EntitySystems::UsedInClientMovementCorrections
// struct EntitySystems::UsedInServerPlayerMovement
// struct VanillaSystemCategories::ActorMove
// struct VanillaSystemCategories::ExitVehicle
// struct VanillaSystemCategories::MobJumpFromGround
// struct VanillaSystemCategories::PositionPassenger
// struct VanillaSystemCategories::RemovePassenger
// struct VanillaSystemCategories::StopRiding
// struct VanillaSystemCategories::UpdateEntityInside
// struct VanillaSystemCategories::UpdateWaterState
// struct VanillaSystemCategories::UsedByClientAndServerAuth

    // auto& vec = ((DefaultEntitySystemsCollection*)ll::Global<IEntitySystemsCollection>)->mTickingSystemCategories;

    // ll::logger.warn("info safe:{} ", ((char*)&*vec.end() - (char*)&*vec.begin()) / vec.size());
    // for (auto& category :
    //      ((DefaultEntitySystemsCollection*)ll::Global<IEntitySystemsCollection>)->mTickingSystemCategories) {
    //     ll::logger.warn("category :{} ", category.mCategory.value);
    //     for (auto id : category.mSystems) {
    //         ll::logger.warn("category sys:{} ", id);
    //     }
    //     ll::logger.warn("timing :{} ", category.mTimings.size());
    //     for (auto timing : category.mTimings) {
    //         ll::logger.warn("category sys:{} {}", timing.mMsTime,timing.mCount);
    //     }
    // }
    ll::logger.warn(
        "mAllSystemsInfo size {} {}",
        ((DefaultEntitySystemsCollection*)ll::Global<IEntitySystemsCollection>)->mAllSystemsInfo.size(),
        ((DefaultEntitySystemsCollection*)ll::Global<IEntitySystemsCollection>)->mAllSystems.size()
    );
}

LL_AUTO_TYPED_INSTANCE_HOOK(
    ServerStartedEventHook,
    ll::memory::HookPriority::Low,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    origin(ins);
    // SharedPtr<BlockLegacy>::makeShared("hl:wd", 1234, Material::getMaterial(MaterialType::Dirt));
    test();
}

class Test;

#include "mc/entity/flags/ExitFromPassengerFlag.h"
#include "mc/world/components/FlagComponent.h"

size_t printHello(size_t data, int a) {
    ll::logger.warn("hello aaaaaaaa {} {}", data, a);
    if (data != 123) throw std::runtime_error("Test New Crash Logger");
    return 0;
}

#pragma warning(push)
#pragma warning(disable : 4723)

LL_AUTO_TYPED_INSTANCE_HOOK(
    BlockDefinitionGroupRegisterBlocks,
    HookPriority::Normal,
    BlockDefinitionGroup,
    &BlockDefinitionGroup::registerBlocks,
    void
) {
    std::cout << "type_hash  " << entt::type_hash<FlagComponent<ExitFromPassengerFlag>>::value() << std::endl;

    ll::error_info::printException(ll::error_info::getWinLastError());

    try {
        char* pp = (char*)(0x123);
        *pp      = 'a';
    } catch (...) {
        ll::error_info::printCurrentException();
    }

    try {
        int a = 0;
        int b = 2 / a;
        std::cout << "b = " << b << std::endl;
    } catch (...) {
        ll::error_info::printCurrentException();
    }
#if _HAS_CXX23
    // static ll::utils::stacktrace_utils::SymbolLoader sl{};
#endif
    try {
        try {
            std::string s{"nonexistent.file"};
            try {
                std::ifstream file(s);
                file.exceptions(std::ios_base::failbit);
            } catch (...) {
#if _HAS_CXX23
                auto stack = ll::error_info::stacktraceFromCurrExc();
                ll::logger.debug("\n{}", ll::utils::stacktrace_utils::toString(stack));
#endif
                std::throw_with_nested(std::runtime_error("Couldn't open " + s));
            }
        } catch (...) {
            std::throw_with_nested(std::system_error(std::error_code{1, std::generic_category()}, "run() failed"));
        }
    } catch (...) {
        ll::error_info::printCurrentException();
#if _HAS_CXX23
        auto stack = std::stacktrace::current();
        ll::logger.debug("\n{}", ll::utils::stacktrace_utils::toString(stack));
#endif
    }
    // throw std::runtime_error("Test New Crash Logger");

    auto c1 = ll::memory::NativeClosure(printHello, 123);

    auto f = std::function<size_t(int)>([](int a) { return printHello(123, a); });

    auto c2 = ll::memory::FunctionalClosure(f);

    (*c1.get())(654367);
    f(6376774);
    (*c2.get())(4619735);

    // auto& map        = BlockTypeRegistry::$mBlockLookupMap();
    // map["test:test"] = BlockTypeRegistry::lookupByName("minecraft:stone");

    // auto ptr = BlockTypeRegistry::lookupByName("test:test");

    // std::clog << "hii  " << bool(ptr) << ' ' << ptr->getTypeName() << std::endl;
    // std::cout << "hii  " << bool(ptr) << ' ' << ptr->getTypeName() << std::endl;
    ll::logger.warn(
        "{}",
        ll::memory::resolveSymbol("`anonymous namespace'::DefaultEntitySystemsCollection::internalGatherSystemTimings")
    );
    ll::logger.warn(
        "{}",
        ll::utils::stacktrace_utils::tryGetSymbolAddress(
            "`anonymous namespace'::DefaultEntitySystemsCollection::internalGatherSystemTimings"
        )
    );


    origin();
}

#pragma warning(pop)


// LL_AUTO_TYPED_INSTANCE_HOOK(
//     EStickHook,
//     HookPriority::Normal,
//     EntitySystems,
//     &EntitySystems::tick,
//     void,
//     EntityRegistry& registry
// ) {
//     ll::logger.debug("tick {} {}", registry.mName, std::chrono::system_clock::now());
//     origin(registry);
// }