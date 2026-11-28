/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

s32 func_0210ed3c(s32, s32);
s32 func_0210f1f4(s32);
s32 func_0210f23c(s32, s32);
s32 func_0210f0f4(s32);
s32 func_0210c078(s32);
s32 func_0210c788(s32);
s32 func_0210d7f0();
s32 func_0210f178(s32);

void func_020e9dc4(s32 arg0, void *arg1, s32 *arg2) {
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
    temp_r6       = func_0210ed3c(0x3F490FDB, func_0210f1f4(temp_r7));
    t             = func_0210f23c(temp_r6, func_0210f1f4(temp_r7));
    t             = func_0210c078(func_0210f0f4(t));
    t             = func_0210f23c(0x4B800000, func_0210d7f0());
    arg2[0]       = func_0210f178(t);
    arg2[temp_r7] = arg2[0] >> 1;
    for (i = 1; i < temp_r7; i++) {
        r5             = func_0210f23c(temp_r6, func_0210f1f4(i));
        t              = func_0210c078(func_0210f0f4(r5));
        t              = func_0210f23c(0x4B800000, func_0210d7f0());
        arg2[i]        = func_0210f178(t) >> 1;
        t              = func_0210c788(func_0210f0f4(r5));
        t              = func_0210f23c(0x4B800000, func_0210d7f0());
        arg2[arg0 - i] = func_0210f178(t) >> 1;
    }
}
