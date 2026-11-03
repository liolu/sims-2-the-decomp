/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_021424f8[];
extern u8 data_02142cf0[];
extern u8 data_02142e48[];
extern u8 data_02142848[];

s32 func_020d700c(s32 a);
s32 func_020d761c(void);
void func_020d767c(s32 a, s32 b);
void func_020d8a70(void);

void func_020d5bd4(void) {
    s32 i;
    u8 *q;
    u16 v;

    data_021424f8[0xb] = data_021424f8[0xb] | 0x80;
    q                  = data_02142cf0;
    for (i = 15; i >= 0; i--) {
        func_020d700c(i);
        if (func_020d761c() != 0) {
            if ((u8) (q[0xa] + 0xfc) <= 1) {
                if ((((u32) (q[0xb] << 31)) >> 31) == 1) {
                    func_020d767c(func_020d700c(i), 0);
                }
            }
        }
        q = q - 0x44;
    }
    v                               = *(u16 *) (data_02142e48 + 0x54);
    v                               = v & ~0x30;
    *(u16 *) (data_02142e48 + 0x54) = v;
    if ((data_021424f8[0xb] & 0x80) == 0) {
        return;
    }
    if ((*(volatile u8 *) (data_021424f8 + 0xb) & 0x40) != 0) {
        if ((*(u32 *) (data_02142848 + 0xc) & 0xc) == 0) {
            func_020d8a70();
        }
    }
    data_021424f8[0xb] = data_021424f8[0xb] & ~0xc0;
}
