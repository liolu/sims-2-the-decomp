/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Alloc {};

struct Vec {
    s32 data;
    s32 size;
};

extern "C" void func_02046858(s32);

static inline void destroy(Alloc a) {}

extern "C" Vec *func_020c8b94(Vec *v) {
    s32 n;
    v->size = 0;
    n       = v->size;
    destroy(Alloc());
    v->size -= n;
    if (v->data != 0) {
        func_02046858(v->data);
    }
    return v;
}
