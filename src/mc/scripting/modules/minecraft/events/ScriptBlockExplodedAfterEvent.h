#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockExplodedAfterEvent {
public:
    // prevent constructor by default
    ScriptBlockExplodedAfterEvent& operator=(ScriptBlockExplodedAfterEvent const&);
    ScriptBlockExplodedAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI ScriptBlockExplodedAfterEvent(struct ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent const&);

    MCAPI struct ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent&&);

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptBlockExplodedAfterEvent>
    bind();

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

}; // namespace ScriptModuleMinecraft
