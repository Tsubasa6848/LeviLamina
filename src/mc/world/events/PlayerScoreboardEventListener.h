#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/SubscribedObjectives.h"
#include "mc/world/scores/ScoreboardId.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ScoreboardEventListener.h"

class PlayerScoreboardEventListener : public ::ScoreboardEventListener {
public:
    std::unordered_map<ScoreboardId, SubscribedObjectives> mSubscribedObjectives;

public:
    // prevent constructor by default
    PlayerScoreboardEventListener& operator=(PlayerScoreboardEventListener const&);
    PlayerScoreboardEventListener(PlayerScoreboardEventListener const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerScoreboardEventListener();

    // vIndex: 4
    virtual ::EventResult onScoreChanged(struct ScoreboardId const& id, std::string const& objective, int score);

    MCAPI PlayerScoreboardEventListener();

    MCAPI class SubscribedObjectives& getPlayerSubscriptions(struct ScoreboardId const& id, class Player const& player);

    MCAPI void removePlayerSubscriptions(struct ScoreboardId const& id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI ::EventResult onScoreChanged$(struct ScoreboardId const& id, std::string const& objective, int score);

    // NOLINTEND
};
