#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/ThreadPoolActionStatus.h"

// auto generated forward declare list
// clang-format off
namespace OS { struct ThreadPoolActionStatus; }
// clang-format on

namespace OS {

class ThreadPoolImpl {
public:
    // ThreadPoolImpl inner types declare
    // clang-format off
    struct ActionStatusImpl;
    // clang-format on

    // ThreadPoolImpl inner types define
    struct ActionStatusImpl : public ::OS::ThreadPoolActionStatus {
    public:
        // prevent constructor by default
        ActionStatusImpl& operator=(ActionStatusImpl const&);
        ActionStatusImpl(ActionStatusImpl const&);
        ActionStatusImpl();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual void Complete();

        // vIndex: 1
        virtual void MayRunLong();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        MCAPI void Complete$();

        MCAPI void MayRunLong$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ThreadPoolImpl& operator=(ThreadPoolImpl const&);
    ThreadPoolImpl(ThreadPoolImpl const&);
    ThreadPoolImpl();

    // private:
    // NOLINTBEGIN
    MCAPI static void TPCallback(struct _TP_CALLBACK_INSTANCE*, void*, struct _TP_WORK*);

    // NOLINTEND
};

}; // namespace OS
