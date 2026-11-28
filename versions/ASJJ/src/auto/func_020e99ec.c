/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

s32 func_0210e964(s32, s32);
s32 func_0210ee1c(s32);
s32 func_0210ee64(s32, s32);
s32 func_0210ed1c(s32);
s32 func_0210bca0(s32);
s32 func_0210c3b0(s32);
s32 func_0210d418();
s32 func_0210eda0(s32);

void func_020e99ec(s32 arg0, void *arg1, s32 *arg2) {
    s32 i;
    s32 temp_r7;
    s32 temp_r6;
    s32 t;
    s32 r5;

    *(s32 *) ((u8 *) arg1 + 4) = arg0;
    if (arg0 <= 1) {
        return;
    }
    temp_r7       = arg0 >> 1;
    temp_r6       = func_0210e964(0x3F490FDB, func_0210ee1c(temp_r7));
    t             = func_0210ee64(temp_r6, func_0210ee1c(temp_r7));
    t             = func_0210bca0(func_0210ed1c(t));
    t             = func_0210ee64(0x4B800000, func_0210d418());
    arg2[0]       = func_0210eda0(t);
    arg2[temp_r7] = arg2[0] >> 1;
    for (i = 1; i < temp_r7; i++) {
        r5             = func_0210ee64(temp_r6, func_0210ee1c(i));
        t              = func_0210bca0(func_0210ed1c(r5));
        t              = func_0210ee64(0x4B800000, func_0210d418());
        arg2[i]        = func_0210eda0(t) >> 1;
        t              = func_0210c3b0(func_0210ed1c(r5));
        t              = func_0210ee64(0x4B800000, func_0210d418());
        arg2[arg0 - i] = func_0210eda0(t) >> 1;
    }
}
