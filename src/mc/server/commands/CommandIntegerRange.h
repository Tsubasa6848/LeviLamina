#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandIntegerRange {
public:
    // prevent constructor by default
    CommandIntegerRange& operator=(CommandIntegerRange const&);
    CommandIntegerRange(CommandIntegerRange const&);

public:
    // NOLINTBEGIN
    MCAPI CommandIntegerRange();

    MCAPI CommandIntegerRange(int minVal, int maxVal, bool invert, bool inclusive);

    MCAPI bool isWithinRange(int value) const;

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
