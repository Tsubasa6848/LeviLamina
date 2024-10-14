#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptInvalidContainerSlotError {
public:
    // prevent constructor by default
    ScriptInvalidContainerSlotError& operator=(ScriptInvalidContainerSlotError const&);
    ScriptInvalidContainerSlotError(ScriptInvalidContainerSlotError const&);

public:
    // NOLINTBEGIN
    MCAPI ScriptInvalidContainerSlotError();

    MCAPI ~ScriptInvalidContainerSlotError();

    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    bind();

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

}; // namespace ScriptModuleMinecraft
