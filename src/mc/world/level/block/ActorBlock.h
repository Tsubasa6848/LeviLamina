#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ActorBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ActorBlock& operator=(ActorBlock const&);
    ActorBlock(ActorBlock const&);
    ActorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorBlock();

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 105
    virtual void triggerEvent(class BlockSource& region, class BlockPos const& pos, int b0, int b1) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI ActorBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI void dtor$();

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void triggerEvent$(class BlockSource& region, class BlockPos const& pos, int b0, int b1) const;

    // NOLINTEND
};
