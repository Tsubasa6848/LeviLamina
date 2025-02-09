#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ExperiencePotionItem : public ::Item {
public:
    // prevent constructor by default
    ExperiencePotionItem& operator=(ExperiencePotionItem const&);
    ExperiencePotionItem(ExperiencePotionItem const&);
    ExperiencePotionItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExperiencePotionItem() = default;

    // vIndex: 19
    virtual bool isThrowable() const;

    // vIndex: 38
    virtual bool isGlint(class ItemStackBase const& stack) const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& instance, class Player& player) const;

    // vIndex: 73
    virtual class Actor* createProjectileActor(
        class BlockSource&     region,
        class ItemStack const& stack,
        class Vec3 const&      pos,
        class Vec3 const&      direction
    ) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    MCAPI ExperiencePotionItem(std::string const& name, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& name, int id);

    MCAPI class Actor* createProjectileActor$(
        class BlockSource&     region,
        class ItemStack const& stack,
        class Vec3 const&      pos,
        class Vec3 const&      direction
    ) const;

    MCAPI bool
    dispense$(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    MCAPI bool isGlint$(class ItemStackBase const& stack) const;

    MCAPI bool isThrowable$() const;

    MCAPI class ItemStack& use$(class ItemStack& instance, class Player& player) const;

    // NOLINTEND
};
