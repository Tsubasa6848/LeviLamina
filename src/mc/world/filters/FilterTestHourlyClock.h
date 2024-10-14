#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"
#include "mc/world/filters/SimpleIntFilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterTestHourlyClock : public ::SimpleIntFilterTest {
public:
    // prevent constructor by default
    FilterTestHourlyClock& operator=(FilterTestHourlyClock const&);
    FilterTestHourlyClock(FilterTestHourlyClock const&);
    FilterTestHourlyClock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FilterTestHourlyClock();

    // vIndex: 1
    virtual bool setup(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

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

    MCAPI bool setup$(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // NOLINTEND
};
