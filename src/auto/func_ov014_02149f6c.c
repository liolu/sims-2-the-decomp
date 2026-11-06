/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov014_0214b570;
u8 *func_0204688c(s32 a, s32 b, s32 c);
u8 *func_020170c4(u8 *p, u16 i);
void func_02016708(u8 *p, u8 *v);

void func_ov014_02149f6c(u8 *arg0) {
    volatile s32 tmp[3];
    s32 i;
    s32 r8;
    u8 *p;
    u8 **slot;
    u8 **sl;
    u8 *b;

    i  = 0;
    r8 = 0x16;
    do {
        p = func_0204688c(0x74, 0, 4);
        if (p != NULL) {
            p = func_020170c4(p, (u16) i);
        }
        sl                  = (u8 **) (arg0 + (u32) i * 4);
        sl[4]               = p;
        p                   = sl[4];
        *(s32 *) (p + 0x14) = (*(s32 *) (p + 0x14) & ~0xF000) | (((i + 1) & 15) << 12);
        tmp[0]              = 0x37000;
        tmp[1]              = r8 << 12;
        p                   = sl[4];
        {
            s32 *q = (s32 *) (p + 0x50);
            s32 v;
            q[0]   = 0x37000;
            v      = tmp[1];
            tmp[2] = v;
            q[1]   = v;
        }
        func_02016708(sl[4], (u8 *) ((s32 *) &data_ov014_0214b570)[i]);
        i += 1;
        r8 += 32;
    } while (i < 5);
}
