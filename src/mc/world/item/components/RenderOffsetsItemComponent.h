#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RenderOffsetsItemComponent {
public:
    // RenderOffsetsItemComponent inner types declare
    // clang-format off
    struct ItemTransforms;
    struct TRS;
    // clang-format on

    // RenderOffsetsItemComponent inner types define
    struct ItemTransforms {
    public:
        // prevent constructor by default
        ItemTransforms& operator=(ItemTransforms const&);
        ItemTransforms(ItemTransforms const&);
        ItemTransforms();

    public:
        // NOLINTBEGIN
        MCAPI bool operator==(struct RenderOffsetsItemComponent::ItemTransforms const&) const;

        // NOLINTEND
    };

    struct TRS {
    public:
        // prevent constructor by default
        TRS& operator=(TRS const&);
        TRS(TRS const&);
        TRS();

    public:
        // NOLINTBEGIN
        MCAPI bool operator==(struct RenderOffsetsItemComponent::TRS const&) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RenderOffsetsItemComponent& operator=(RenderOffsetsItemComponent const&);
    RenderOffsetsItemComponent(RenderOffsetsItemComponent const&);
    RenderOffsetsItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RenderOffsetsItemComponent() = default;

    // vIndex: 1
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2
    virtual void writeSettings();

    // vIndex: 3
    virtual bool isNetworkComponent() const;

    // vIndex: 4
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const& ctx) const;

    // vIndex: 5
    virtual bool initializeFromNetwork(class CompoundTag const& tag, struct cereal::ReflectionCtx const& ctx);

    // vIndex: 6
    virtual void handleVersionBasedInitialization(class SemVersion const& originalJsonVersion);

    // vIndex: 7
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI static void bindType(
        struct cereal::ReflectionCtx&        ctx,
        std::vector<::AllExperiments> const& requiredToggles,
        std::optional<class SemVersion>      releasedMinFormatVersion
    );

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool _canUseOn$(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    MCAPI void _initializeComponent$();

    MCAPI bool _useOn$(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    MCAPI std::unique_ptr<class CompoundTag> buildNetworkTag$(struct cereal::ReflectionCtx const& ctx) const;

    MCAPI bool checkComponentDataForContentErrors$() const;

    MCAPI void handleVersionBasedInitialization$(class SemVersion const& originalJsonVersion);

    MCAPI bool initializeFromNetwork$(class CompoundTag const& tag, struct cereal::ReflectionCtx const& ctx);

    MCAPI bool isNetworkComponent$() const;

    MCAPI void writeSettings$();

    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms& Main_Hand_Defaults();

    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms& Off_Hand_Defaults();

    // NOLINTEND
};
