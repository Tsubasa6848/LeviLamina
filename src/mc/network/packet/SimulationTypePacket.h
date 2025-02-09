#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/SimulationType.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class SimulationTypePacket : public ::Packet {
public:
    SimulationType mSimType; // this+0x30

    // prevent constructor by default
    SimulationTypePacket& operator=(SimulationTypePacket const&);
    SimulationTypePacket(SimulationTypePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SimulationTypePacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SimulationTypePacket();

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
