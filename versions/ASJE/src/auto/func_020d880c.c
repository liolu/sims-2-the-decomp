/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct G {
    u8 pad0[0xc];
    u32 flags;
    u16 pad10;
    u16 cur;
    u8 pad14[0x646];
    u8 b65a;
    u8 b65b;
};
struct H {
    u8 pad0[0x58];
    u16 w58;
    u8 pad5a[8];
    u16 w62;
};
extern volatile struct G data_02142708;
extern volatile struct H data_02142d08;

void func_020fd5f8(s32);
void func_020fd264(s32, s32, s32, s32);
void func_020d3e0c(s32);
void func_020d8d64(void);

void func_020d880c(u32 arg0) {
    s32 flag;
    volatile u16 *p;
    volatile u32 *q;
    s32 x0, x1, x2;

    if (arg0 == data_02142708.cur) {
        return;
    }
    if (data_02142708.flags & 4) {
        flag = 1;
    } else {
        flag = 0;
        if (data_02142708.flags & 4) {
        } else {
            func_020fd5f8(1);
            x1 = data_02142708.b65a;
            x0 = data_02142d08.w58;
            x2 = data_02142708.b65b;
            func_020fd264(x0, x1, x2, flag);
            *(volatile u16 *) 0x400010a = flag;
            *(volatile u16 *) 0x400010e = flag;
            data_02142708.flags |= 4;
        }
    }
    data_02142708.cur           = arg0;
    p                           = (volatile u16 *) 0x4000280;
    *p                          = 0;
    *(volatile u32 *) 0x4000290 = 0xFFB0FF;
    q                           = (volatile u32 *) 0x4000298;
    q[0]                        = arg0;
    q[1]                        = 0;
    while (*p & 0x8000) {
    }
    data_02142d08.w62 = (*(volatile u32 *) 0x40002a0 + 0x10) & ~0x1F;
    func_020d3e0c(4);
    if (flag) {
        return;
    }
    func_020d8d64();
}
