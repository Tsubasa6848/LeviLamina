#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class Level;

class PlayerCommandOrigin : public ::CommandOrigin {
public:
    ActorUniqueID mPlayerId;
    Level*        mLevel;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerCommandOrigin() = default;

    // vIndex: 1
    virtual std::string const& getRequestId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 3
    virtual class BlockPos getBlockPosition() const;

    // vIndex: 4
    virtual class Vec3 getWorldPosition() const;

    // vIndex: 5
    virtual std::optional<class Vec2> getRotation() const;

    // vIndex: 6
    virtual class Level* getLevel() const;

    // vIndex: 7
    virtual class Dimension* getDimension() const;

    // vIndex: 8
    virtual class Actor* getEntity() const;

    // vIndex: 9
    virtual ::CommandPermissionLevel getPermissionsLevel() const;

    // vIndex: 10
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 11
    virtual std::optional<class BlockPos> getCursorHitBlockPos() const;

    // vIndex: 12
    virtual std::optional<class Vec3> getCursorHitPos() const;

    // vIndex: 15
    virtual bool canUseAbility(::AbilitiesIndex abilityIndex) const;

    // vIndex: 18
    virtual bool isSelectorExpansionAllowed() const;

    // vIndex: 19
    virtual class NetworkIdentifier const& getSourceId() const;

    // vIndex: 20
    virtual ::SubClientId getSourceSubId() const;

    // vIndex: 22
    virtual struct CommandOriginIdentity getIdentity() const;

    // vIndex: 23
    virtual ::CommandOriginType getOriginType() const;

    // vIndex: 29
    virtual class CompoundTag serialize() const;

    // vIndex: 30
    virtual bool isValid() const;

    MCAPI explicit PlayerCommandOrigin(class Player& origin);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Player& origin);

    MCAPI bool canUseAbility$(::AbilitiesIndex abilityIndex) const;

    MCAPI std::unique_ptr<class CommandOrigin> clone$() const;

    MCAPI class BlockPos getBlockPosition$() const;

    MCAPI std::optional<class BlockPos> getCursorHitBlockPos$() const;

    MCAPI std::optional<class Vec3> getCursorHitPos$() const;

    MCAPI class Dimension* getDimension$() const;

    MCAPI class Actor* getEntity$() const;

    MCAPI struct CommandOriginIdentity getIdentity$() const;

    MCAPI class Level* getLevel$() const;

    MCAPI std::string getName$() const;

    MCAPI ::CommandOriginType getOriginType$() const;

    MCAPI ::CommandPermissionLevel getPermissionsLevel$() const;

    MCAPI std::string const& getRequestId$() const;

    MCAPI std::optional<class Vec2> getRotation$() const;

    MCAPI class NetworkIdentifier const& getSourceId$() const;

    MCAPI ::SubClientId getSourceSubId$() const;

    MCAPI class Vec3 getWorldPosition$() const;

    MCAPI bool isSelectorExpansionAllowed$() const;

    MCAPI bool isValid$() const;

    MCAPI class CompoundTag serialize$() const;

    // NOLINTEND
};
