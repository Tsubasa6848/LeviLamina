#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class BlockEventDispatcher : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    BlockEventDispatcher& operator=(BlockEventDispatcher const&);
    BlockEventDispatcher(BlockEventDispatcher const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEventDispatcher() = default;

    MCAPI BlockEventDispatcher();

    MCAPI void dispatchEvent(
        class BlockPos const& pos,
        uint                  layer,
        class Block const&    block,
        class Block const&    oldBlock,
        class Actor*          source
    );

    MCAPI class BlockEventDispatcherToken registerListener(
        class Vec3 const&                                                                  shapePos,
        float                                                                              shapeRadius,
        std::function<void(class BlockPos const&, uint, class Block const&, class Actor*)> callback
    );

    MCAPI void updatePosition(int handle, class Vec3 const& newPosition);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
