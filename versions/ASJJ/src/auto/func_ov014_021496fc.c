/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_ov014_0214b06c[];

u8 *func_020468a0(s32 arg0, s32 arg1, s32 arg2);
u8 *func_020170bc(u8 *arg0, u16 arg1);
void func_02016700(u8 *arg0, s32 arg1);

void func_ov014_021496fc(u8 *arg0) {
    volatile s32 tmp[3];
    s32 i;
    s32 r8;
    u8 *slot;
    u8 *q;
    u8 *r;
    s32 *pos;
    s32 t;

    i  = 0;
    r8 = 24;
    for (; i < 4; i++) {
        r = func_020468a0(116, 0, 4);
        if (r != 0) {
            r = func_020170bc(r, (u16) i);
        }
        slot                 = arg0 + (u32) i * 4;
        *(u8 **) (slot + 16) = r;
        q                    = *(u8 **) (slot + 16);
        *(u32 *) (q + 20)    = (*(u32 *) (q + 20) & ~0xF000) | (((i + 1) & 15) << 12);
        q                    = *(u8 **) (slot + 16);
        *(u32 *) (q + 20)    = (*(u32 *) (q + 20) & ~0xC00) | 0x400;
        tmp[0]               = 0x12000;
        tmp[1]               = r8 << 12;
        q                    = *(u8 **) (slot + 16);
        pos                  = (s32 *) (q + 0x50);
        *pos                 = 0x12000;
        t                    = tmp[1];
        tmp[2]               = t;
        pos[1]               = t;
        func_02016700(*(u8 **) (slot + 16), data_ov014_0214b06c[i]);
        r8 += 40;
    }
}
