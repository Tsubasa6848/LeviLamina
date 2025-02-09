#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CrashDumpAssertData {
public:
    // prevent constructor by default
    CrashDumpAssertData& operator=(CrashDumpAssertData const&);
    CrashDumpAssertData(CrashDumpAssertData const&);
    CrashDumpAssertData();

public:
    // NOLINTBEGIN
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static ::ll::CArrayT<struct CrashDumpFormatEntryImpl const>& kFormat();

    // NOLINTEND
};
