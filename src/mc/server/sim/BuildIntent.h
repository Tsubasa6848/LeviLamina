#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/sim/ExecutionResult.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class SimulatedPlayer;
// clang-format on

namespace sim {

struct BuildIntent {
public:
    // prevent constructor by default
    BuildIntent& operator=(BuildIntent const&);
    BuildIntent(BuildIntent const&);

public:
    // NOLINTBEGIN
    MCAPI BuildIntent();

    MCAPI ::sim::ExecutionResult execute(class SimulatedPlayer& player, class BlockSource& region);

    MCAPI void finalize(class SimulatedPlayer& player);

    MCAPI void reset();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace sim
