/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e440;
extern u8 *func_02052364(s32, s32);
extern void func_02052b90(s32 *, u8);
extern void func_0208736c(void *, void *);

typedef struct {
    s32 o0, o4;
    s32 c78, c7c, c80;
    s32 t14, t18, t1c, t20, t24, t28, t2c, t30, t34, t38, t3c, t40;
    s32 v44, v48, v4c, v50, v54, v58;
} FR;

void func_020423a4(u8 *arg0, u8 *arg1) {
    FR f;
    u8 *r4;
    s32 ok5, ok3, ne;

    u32 k6 = arg1[6];
    u32 k7 = arg1[7];
    if (k6 == 0xFF) {
        r4 = *(u8 **) (data_0213e440 + 0xF8);
    } else {
        r4 = func_02052364(*(s32 *) (*(u8 **) (arg0 + 4) + 0x28) + k6 * 8, k7);
    }
    if (r4 == NULL) {
        return;
    }
    f.v44 = (s32) * (s16 *) (arg1 + 0) << 0xC;
    f.v48 = (s32) * (s16 *) (arg1 + 2) << 0xC;
    f.v4c = (s32) * (s16 *) (arg1 + 4) << 0xC;
    if (f.v44 != (f.c78 = *(s32 *) (r4 + 0x78)) || f.v48 != (f.c7c = *(s32 *) (r4 + 0x7C)) ||
        f.v4c != (f.c80 = *(s32 *) (r4 + 0x80))) {
        ne = 1;
    } else {
        ne = 0;
    }
    if (ne != 0) {
        *(s32 *) (r4 + 0x78) = f.v44;
        f.t14                = f.v48;
        *(s32 *) (r4 + 0x7C) = f.v48;
        f.t18                = f.v4c;
        *(s32 *) (r4 + 0x80) = f.v4c;
        r4[0xDC]             = 1;
    }
    func_02052b90(&f.o0, arg1[8]);
    ok5   = 0;
    f.o4  = f.o0;
    ok3   = 0;
    f.t40 = *(s32 *) (r4 + 0x84);
    f.t1c = f.t40;
    f.v50 = f.t40;
    f.t20 = f.o0;
    f.v54 = f.o0;
    f.t24 = *(s32 *) (r4 + 0x8C);
    f.v58 = f.t24;
    f.t28 = f.t40;
    if (f.t40 == f.t28) {
        f.t2c = *(s32 *) (r4 + 0x88);
        if (f.o0 == f.t2c) {
            ok3 = 1;
        }
    }
    if (ok3 != 0) {
        f.t30 = *(s32 *) (r4 + 0x8C);
        if (f.v58 == f.t30) {
            ok5 = 1;
        }
    }
    if (ok5 == 0) {
        f.t34                = f.v50;
        *(s32 *) (r4 + 0x84) = f.v50;
        f.t38                = f.v54;
        *(s32 *) (r4 + 0x88) = f.v54;
        f.t3c                = f.v58;
        *(s32 *) (r4 + 0x8C) = f.v58;
        r4[0xDC]             = 1;
    }
    func_0208736c(data_0213e440, r4);
}
