/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Engine02139438 {
    s32 unk0;
    u8 unk4[0x1D4];
} Engine02139438;

extern s32 data_027e0000;
extern Engine02139438 data_021392f8[];
void func_020f6390(u32, u32, u32);
void func_020f6374(s32);

void func_0203d2a4(void) {
    s32 i;
    for (i = 0; i < 2; i++) {
        if (data_027e0000 == 0) {
            func_020f6390(1, 0, 1);
        } else {
            func_020f6374(0);
        }
        data_021392f8[data_027e0000].unk0 = 0;
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
    }
}
