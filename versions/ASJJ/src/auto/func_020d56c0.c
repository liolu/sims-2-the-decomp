/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02142018[];
extern u8 data_02142810[];
extern u8 data_02142968[];
extern u8 data_02142368[];

s32 func_020d6af8(s32 a);
s32 func_020d7108(void);
void func_020d7168(s32 a, s32 b);
void func_020d855c(void);

void func_020d56c0(void) {
    s32 i;
    u8 *q;
    u16 v;

    data_02142018[0xb] = data_02142018[0xb] | 0x80;
    q                  = data_02142810;
    for (i = 15; i >= 0; i--) {
        func_020d6af8(i);
        if (func_020d7108() != 0) {
            if ((u8) (q[0xa] + 0xfc) <= 1) {
                if ((((u32) (q[0xb] << 31)) >> 31) == 1) {
                    func_020d7168(func_020d6af8(i), 0);
                }
            }
        }
        q = q - 0x44;
    }
    v                               = *(u16 *) (data_02142968 + 0x54);
    v                               = v & ~0x30;
    *(u16 *) (data_02142968 + 0x54) = v;
    if ((data_02142018[0xb] & 0x80) == 0) {
        return;
    }
    if ((*(volatile u8 *) (data_02142018 + 0xb) & 0x40) != 0) {
        if ((*(u32 *) (data_02142368 + 0xc) & 0xc) == 0) {
            func_020d855c();
        }
    }
    data_02142018[0xb] = data_02142018[0xb] & ~0xc0;
}
