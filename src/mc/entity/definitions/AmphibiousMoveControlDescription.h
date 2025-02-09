#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/MoveControlDescription.h"

class AmphibiousMoveControlDescription : public ::MoveControlDescription {
public:
    // prevent constructor by default
    AmphibiousMoveControlDescription& operator=(AmphibiousMoveControlDescription const&);
    AmphibiousMoveControlDescription(AmphibiousMoveControlDescription const&);
    AmphibiousMoveControlDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~AmphibiousMoveControlDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
