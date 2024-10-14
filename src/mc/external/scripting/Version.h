#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct Version {
public:
    // prevent constructor by default
    Version& operator=(Version const&);
    Version();

public:
    // NOLINTBEGIN
    MCAPI Version(struct Scripting::Version const&);

    MCAPI bool isPreRelease() const;

    MCAPI bool operator!=(struct Scripting::Version const& rhs) const;

    MCAPI bool operator<(struct Scripting::Version const& rhs) const;

    MCAPI bool operator==(struct Scripting::Version const& rhs) const;

    MCAPI bool operator>=(struct Scripting::Version const& rhs) const;

    MCAPI bool satisfies(struct Scripting::Version const& other, bool strict) const;

    MCAPI std::string toString() const;

    MCAPI ~Version();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
