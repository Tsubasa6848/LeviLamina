#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/UpdateBlockPacket.h"
#include "mc/platform/Result.h"

class UpdateBlockSyncedPacket : public ::UpdateBlockPacket {
public:
    // prevent constructor by default
    UpdateBlockSyncedPacket& operator=(UpdateBlockSyncedPacket const&);
    UpdateBlockSyncedPacket(UpdateBlockSyncedPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateBlockSyncedPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI UpdateBlockSyncedPacket();

    MCAPI UpdateBlockSyncedPacket(
        class BlockPos const&               pos,
        uint                                layer,
        uint                                runtimeId,
        uchar                               updateFlags,
        struct ActorBlockSyncMessage const& syncMsg
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
