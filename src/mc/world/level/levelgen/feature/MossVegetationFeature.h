#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class MossVegetationFeature : public ::Feature {
public:
    // prevent constructor by default
    MossVegetationFeature& operator=(MossVegetationFeature const&);
    MossVegetationFeature(MossVegetationFeature const&);
    MossVegetationFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MossVegetationFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
