/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e2f4;
extern s32 data_027e0000;
extern u8 *data_0213e440;
extern s32 data_02139e64;

s32 func_0208b484(u8 *a, s32 b);
s32 func_0208b2e0(u8 *a);
s32 func_0208b31c(u8 *a);
s32 func_020586a4(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02018af8(u8 *obj, s32 kind, u8 *flag, s32 n);
s32 func_01ffaf60(u8 *a, s32 b, s32 c);
s32 func_01ffabc8(u8 *a, s32 b, s32 c);

s32 func_0208de8c(u8 *arg0, s32 arg1) {
    u8 ev;
    u8 *mod;
    s32 i;
    s32 v;
    u8 *t;

    ev = arg0[arg1 + 0x10];
    switch (ev) {
        case 0x18:
            if (*(s32 *) (*(u8 **) (arg0 + 4) + 0x134) == 0) {
                if (*(s32 *) (data_0213e2f4 + 0x2000 + 0xf60) >= 1) {
                    if (data_027e0000 == 0) {
                        data_027e0000 = 1;
                    } else {
                        data_027e0000 = 0;
                    }
                    func_02018af8(*(u8 **) (arg0 + 4) + 0x128, 0xa, *(u8 **) (data_0213e440 + 0xf8), 2);
                    *(u8 **) (*(u8 **) (data_0213e440 + 0xf8) + 0x134) = *(u8 **) (arg0 + 4);
                    *(u8 **) (*(u8 **) (arg0 + 4) + 0x134)             = *(u8 **) (data_0213e440 + 0xf8);
                    if (data_027e0000 == 0) {
                        data_027e0000 = 1;
                    } else {
                        data_027e0000 = 0;
                    }
                    func_0208b31c(arg0);
                    i = *(s32 *) (arg0 + 8);
                    if (i > *(s32 *) (arg0 + 0xc)) {
                        do {
                            t = arg0 + (i - 1);
                            v = t[0x10];
                            t = arg0 + i;
                            i -= 1;
                            t[0x10] = v;
                        } while (i > *(s32 *) (arg0 + 0xc));
                    }
                    arg0[0x10 + *(s32 *) (arg0 + 0xc)] = 0xc;
                    *(s32 *) (arg0 + 0xc) += 1;
                    *(s32 *) (arg0 + 8) += 1;
                    return 5;
                }
                return 0;
            }
            func_020586a4(data_02139e64, 0xa1a, -1, 0, 0, 1);
            return 0;
        case 0xc:
            if (func_01ffaf60(*(u8 **) (data_0213e440 + 0xf8) + 0xe0, 8, 0) == 0) {
                return 0;
            }
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            func_01ffabc8(*(u8 **) (data_0213e440 + 0xf8) + 0xe0, 8, 0);
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            func_0208b2e0(arg0);
            return 4;
        default:
            return func_0208b484(arg0, arg1);
    }
}
