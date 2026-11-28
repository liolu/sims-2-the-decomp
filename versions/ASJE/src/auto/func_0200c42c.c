/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_01ffb98c(s32 *, void *, void *);
M2C_UNK func_01ffba84(void *, void *);
M2C_UNK func_020f5678(void *);
M2C_UNK func_020f5a58(void *, void *, s32, s32, s32);

void func_0200c42c(void *arg0, void *arg1, void *arg2, void *arg3) {
    volatile s32 w[4];
    s32 out[3];
    void *temp_r0;
    void *temp_r3;
    s32 v;

    if (*(u8 *) ((u8 *) arg3 + 0x64) == 1) {
        *(u8 *) ((u8 *) arg3 + 0x64) = 0U;
        func_020f5678((u8 *) arg3 + 0x24);
        temp_r3 = (u8 *) arg3 + 0x18;
        temp_r0 = (u8 *) arg3 + 0x24;
        func_020f5a58(temp_r0, temp_r0, *(s32 *) ((u8 *) arg3 + 0x18), *(s32 *) ((u8 *) temp_r3 + 4),
                      *(s32 *) ((u8 *) temp_r3 + 8));
        func_01ffba84((u8 *) arg3 + 0x24, (u8 *) arg3 + 0xC);
        *(s32 *) ((u8 *) arg3 + 0x54) = *(s32 *) ((u8 *) arg3 + 0);
        *(s32 *) ((u8 *) arg3 + 0x58) = *(s32 *) ((u8 *) arg3 + 4);
        *(s32 *) ((u8 *) arg3 + 0x5C) = *(s32 *) ((u8 *) arg3 + 8);
    }
    func_01ffb98c(out, (u8 *) arg3 + 0x24, (u8 *) arg2 + 4);
    v                             = out[0];
    w[1]                          = v;
    *(s32 *) ((u8 *) arg0 + 4)    = v;
    v                             = out[1];
    w[2]                          = v;
    *(s32 *) ((u8 *) arg0 + 8)    = v;
    v                             = out[2];
    w[3]                          = v;
    *(s32 *) ((u8 *) arg0 + 0xC)  = v;
    v                             = *(s32 *) ((u8 *) arg2 + 0x18);
    w[0]                          = v;
    *(s32 *) ((u8 *) arg0 + 0x18) = v;
}
