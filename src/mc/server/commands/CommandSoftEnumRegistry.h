#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SoftEnumUpdateType.h"

class CommandSoftEnumRegistry {
public:
    // prevent constructor by default
    CommandSoftEnumRegistry& operator=(CommandSoftEnumRegistry const&);
    CommandSoftEnumRegistry(CommandSoftEnumRegistry const&);
    CommandSoftEnumRegistry();

public:
    // NOLINTBEGIN
    MCAPI explicit CommandSoftEnumRegistry(class CommandRegistry* registry);

    MCAPI void updateSoftEnum(::SoftEnumUpdateType type, std::string const& enumName, std::vector<std::string> values);

    MCAPI ~CommandSoftEnumRegistry();

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
