#ifndef XIAOSUAN_LIB_UNINIT_ARRAY
#define XIAOSUAN_LIB_UNINIT_ARRAY 1

#include "utility.hpp"

namespace xiaosuan_lib {

namespace uninit_array_area {
    using id_t = size_t;
    template <typename val_T, size_t MAXSIZE>
    class uninit_array {
        private:
            static const size_t BYTECNT = sizeof(val_T) * MAXSIZE;
            byte_t byteland[BYTECNT];
        public:
            uninit_array() {}
            inline operator val_T* () {
                return (val_T*)byteland;
            }
            inline operator const val_T* () const {
                return (val_T*)byteland;
            }
            inline val_T &operator[] (id_t id) {
                return (*this)[id];
            }
            inline const val_T &operator[] (id_t id) const {
                return (*this)[id];
            }
            template <typename... args_T>
            inline void init(id_t id, args_T... args) {
                new((val_T*)(byteland) + id) val_T (args...);
                return;
            }
    };
}

using uninit_array_area::uninit_array;

}

#endif