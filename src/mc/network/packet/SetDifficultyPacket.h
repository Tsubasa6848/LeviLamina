#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/Difficulty.h"

class SetDifficultyPacket : public ::Packet {
public:
    Difficulty mDifficulty; // this+0x30

    // prevent constructor by default
    SetDifficultyPacket& operator=(SetDifficultyPacket const&);
    SetDifficultyPacket(SetDifficultyPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetDifficultyPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SetDifficultyPacket();

    MCAPI explicit SetDifficultyPacket(::Difficulty difficulty);

    MCAPI ::Difficulty getDifficulty() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(::Difficulty difficulty);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
