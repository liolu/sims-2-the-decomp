/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_027e0000;
extern u8 data_0213bd18[];
extern u8 data_0213a9f0[];
void func_020491d0(void *, void *, s32, s32);

void func_020492b4(void) {
    u8 *counts = data_0213bd18;
    u8 count   = counts[data_027e0000 * 0x132C];
    if (count == 0) {
        return;
    }
    func_020491d0(data_0213a9f0 + data_027e0000 * 0x132C + 0x1248,
                  (u16 *) *(u8 **) (data_0213a9f0 + data_027e0000 * 0x132C) + 3, count, 8);
    func_020491d0(data_0213a9f0 + data_027e0000 * 0x132C + 0x1248,
                  (u16 *) (*(u8 **) (data_0213a9f0 + data_027e0000 * 0x132C) + 0x400) + 3, counts[data_027e0000 * 0x132C], 8);
}
