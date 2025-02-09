#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/puv/LevelSoundEvent.h"

struct SoundEventRequest {
public:
    // SoundEventRequest inner types declare
    // clang-format off
    struct PlainData;
    struct SynchronizedPlainData;
    // clang-format on

    // SoundEventRequest inner types define
    struct PlainData {
    public:
        // prevent constructor by default
        PlainData& operator=(PlainData const&);
        PlainData(PlainData const&);
        PlainData();

    public:
        // NOLINTBEGIN
        MCAPI ~PlainData();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    struct SynchronizedPlainData {
    public:
        // prevent constructor by default
        SynchronizedPlainData& operator=(SynchronizedPlainData const&);
        SynchronizedPlainData(SynchronizedPlainData const&);
        SynchronizedPlainData();
    };

public:
    // prevent constructor by default
    SoundEventRequest& operator=(SoundEventRequest const&);
    SoundEventRequest(SoundEventRequest const&);
    SoundEventRequest();

public:
    // NOLINTBEGIN
    MCAPI SoundEventRequest(struct SoundEventRequest&&);

    MCAPI ~SoundEventRequest();

    MCAPI static std::optional<struct SoundEventRequest> tryPlaySound(
        DimensionType                           dimension,
        struct ActorDataFlagComponent const&    actorData,
        struct ActorDefinitionIdentifier const& id,
        ::Puv::Legacy::LevelSoundEvent          type,
        class Vec3 const&                       pos,
        int                                     data
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct SoundEventRequest&&);

    MCAPI void dtor$();

    // NOLINTEND
};
