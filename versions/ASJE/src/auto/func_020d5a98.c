/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_021423b8[];
extern u8 data_02142bb0[];
extern u8 data_02142d08[];
extern u8 data_02142708[];

s32 func_020d6ed0(s32 a);
s32 func_020d74e0(void);
void func_020d7540(s32 a, s32 b);
void func_020d8934(void);

void func_020d5a98(void) {
    s32 i;
    u8 *q;
    u16 v;

    data_021423b8[0xb] = data_021423b8[0xb] | 0x80;
    q                  = data_02142bb0;
    for (i = 15; i >= 0; i--) {
        func_020d6ed0(i);
        if (func_020d74e0() != 0) {
            if ((u8) (q[0xa] + 0xfc) <= 1) {
                if ((((u32) (q[0xb] << 31)) >> 31) == 1) {
                    func_020d7540(func_020d6ed0(i), 0);
                }
            }
        }
        q = q - 0x44;
    }
    v                               = *(u16 *) (data_02142d08 + 0x54);
    v                               = v & ~0x30;
    *(u16 *) (data_02142d08 + 0x54) = v;
    if ((data_021423b8[0xb] & 0x80) == 0) {
        return;
    }
    if ((*(volatile u8 *) (data_021423b8 + 0xb) & 0x40) != 0) {
        if ((*(u32 *) (data_02142708 + 0xc) & 0xc) == 0) {
            func_020d8934();
        }
    }
    data_021423b8[0xb] = data_021423b8[0xb] & ~0xc0;
}
