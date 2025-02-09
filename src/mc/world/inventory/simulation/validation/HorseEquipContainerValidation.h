#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/validation/ContainerValidationBase.h"

class HorseEquipContainerValidation : public ::ContainerValidationBase {
public:
    // prevent constructor by default
    HorseEquipContainerValidation& operator=(HorseEquipContainerValidation const&);
    HorseEquipContainerValidation(HorseEquipContainerValidation const&);
    HorseEquipContainerValidation();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HorseEquipContainerValidation() = default;

    // vIndex: 1
    virtual bool isValidSlotForContainer(
        class ContainerScreenContext const& screenContext,
        class Container const&              container,
        int                                 slot
    ) const;

    // vIndex: 2
    virtual bool
    isItemAllowedInSlot(class ContainerScreenContext const&, int slot, class ItemStackBase const& item, int amount)
        const;

    // vIndex: 3
    virtual int getAvailableSetCount(int slot, class ItemStackBase const& item) const;

    // vIndex: 4
    virtual bool isItemAllowedToAdd(class ItemStack const& item) const;

    // vIndex: 5
    virtual bool
    isItemAllowedToRemove(class ContainerScreenContext const& screenContext, class ItemStackBase const& item) const;

    // vIndex: 6
    virtual bool canItemMoveToContainer(class ItemStackBase const& item) const;

    // vIndex: 7
    virtual bool canDestroy(class ContainerScreenContext const& screenContext) const;

    // vIndex: 8
    virtual int getContainerOffset(class ContainerScreenContext const& screenContext) const;

    // vIndex: 9
    virtual int
    getContainerSize(class ContainerScreenContext const& screenContext, class Container const& container) const;

    MCAPI explicit HorseEquipContainerValidation(class ContainerScreenContext const& screenContext);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class ContainerScreenContext const& screenContext);

    MCAPI bool canDestroy$(class ContainerScreenContext const& screenContext) const;

    MCAPI bool canItemMoveToContainer$(class ItemStackBase const& item) const;

    MCAPI int getAvailableSetCount$(int slot, class ItemStackBase const& item) const;

    MCAPI int getContainerOffset$(class ContainerScreenContext const& screenContext) const;

    MCAPI int
    getContainerSize$(class ContainerScreenContext const& screenContext, class Container const& container) const;

    MCAPI bool
    isItemAllowedInSlot$(class ContainerScreenContext const&, int slot, class ItemStackBase const& item, int amount)
        const;

    MCAPI bool isItemAllowedToAdd$(class ItemStack const& item) const;

    MCAPI bool
    isItemAllowedToRemove$(class ContainerScreenContext const& screenContext, class ItemStackBase const& item) const;

    MCAPI bool isValidSlotForContainer$(
        class ContainerScreenContext const& screenContext,
        class Container const&              container,
        int                                 slot
    ) const;

    // NOLINTEND
};
