#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/functions/ICommandDispatcher.h"

class CommandDispatcher : public ::ICommandDispatcher {
public:
    // prevent constructor by default
    CommandDispatcher& operator=(CommandDispatcher const&);
    CommandDispatcher(CommandDispatcher const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandDispatcher() = default;

    // vIndex: 1
    virtual int performCommand(class CommandOrigin const& origin, class Command& command);

    MCAPI CommandDispatcher();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI int performCommand$(class CommandOrigin const& origin, class Command& command);

    // NOLINTEND
};
