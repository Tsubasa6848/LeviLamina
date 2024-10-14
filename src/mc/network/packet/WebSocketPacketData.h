#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

struct WebSocketPacketData {
public:
    // prevent constructor by default
    WebSocketPacketData& operator=(WebSocketPacketData const&);
    WebSocketPacketData(WebSocketPacketData const&);
    WebSocketPacketData();

public:
    // NOLINTBEGIN
    MCAPI explicit WebSocketPacketData(std::string const& ip);

    MCAPI class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
