/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020d516c(s32, void *);
void func_020109c4(u8 *arg0) {
    s32 r0;
    u16 kind;
    kind = *(u16 *) (arg0 + 0xA);
    r0   = 0xCE;
    if (kind == 5) {
        if (arg0[0x211] == 1) {
            r0 = 0xD2;
        }
    } else if (kind == 6) {
        if (arg0[0x211] == 1) {
            r0 = 0xD3;
        } else {
            r0 = 0xE2;
        }
    } else if (kind == 0x17) {
        if (arg0[0x211] == 1) {
            r0 = 0x268;
        } else {
            r0 = 0xE2;
        }
    } else if (kind == 0x1D) {
        if (arg0[0x211] == 1) {
            r0 = 0xCB;
        } else {
            r0 = 0xE2;
        }
    } else if (kind == 0x16) {
        if (arg0[0x211] == 1) {
            r0 = 0x4D;
        } else {
            r0 = 0x2A0;
        }
    }
    if (r0 >= 0x2A0) {
        return;
    }
    func_020d516c(r0, arg0 + 0x78);
}
