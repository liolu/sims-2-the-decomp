/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020c3fdc(void *);
M2C_UNK func_020fcad0(s32, void *, M2C_UNK);
M2C_UNK func_021031e4(s32 *);
void *func_020c4410(void *arg0) {
    volatile s32 z[3];
    s32 out[3];
    *(s32 *) ((u8 *) arg0 + 0) = 0;
    *(s32 *) ((u8 *) arg0 + 4) = 0;
    func_020c3fdc((u8 *) arg0 + 0x450);
    z[0] = 0;
    func_020fcad0(z[0], (u8 *) arg0 + 0x220, 0x200);
    z[1] = 0;
    func_020fcad0(z[1], (u8 *) arg0 + 0x20, 0x200);
    z[2] = 0;
    func_020fcad0(z[2], (u8 *) arg0 + 0x420, 0x44);
    *(s32 *) ((u8 *) arg0 + 0x488) = 0;
    *(s32 *) ((u8 *) arg0 + 0x484) = 0;
    *(s8 *) ((u8 *) arg0 + 0x480)  = 0;
    *(s32 *) ((u8 *) arg0 + 0x48C) = 0;
    func_021031e4(out);
    *(s32 *) ((u8 *) arg0 + 0x448) = (out[0] << (out[1] + 0xC)) << (out[2] + 6);
    return arg0;
}
