#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/vanilla/VanillaBiomeTypes.h"
#include "mc/world/level/levelgen/structure/PoolElementStructurePiece.h"
#include "mc/world/level/levelgen/structure/StructurePieceType.h"
#include "mc/world/level/levelgen/v1/AdjustmentEffect.h"

class VillagePiece : public ::PoolElementStructurePiece {
public:
    // prevent constructor by default
    VillagePiece& operator=(VillagePiece const&);
    VillagePiece(VillagePiece const&);
    VillagePiece();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VillagePiece() = default;

    // vIndex: 13
    virtual int generateHeightAtPosition(
        class BlockPos const&                                                    pos,
        class Dimension&                                                         dim,
        class BlockVolume&                                                       box,
        std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>>& chunkHeightCache
    ) const;

    // vIndex: 14
    virtual class Block const*
    getSupportBlock(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 15
    virtual class Block const& getBeardStabilizeBlock(class Block const& foundationBlock) const;

    // vIndex: 16
    virtual ::AdjustmentEffect getTerrainAdjustmentEffect() const;

    // vIndex: 17
    virtual bool _needsPostProcessing(class BlockSource& region);

    MCAPI static void addPieces(
        class BlockPos                                      position,
        std::vector<std::unique_ptr<class StructurePiece>>& pieces,
        class Random&                                       random,
        class JigsawStructureRegistry&                      pools,
        ::VanillaBiomeTypes                                 biomeType,
        class Dimension&                                    dimension
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool _needsPostProcessing$(class BlockSource& region);

    MCAPI int generateHeightAtPosition$(
        class BlockPos const&                                                    pos,
        class Dimension&                                                         dim,
        class BlockVolume&                                                       box,
        std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>>& chunkHeightCache
    ) const;

    MCAPI class Block const& getBeardStabilizeBlock$(class Block const& foundationBlock) const;

    MCAPI class Block const*
    getSupportBlock$(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    MCAPI ::AdjustmentEffect getTerrainAdjustmentEffect$() const;

    // NOLINTEND
};
