/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct B18 {
    u8 b[18];
} B18;
extern B18 data_ov003_02150a78;
extern u8 data_ov003_0214f884[];

s32 func_0200e3a0(void *);
s32 func_ov003_0214a50c(u8 *, s32, u8 *, s32, s32, s32);
void func_ov003_0214a3a4(u8 *, s32);

s32 func_ov003_0214c0d0(u8 *arg0, s32 arg1) {
    s32 i;
    s32 v;
    u8 *obj;
    u8 *tp;
    s32 r6;
    s32 y;
    s32 xx;
    s32 r5;
    volatile s32 fr[4];
    B18 buf;

    r6  = 0;
    buf = data_ov003_02150a78;
    r5  = -1;
    if (arg1 != 0) {
        v = func_0200e3a0(*(void **) (*(u8 **) (arg0 + 4) + *(u16 *) (*(u8 **) (arg0 + 4) + 0x76) * 4 + 0x48));
        if (v != 0xffff) {
            tp = (u8 *) (y = *(u16 *) (*(u8 **) (arg0 + 4) + 0x76) * 18) + (s32) data_ov003_0214f884;
            for (i = 0; i < 9; i++) {
                if (v == ((u16 *) tp)[i]) {
                    r5 = i;
                }
            }
        } else {
            r5 = 0;
        }
    } else {
        r5 = func_ov003_0214a50c(*(u8 **) (arg0 + 4), 9, buf.b, 0x30, 0x28, 1);
    }

    if (r5 != -1) {
        obj = *(u8 **) (arg0 + 4);
        i   = *(u16 *) (obj + 0x76);
        v   = func_0200e3a0(*(void **) (obj + i * 4 + 0x48));
        if (v != *(u16 *) (data_ov003_0214f884 + i * 18 + r5 * 2)) {
            goto action;
        }
    }
    if (arg1 != 0) {
    action:
        *(u16 *) (arg0 + 0x10)                  = r5;
        xx                                      = buf.b[r5 * 2] << 12;
        fr[0]                                   = xx;
        fr[2]                                   = xx;
        *(s32 *) (**(u8 ***) (arg0 + 8) + 0x50) = xx;
        y                                       = buf.b[1 + r5 * 2] << 12;
        fr[1]                                   = y;
        fr[3]                                   = y;
        *(s32 *) (**(u8 ***) (arg0 + 8) + 0x54) = y;
        obj                                     = *(u8 **) (arg0 + 4);
        func_ov003_0214a3a4(obj, *(u16 *) (data_ov003_0214f884 + *(u16 *) (obj + 0x76) * 18 + r5 * 2));
        r6 = 1;
    }
    return r6;
}
