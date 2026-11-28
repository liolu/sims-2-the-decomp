/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020105d0(s32);
M2C_UNK func_02044480(s32);
M2C_UNK func_020d54c8(s32);

extern void *data_0213e460;
extern s32 data_027e0000;
extern u8 data_027e0014;

void func_0209d570(void *arg0) {
    s32 t;
    *(s32 *) ((u8 *) data_0213e460 + 0x600) = 4;
    func_020105d0((s32) ((u8 *) &data_027e0014 + data_027e0000 * 0x34));
    func_02044480(0x178C);
    t = *(s32 *) ((u8 *) arg0 + 0xC6C);
    if (-1 == t) {
        return;
    }
    func_020d54c8(t);
}
