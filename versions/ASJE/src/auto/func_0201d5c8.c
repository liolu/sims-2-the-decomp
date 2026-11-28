/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02011090(u8 *, s32, s32, s32, s32);

typedef struct {
    u8 pad[0x1c];
    u8 *t[2];
} Tab;

void func_0201d5c8(u8 *arg0) {
    s32 idx;
    s32 i;
    u8 *p;

    if (arg0[0x30] == 0) {
        idx = arg0[0x28];
        if (idx == 2) {
            for (i = 0; i < 2; i++) {
                p = ((Tab *) *(u8 **) (arg0 + 4))->t[i];
                if (p != 0) {
                    func_02011090(p, *(u16 *) (arg0 + 0x2A), arg0[0x2C] != 0, arg0[0x2D] != 0, 0);
                }
            }
        } else {
            p = ((Tab *) *(u8 **) (arg0 + 4))->t[idx];
            func_02011090(p, *(u16 *) (arg0 + 0x2A), arg0[0x2C] != 0, arg0[0x2D] != 0, 0);
        }
        arg0[0x30] = 1;
    }
    if (arg0[0x2C] != 0 || arg0[0x2E] == 0) {
        arg0[0x13] = 1;
        return;
    }
    p = ((Tab *) *(u8 **) (arg0 + 4))->t[arg0[0x28]];
    if (((u32) (*(u16 *) (p + 0x1F8) << 31)) >> 31 == 1) {
        arg0[0x13] = 1;
    }
}
