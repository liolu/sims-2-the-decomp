/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

s32 func_0210ee78(s32, s32);
s32 func_0210f330(s32);
s32 func_0210f378(s32, s32);
s32 func_0210f230(s32);
s32 func_0210c1b4(s32);
s32 func_0210c8c4(s32);
s32 func_0210d92c();
s32 func_0210f2b4(s32);

void func_020e9f00(s32 arg0, void *arg1, s32 *arg2) {
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
    temp_r6       = func_0210ee78(0x3F490FDB, func_0210f330(temp_r7));
    t             = func_0210f378(temp_r6, func_0210f330(temp_r7));
    t             = func_0210c1b4(func_0210f230(t));
    t             = func_0210f378(0x4B800000, func_0210d92c());
    arg2[0]       = func_0210f2b4(t);
    arg2[temp_r7] = arg2[0] >> 1;
    for (i = 1; i < temp_r7; i++) {
        r5             = func_0210f378(temp_r6, func_0210f330(i));
        t              = func_0210c1b4(func_0210f230(r5));
        t              = func_0210f378(0x4B800000, func_0210d92c());
        arg2[i]        = func_0210f2b4(t) >> 1;
        t              = func_0210c8c4(func_0210f230(r5));
        t              = func_0210f378(0x4B800000, func_0210d92c());
        arg2[arg0 - i] = func_0210f2b4(t) >> 1;
    }
}
