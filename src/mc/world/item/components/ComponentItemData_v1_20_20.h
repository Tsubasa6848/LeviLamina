#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class VersionRange; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20_20 {
public:
    // prevent constructor by default
    ComponentItemData_v1_20_20& operator=(ComponentItemData_v1_20_20 const&);
    ComponentItemData_v1_20_20(ComponentItemData_v1_20_20 const&);

public:
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_20_20();

    MCAPI ~ComponentItemData_v1_20_20();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI static class Puv::VersionRange const& SUPPORTED_VERSIONS();

    // NOLINTEND
};
