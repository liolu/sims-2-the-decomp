#include "m2c.h"

extern u8 data_02143020;
typedef s32 (*FnA)(void *, s32, s32, s32);

s32 func_020df718(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 r4;
    void *self;
    s32 a1;
    s32 a2;
    s32 a3;
    self = arg0;
    a1   = arg1;
    a2   = arg2;
    a3   = arg3;
    r4   = ((FnA) (*(void **) ((u8 *) &data_02143020 + 0x74)))(arg0, arg1, arg2, arg3);
    ((FnA) (*(void **) ((u8 *) &data_02143020 + 0x74)))(self, a1 + *(s32 *) ((u8 *) self + 0x24), a2, a3);
    return r4;
}
