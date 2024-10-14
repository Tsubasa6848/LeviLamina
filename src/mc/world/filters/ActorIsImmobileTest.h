#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleBoolFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorIsImmobileTest : public ::SimpleBoolFilterTest {
public:
    // prevent constructor by default
    ActorIsImmobileTest& operator=(ActorIsImmobileTest const&);
    ActorIsImmobileTest(ActorIsImmobileTest const&);
    ActorIsImmobileTest();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorIsImmobileTest();

    // vIndex: 2
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4
    virtual std::string_view getName() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI bool evaluate$(struct FilterContext const& context) const;

    MCAPI std::string_view getName$() const;

    // NOLINTEND
};
