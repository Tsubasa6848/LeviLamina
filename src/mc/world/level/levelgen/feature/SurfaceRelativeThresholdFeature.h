#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class SurfaceRelativeThresholdFeature : public ::IFeature {
public:
    // prevent constructor by default
    SurfaceRelativeThresholdFeature& operator=(SurfaceRelativeThresholdFeature const&);
    SurfaceRelativeThresholdFeature(SurfaceRelativeThresholdFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SurfaceRelativeThresholdFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    MCAPI SurfaceRelativeThresholdFeature();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI bool isValidPlacement$(std::string const&);

    MCAPI std::optional<class BlockPos> place$(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // NOLINTEND
};
