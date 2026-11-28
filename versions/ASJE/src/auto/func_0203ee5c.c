/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02044480(void);
void func_0204630c(void *, s32, s32);
extern u8 data_021396b0[];
extern u8 data_021396b8[];
extern u8 data_021396c0[];
extern u8 data_021396f0[];
extern u8 data_021398b0[];
extern s32 data_027e0000;

void func_0203ee5c(void) {
    u32 i;
    u32 k;
    u8 *ptr;
    s32 idx;
    s32 off;

    *(s32 *) (data_021396b8 + data_027e0000 * 4) = 0;
    for (i = 0; i < 12; i++) {
        func_0204630c(data_021396f0 + data_027e0000 * 0x60 + i * 8, 0, 8);
    }
    k                                  = 0;
    off                                = 0;
    idx                                = data_027e0000;
    *(s32 *) (data_021396b0 + idx * 4) = 0;
    do {
        ptr = data_021398b0 + idx * 0x120 + off;
        if (*(u16 *) (ptr + 0x14) != 0xFFFF) {
            func_02044480();
            *(u16 *) (ptr + 0x14) = 0xFFFF;
        }
        func_0204630c(ptr, 0, 0x18);
        *(u16 *) (ptr + 0x14) = 0xFFFF;
        idx                   = data_027e0000;
        k += 1;
        if (*(s32 *) (data_021396b0 + idx * 4) != 0) {
            *(s32 *) (data_021396b0 + idx * 4) -= 1;
        }
        off += 0x18;
    } while (k < 12);
    *(s32 *) (data_021396c0 + idx * 4) = 0;
}
