#ifndef XIAOSUAN_LIB_UTILITY
#define XIAOSUAN_LIB_UTILITY

#include <utility>

namespace xiaosuan_lib {

using std::forward;
using std::move;

namespace utility {
    using uint = unsigned int;
    using ull = unsigned long long;
    using size_t = ull;
    struct byte_t {
        bool : 1;
    };
}

using utility::uint;
using utility::ull;
using utility::size_t;
using utility::byte_t;

}

#endif