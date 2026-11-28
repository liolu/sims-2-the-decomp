/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02039844(u8 *);
void func_02018af0(u8 *, s32, u8 *, s32);
void func_02018ac4(u8 *);

s32 func_02028e98(u8 *arg0, u8 *arg1) {
    u8 fr[0x58];
    u16 code;

    code = *(u16 *) (*(u8 **) (arg0 + 4) + 0xA);
    if (code == 0x3A || code == 0x46 || (code >= 0x80 && code <= 0x8F)) {
        func_02039844(fr);
        *(u8 **) (fr + 0x44) = *(u8 **) (arg0 + 4);
        fr[0x24]             = 1;
        *(s16 *) (fr + 0x4C) = 0x1E;
        *(s16 *) (fr + 0x4E) = 0x1F;
        *(s16 *) (fr + 0x54) = 0x20;
        fr[0x24]             = 0;
        fr[0x2A]             = 4;
        *(s32 *) (fr + 0x2C) = 4;
        fr[0x27]             = 1;
        fr[0x28]             = 1;
        *(s32 *) (fr + 0x30) = 0;
        fr[0x29]             = 1;
        *(s16 *) (fr + 0x38) = 0x1FE;
        *(s16 *) (fr + 0x3E) = 2;
        if (code >= 0x80) {
            if (code <= 0x8F) {
                *(s16 *) (fr + 0x3C) = 0xC2;
                *(s16 *) (fr + 0x40) = 0xC2;
            }
        }
        func_02018af0(arg1 + 0x128, 0xD, fr, 2);
        func_02018ac4(fr);
        return 2;
    }
    return 0;
}
