/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213d698;
extern u8 data_027e0000;

void func_020507a0(u32 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s32 arg4) {
    s32 lr;
    s32 cnt;
    u32 size;
    s32 words;
    s32 w;
    s32 idx;
    u8 *entry;
    u32 *dst;

    lr  = arg4;
    cnt = arg1;
    arg1 -= 1;
    if (cnt != 0) {
        do {
            idx   = *(s32 *) &data_027e0000;
            entry = &data_0213d698 + idx * 0x44;
            size  = *(u32 *) (entry + 0x2C);
            dst   = (u32 *) (arg3 + lr * size);
            words = size >> 2;
            w     = words - 1;
            if (words != 0) {
                do {
                    *dst++ = *arg0++;
                } while (w-- != 0);
            }
            idx   = *(s32 *) &data_027e0000;
            entry = &data_0213d698 + idx * 0x44;
            if (*(s32 *) (entry + 0x30) == 1) {
                *(u16 *) arg2 = lr;
            } else if (*(s32 *) (entry + 0x14) == -1) {
                *(u16 *) arg2 = lr | (*(u16 *) arg2 & 0xF000);
            } else {
                *(u16 *) arg2 = lr | *(s32 *) (entry + 0x18);
            }
            arg2 += 0x40;
            lr++;
        } while (arg1-- != 0);
    }
}
