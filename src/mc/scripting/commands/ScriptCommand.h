#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptCommand {
public:
    // prevent constructor by default
    ScriptCommand& operator=(ScriptCommand const&);
    ScriptCommand(ScriptCommand const&);
    ScriptCommand();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptCommand(std::string const& commandString);

    MCAPI std::string getMessages() const;

    MCAPI int getSuccessCount() const;

    MCAPI void setOutput(int successCount, std::string&& messages);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::string const& commandString);

    // NOLINTEND
};
