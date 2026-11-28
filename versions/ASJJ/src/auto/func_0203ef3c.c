/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0204450c(void);
void func_02046398(void *, s32, s32);
extern u8 data_021392d0[];
extern u8 data_021392d8[];
extern u8 data_021392e0[];
extern u8 data_02139310[];
extern u8 data_021394d0[];
extern s32 data_027e0000;

void func_0203ef3c(void) {
    u32 i;
    u32 k;
    u8 *ptr;
    s32 idx;
    s32 off;

    *(s32 *) (data_021392d8 + data_027e0000 * 4) = 0;
    for (i = 0; i < 12; i++) {
        func_02046398(data_02139310 + data_027e0000 * 0x60 + i * 8, 0, 8);
    }
    k                                  = 0;
    off                                = 0;
    idx                                = data_027e0000;
    *(s32 *) (data_021392d0 + idx * 4) = 0;
    do {
        ptr = data_021394d0 + idx * 0x120 + off;
        if (*(u16 *) (ptr + 0x14) != 0xFFFF) {
            func_0204450c();
            *(u16 *) (ptr + 0x14) = 0xFFFF;
        }
        func_02046398(ptr, 0, 0x18);
        *(u16 *) (ptr + 0x14) = 0xFFFF;
        idx                   = data_027e0000;
        k += 1;
        if (*(s32 *) (data_021392d0 + idx * 4) != 0) {
            *(s32 *) (data_021392d0 + idx * 4) -= 1;
        }
        off += 0x18;
    } while (k < 12);
    *(s32 *) (data_021392e0 + idx * 4) = 0;
}
