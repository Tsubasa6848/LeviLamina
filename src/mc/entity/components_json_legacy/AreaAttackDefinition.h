#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class AreaAttackDefinition {
public:
    // prevent constructor by default
    AreaAttackDefinition& operator=(AreaAttackDefinition const&);
    AreaAttackDefinition(AreaAttackDefinition const&);
    AreaAttackDefinition();

public:
    // NOLINTBEGIN
    MCAPI void initialize(class EntityContext& entity, class AreaAttackComponent& component) const;

    MCAPI void setDamageCause(std::string const& cause);

    MCAPI static void buildSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AreaAttackDefinition>>&
            root
    );

    // NOLINTEND
};
