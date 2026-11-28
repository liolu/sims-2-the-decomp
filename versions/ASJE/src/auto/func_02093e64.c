/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e440;
extern u32 data_027e0000;
extern u8 data_0213f5d0;
extern s32 data_02139e64;
extern s32 func_0208b0d0(void *, s32);
extern s32 func_02093bc4(void *);
extern void func_02018af8(void *, s32, void *, s32);
extern void func_020586a4(s32, s32, s32, s32, void *, s32);

s32 func_02093e64(void *arg0, s32 arg1) {
    u8 *o;
    u8 *p;
    s32 i;
    s32 v;
    u8 *t;
    u8 ch;

    o = (u8 *) arg0;
    if ((*(u8 *) (*(u8 **) (o + 0x24) + 0x300) & 1) == 0) {
        *(u8 **) (*(u8 **) (*(u8 **) &data_0213e440 + 0xf8) + 0x134) = *(u8 **) (o + 4);
        *(u8 **) (*(u8 **) (o + 4) + 0x134)                          = *(u8 **) (*(u8 **) &data_0213e440 + 0xf8);
        return func_0208b0d0(arg0, arg1);
    }
    ch = o[arg1 + 0x10];
    switch (ch) {
        case 0x26:
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            p = *(u8 **) &data_0213e440;
            func_02018af8(*(u8 **) (o + 4) + 0x128, 8, *(u8 **) (p + 0xf8), 2);
            if (data_027e0000 == 0) {
                data_027e0000 = 1;
            } else {
                data_027e0000 = 0;
            }
            *(s32 *) (o + 8)   = 0;
            *(s32 *) (o + 0xc) = 0;
            i                  = *(s32 *) (o + 8);
            if (i > *(s32 *) (o + 0xc)) {
                do {
                    t = o + (i - 1);
                    v = t[0x10];
                    t = o + i;
                    i -= 1;
                    t[0x10] = v;
                } while (i > *(s32 *) (o + 0xc));
            }
            o[*(s32 *) (o + 0xc) + 0x10] = 0x25;
            *(s32 *) (o + 0xc) += 1;
            *(s32 *) (o + 8) += 1;
            return 4;
        case 0x27:
            if ((*(u8 *) (&data_0213f5d0 + 0x20a) & 1) == 0) {
                return func_02093bc4(arg0);
            }
            func_020586a4(data_02139e64, 0x989, -1, 2, arg0, 1);
            return 0;
    }
    return 4;
}
