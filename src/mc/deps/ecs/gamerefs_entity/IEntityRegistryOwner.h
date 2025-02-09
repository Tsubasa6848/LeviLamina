#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class IEntityRegistryOwner : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IEntityRegistryOwner& operator=(IEntityRegistryOwner const&);
    IEntityRegistryOwner(IEntityRegistryOwner const&);
    IEntityRegistryOwner();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IEntityRegistryOwner();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
