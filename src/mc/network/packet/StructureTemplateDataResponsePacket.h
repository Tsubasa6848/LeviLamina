#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/StructureTemplateResponseType.h"
#include "mc/platform/Result.h"

class StructureTemplateDataResponsePacket : public ::Packet {
public:
    // prevent constructor by default
    StructureTemplateDataResponsePacket& operator=(StructureTemplateDataResponsePacket const&);
    StructureTemplateDataResponsePacket(StructureTemplateDataResponsePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureTemplateDataResponsePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI StructureTemplateDataResponsePacket();

    MCAPI StructureTemplateDataResponsePacket(
        std::string const&                 structureName,
        std::unique_ptr<class CompoundTag> structureTag,
        ::StructureTemplateResponseType    type
    );

    MCAPI class StructureTemplateDataResponsePacket& operator=(class StructureTemplateDataResponsePacket&&);

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
