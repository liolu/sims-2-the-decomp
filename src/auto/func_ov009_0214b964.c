/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef unsigned char u8;
typedef unsigned short u16;

M2C_UNK func_020165bc(void *, s32);
M2C_UNK func_02016708(void *, void *);
void *func_020170c4(void *, u16);
void *func_0204688c(s32, s32, s32);
extern u8 data_ov009_0214c06c[];

void func_ov009_0214b964(u8 *arg0, u8 *arg1) {
    volatile u32 tmp[3];
    u8 *src;
    u32 *p;
    u32 v0;
    u32 v1;

    *(u32 *) (arg1 + 0x14) = (*(u32 *) (arg1 + 0x14) & ~0xF000) | ((((*(u32 *) (arg0 + 0x5C)) + 1) & 0xF) << 12);
    *(u32 *) (arg1 + 0x14) = *(u32 *) (arg1 + 0x14) & ~0xC00;
    *(u32 *) (arg1 + 0x10) = *(u32 *) (arg1 + 0x10) & ~0xC00;
    func_02016708(arg1, data_ov009_0214c06c + (*(u32 *) (arg0 + 0x5C)) * 8);
    *(u16 *) (arg1 + 0x24) = 0xFFFF;
    *(u32 *) (arg1 + 4)    = *(u32 *) (arg1 + 4) | 1;
    func_020165bc(arg1, 0);
    *(u8 **) (arg0 + (*(u32 *) (arg0 + 0x5C)) * 4 + 0x2C) = arg1;
    arg1                                                  = func_0204688c(0x74, 0, 4);
    if (arg1 != NULL) {
        arg1 = func_020170c4(arg1, (u16) ((*(u32 *) (arg0 + 0x5C)) * 2 + 1));
    }
    *(u32 *) (arg1 + 0x14) = (*(u32 *) (arg1 + 0x14) & ~0xF000) | ((((*(u32 *) (arg0 + 0x5C)) + 1) & 0xF) << 12);
    *(u32 *) (arg1 + 0x14) = *(u32 *) (arg1 + 0x14) & ~0xC00;
    *(u32 *) (arg1 + 0x10) = (*(u32 *) (arg1 + 0x10) & ~0xC00) | 0x800;
    func_02016708(arg1, data_ov009_0214c06c + (*(u32 *) (arg0 + 0x5C)) * 8);
    *(u16 *) (arg1 + 0x24) = 0xFFFF;
    *(u32 *) (arg1 + 4)    = *(u32 *) (arg1 + 4) | 1;
    func_020165bc(arg1, 0);
    src                                                   = *(u8 **) (arg0 + (*(u32 *) (arg0 + 0x5C)) * 4 + 0x2C);
    p                                                     = (u32 *) (src + 0x50);
    v0                                                    = p[0];
    tmp[0]                                                = v0;
    *(u32 *) (arg1 + 0x50)                                = v0;
    v1                                                    = p[1];
    tmp[1]                                                = v1;
    *(u32 *) (arg1 + 0x54)                                = v1;
    *(u8 **) (arg0 + (*(u32 *) (arg0 + 0x5C)) * 4 + 0x3C) = arg1;
    *(u32 *) (arg0 + 0x5C)                                = *(u32 *) (arg0 + 0x5C) + 1;
}
