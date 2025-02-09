#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/FacingID.h"

// auto generated inclusion list
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"
#include "mc/world/redstone/circuit/components/ConsumerComponent.h"

class PistonConsumer : public ::ConsumerComponent {
public:
    ::FacingID                 mBlockedFace;
    const CircuitComponentType mCircuitComponentType = CircuitComponentType::PistonConsumer;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PistonConsumer() = default;

    // vIndex: 6
    virtual bool canConsumePowerAnyDirection() const;

    // vIndex: 11
    virtual bool
    addSource(class CircuitSceneGraph&, class CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    // vIndex: 12
    virtual bool allowConnection(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);

    // vIndex: 23
    virtual ::CircuitComponentType getCircuitComponentType() const;

    MCAPI PistonConsumer();

    MCAPI void setBlockPowerFace(uchar blockFace);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI bool
    addSource$(class CircuitSceneGraph&, class CircuitTrackingInfo const& info, int& dampening, bool& bDirectlyPowered);

    MCAPI bool allowConnection$(class CircuitSceneGraph&, class CircuitTrackingInfo const&, bool&);

    MCAPI bool canConsumePowerAnyDirection$() const;

    MCAPI ::CircuitComponentType getCircuitComponentType$() const;

    // NOLINTEND
};
