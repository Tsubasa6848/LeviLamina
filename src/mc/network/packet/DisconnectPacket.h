#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class DisconnectPacket : public ::Packet {
public:
    bool                             mSkipMessage;
    std::string                      mMessage;
    Connection::DisconnectFailReason mReason;

    // prevent constructor by default
    DisconnectPacket& operator=(DisconnectPacket const&);
    DisconnectPacket(DisconnectPacket const&);
    DisconnectPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DisconnectPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI DisconnectPacket(::Connection::DisconnectFailReason reason, std::string const& message, bool skipMessage);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(::Connection::DisconnectFailReason reason, std::string const& message, bool skipMessage);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
