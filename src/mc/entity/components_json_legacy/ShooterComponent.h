#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShooterComponent {
public:
    // prevent constructor by default
    ShooterComponent& operator=(ShooterComponent const&);
    ShooterComponent(ShooterComponent const&);
    ShooterComponent();

public:
    // NOLINTBEGIN
    MCAPI ShooterComponent(class ShooterComponent&&);

    MCAPI bool hasMagicAttacks() const;

    MCAPI void onShoot(class Actor& owner);

    MCAPI class ShooterComponent& operator=(class ShooterComponent&&);

    MCAPI ~ShooterComponent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _shootProjectile(class Actor& owner, struct ActorDefinitionIdentifier const& actorDef, int auxVal);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
