/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_027e0000;
extern u8 data_0213c0f8[];
extern u8 data_0213add0[];
void func_02049144(void *, void *, s32, s32);

void func_02049228(void) {
    u8 *counts = data_0213c0f8;
    u8 count   = counts[data_027e0000 * 0x132C];
    if (count == 0) {
        return;
    }
    func_02049144(data_0213add0 + data_027e0000 * 0x132C + 0x1248,
                  (u16 *) *(u8 **) (data_0213add0 + data_027e0000 * 0x132C) + 3, count, 8);
    func_02049144(data_0213add0 + data_027e0000 * 0x132C + 0x1248,
                  (u16 *) (*(u8 **) (data_0213add0 + data_027e0000 * 0x132C) + 0x400) + 3, counts[data_027e0000 * 0x132C], 8);
}
