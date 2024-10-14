#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TickNextTickData {
public:
    // prevent constructor by default
    TickNextTickData& operator=(TickNextTickData const&);
    TickNextTickData(TickNextTickData const&);
    TickNextTickData();

public:
    // NOLINTBEGIN
    MCAPI TickNextTickData(class BlockPos const& pos, class Block const& block, struct Tick const& tick, int pOffset);

    MCAPI bool operator==(class TickNextTickData const& t) const;

    MCAPI bool operator>(class TickNextTickData const& tnd) const;

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
