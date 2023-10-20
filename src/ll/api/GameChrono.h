#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include <chrono>

namespace ll::gamechrono {

using ticks   = std::chrono::duration<int64, std::ratio<1, 20>>;
using days    = std::chrono::duration<int64, std::ratio_multiply<std::ratio<24000>, ticks::period>>;
using hours   = std::chrono::duration<int64, std::ratio_divide<days::period, std::ratio<24>>>;
using minutes = std::chrono::duration<int64, std::ratio_divide<hours::period, std::ratio<60>>>;
using weeks   = std::chrono::duration<int64, std::ratio_multiply<std::ratio<7>, days::period>>;
using years   = std::chrono::duration<int64, std::ratio_multiply<std::ratio<146097, 400>, days::period>>;
using months  = std::chrono::duration<int64, std::ratio_divide<years::period, std::ratio<12>>>;

struct ServerClock {
    using duration                  = ticks;
    using rep                       = duration::rep;
    using period                    = duration::period;
    using time_point                = std::chrono::time_point<ServerClock>;
    static constexpr bool is_steady = false;

    LLNDAPI static time_point now() noexcept;
};

} // namespace ll::gamechrono

constexpr ll::gamechrono::ticks operator""_tick(uint64 val) noexcept { return ll::gamechrono::ticks{val}; }