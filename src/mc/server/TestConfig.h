#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TestConfig {
public:
    // prevent constructor by default
    TestConfig& operator=(TestConfig const&);
    TestConfig(TestConfig const&);
    TestConfig();

public:
    // NOLINTBEGIN
    MCAPI explicit TestConfig(std::string const& fileName);

    MCAPI bool isLoaded() const;

    MCAPI ~TestConfig();

    MCAPI static void bindType();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::string _readFile(std::string const&) const;

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
