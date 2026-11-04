/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_027e0000;
extern u8 *data_0213e580;
extern u8 *data_02139fa4;

s32 func_0205871c(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 func_02018af8(void *a, s32 b, void *c, s32 d);
s32 func_0208b754(void *, s32);

s32 func_020927dc(u8 *arg0, s32 arg1) {
    u8 c;
    u8 *cp;
    s32 o;

    o  = arg1;
    cp = arg0 + o;
    c  = cp[0x10];
    switch (c) {
        case 0xf: {
            if (*(s32 *) (*(u8 **) (arg0 + 4) + 0x134) == 0) {
                if (data_027e0000 == 0) {
                    data_027e0000 = 1;
                } else {
                    data_027e0000 = 0;
                }
                *(u8 **) (*(u8 **) (data_0213e580 + 0xf8) + 0x134) = *(u8 **) (arg0 + 4);
                *(u8 **) (*(u8 **) (arg0 + 4) + 0x134)             = *(u8 **) (data_0213e580 + 0xf8);
                func_02018af8(*(u8 **) (arg0 + 4) + 0x128, 0xa, *(u8 **) (data_0213e580 + 0xf8), 2);
                if (data_027e0000 == 0) {
                    data_027e0000 = 1;
                } else {
                    data_027e0000 = 0;
                }
                return 6;
            }
            func_0205871c(data_02139fa4, 0xa1a, -1, 0, 0, 1);
            return 0;
        }
        case 0x10: {
            if (*(s32 *) (*(u8 **) (arg0 + 4) + 0x134) == 0) {
                if (data_027e0000 == 0) {
                    data_027e0000 = 1;
                } else {
                    data_027e0000 = 0;
                }
                *(u8 **) (*(u8 **) (data_0213e580 + 0xf8) + 0x134) = *(u8 **) (arg0 + 4);
                *(u8 **) (*(u8 **) (arg0 + 4) + 0x134)             = *(u8 **) (data_0213e580 + 0xf8);
                func_02018af8(*(u8 **) (arg0 + 4) + 0x128, 0xb, *(u8 **) (data_0213e580 + 0xf8), 2);
                if (data_027e0000 == 0) {
                    data_027e0000 = 1;
                } else {
                    data_027e0000 = 0;
                }
                return 6;
            }
            func_0205871c(data_02139fa4, 0xa1a, -1, 0, 0, 1);
            return 0;
        }
        default:
            break;
    }
    return func_0208b754(arg0, arg1);
}
