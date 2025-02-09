#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class LecternUpdatePacket : public ::Packet {
public:
    int                  mPage;           // this+0x30
    int                  mTotalPages;     // this+0x34
    bool                 mShouldDropBook; // this+0x38
    NetworkBlockPosition mPos;            // this+0x3C

    // prevent constructor by default
    LecternUpdatePacket& operator=(LecternUpdatePacket const&);
    LecternUpdatePacket(LecternUpdatePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LecternUpdatePacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI LecternUpdatePacket();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
