#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class VexRandomMoveGoal : public ::Goal {
public:
    // prevent constructor by default
    VexRandomMoveGoal& operator=(VexRandomMoveGoal const&);
    VexRandomMoveGoal(VexRandomMoveGoal const&);
    VexRandomMoveGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VexRandomMoveGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit VexRandomMoveGoal(class Mob& mob);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void tick$();

    // NOLINTEND
};
