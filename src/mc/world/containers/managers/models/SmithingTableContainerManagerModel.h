#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class SmithingTableContainerManagerModel : public ::ContainerManagerModel {
public:
    // prevent constructor by default
    SmithingTableContainerManagerModel& operator=(SmithingTableContainerManagerModel const&);
    SmithingTableContainerManagerModel(SmithingTableContainerManagerModel const&);
    SmithingTableContainerManagerModel();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SmithingTableContainerManagerModel() = default;

    // vIndex: 6
    virtual std::vector<class ItemStack> getItemCopies() const;

    // vIndex: 7
    virtual void setSlot(int slot, class ItemStack const& item, bool fromNetwork);

    // vIndex: 8
    virtual class ItemStack const& getSlot(int slot) const;

    // vIndex: 9
    virtual void setData(int, int);

    // vIndex: 10
    virtual void broadcastChanges();

    // vIndex: 16
    virtual bool isValid(float pickRange);

    // vIndex: 17
    virtual class ContainerScreenContext _postInit();

    MCAPI
    SmithingTableContainerManagerModel(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(::ContainerID containerId, class Player& player, class BlockPos const& blockPos);

    MCAPI class ContainerScreenContext _postInit$();

    MCAPI void broadcastChanges$();

    MCAPI std::vector<class ItemStack> getItemCopies$() const;

    MCAPI class ItemStack const& getSlot$(int slot) const;

    MCAPI bool isValid$(float pickRange);

    MCAPI void setData$(int, int);

    MCAPI void setSlot$(int slot, class ItemStack const& item, bool fromNetwork);

    MCAPI static int const& INPUT_SLOT();

    MCAPI static int const& MATERIAL_SLOT();

    MCAPI static int const& RESULT_SLOT();

    MCAPI static int const& TEMPLATE_SLOT();

    // NOLINTEND
};
