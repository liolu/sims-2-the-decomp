/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e2f4;
extern u8 data_0213e440;
extern u8 data_027e0004;
extern s32 func_02081f10(void *, s32, s32);
extern u8 *func_02081e88(void *, s32, s32);
extern void func_0204b9e8(void *, s32);
extern void func_0204c05c(s32, s32, void *);
extern s32 func_0204b6a0(void *, s32, void *, void *);

void func_0204b830(void *arg0, void *arg1) {
    u32 r5;
    s32 r6;
    s32 tmp;
    s32 *w;
    s32 v;
    s32 h;

    w = (s32 *) arg1;
    if (func_02081f10(*(u8 **) &data_0213e2f4 + 0x21dc, 0x865, -1) != 0) {
        v = *(s32 *) (*(u8 **) &data_0213e440 + 0xf4);
        h = *(u16 *) (func_02081e88(*(u8 **) &data_0213e2f4 + 0x21dc, 0x865, -1) + 0x32);
        if (h != v) {
            return;
        }
        func_0204b9e8(arg0, 3);
        return;
    }
    if ((*(s32 *) &data_027e0004 & 8) == 8) {
        func_0204b9e8(arg0, 3);
        return;
    }
    if ((w[1] & 0x20000) == 0x20000 && w[0x4e] != 0) {
        r5 = 0;
        do {
            func_0204c05c(w[r5 + 0x4e], r5 + 3, w + 0x1e);
            r5 = r5 + 1;
        } while (w[r5 + 0x4e] != 0);
        return;
    }
    tmp = 0;
    r6  = func_0204b6a0(arg0, 0, w + 0x1e, &tmp);
    r5  = 3;
    while (r6 != 0 && r5 <= 3) {
        func_0204c05c(r6, r5, w + 0x1e);
        if ((w[1] & 0x20000) == 0x20000) {
            w[r5 + 0x4b] = r6;
        }
        r5 = r5 + 1;
        if (r5 <= 3) {
            r6 = func_0204b6a0(arg0, tmp, w + 0x1e, &tmp);
        }
    }
}
