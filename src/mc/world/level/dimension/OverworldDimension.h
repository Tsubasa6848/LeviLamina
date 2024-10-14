#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/LimboEntitiesVersion.h"
#include "mc/world/level/storage/StorageVersion.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class StructureSetRegistry; }
namespace mce { class Color; }
// clang-format on

class OverworldDimension : public ::Dimension {
public:
    // prevent constructor by default
    OverworldDimension& operator=(OverworldDimension const&);
    OverworldDimension(OverworldDimension const&);
    OverworldDimension();

public:
    // NOLINTBEGIN
    MCVAPI void _upgradeOldLimboEntity(class CompoundTag& tag, ::LimboEntitiesVersion vers);

    MCVAPI std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility(
        std::unique_ptr<class ChunkSource> storageSource,
        ::StorageVersion                   levelVersion
    );

    MCVAPI std::unique_ptr<class WorldGenerator>
           createGenerator(class br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCVAPI void fixWallChunk(class ChunkSource& source, class LevelChunk& lc);

    MCVAPI class mce::Color getBrightnessDependentFogColor(class mce::Color const& baseColor, float brightness) const;

    MCVAPI short getCloudHeight() const;

    MCVAPI bool hasPrecipitationFog() const;

    MCVAPI bool levelChunkNeedsUpgrade(class LevelChunk const& lc) const;

    MCVAPI class Vec3 translatePosAcrossDimension(class Vec3 const& originalPos, DimensionType fromId) const;

    MCVAPI void upgradeLevelChunk(class ChunkSource& source, class LevelChunk& lc, class LevelChunk& generatedChunk);

    MCAPI OverworldDimension(class ILevel& level, class Scheduler& context);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** $vftableForIDimension();

    MCAPI static void** $vftableForLevelListener();

    MCAPI static void** $vftableForSavedData();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void _upgradeOldLimboEntity$(class CompoundTag& tag, ::LimboEntitiesVersion vers);

    MCAPI std::unique_ptr<class ChunkSource> _wrapStorageForVersionCompatibility$(
        std::unique_ptr<class ChunkSource> storageSource,
        ::StorageVersion                   levelVersion
    );

    MCAPI std::unique_ptr<class WorldGenerator>
          createGenerator$(class br::worldgen::StructureSetRegistry const& structureSetRegistry);

    MCAPI void fixWallChunk$(class ChunkSource& source, class LevelChunk& lc);

    MCAPI class mce::Color getBrightnessDependentFogColor$(class mce::Color const& baseColor, float brightness) const;

    MCAPI short getCloudHeight$() const;

    MCAPI bool hasPrecipitationFog$() const;

    MCAPI bool levelChunkNeedsUpgrade$(class LevelChunk const& lc) const;

    MCAPI class Vec3 translatePosAcrossDimension$(class Vec3 const& originalPos, DimensionType fromId) const;

    MCAPI void upgradeLevelChunk$(class ChunkSource& source, class LevelChunk& lc, class LevelChunk& generatedChunk);

    // NOLINTEND
};
