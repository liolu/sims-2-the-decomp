/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"
extern void func_020fd11c(s32 a, s32 b, s32 c);
extern s32 func_020dae54(s32 a, s32 b, s32 c);

void func_020db068(u8 *o, s32 v) {
    s32 a;
    if (v < 0) {
        v = 0;
    } else if (v > 0x7fff) {
        v = 0x7fff;
    }
    *(s32 *) (o + 0x7c) = v;
    if (*(s32 *) (o + 0x78) == 1) {
        v = v * 127 / 0x7fff;
        func_020fd11c(1 << *(s32 *) (o + 0x88), v, 0);
        return;
    }
    if (*(s32 *) (o + 0x80) < 0x8000) {
        a = v;
    } else {
        a = func_020dae54(v, *(s32 *) (o + 0x80), 0x8000);
    }
    if (*(s32 *) (o + 0x80) < 0x8000) {
        v = func_020dae54(v, 0x10000 - *(s32 *) (o + 0x80), 0x8000);
    }
    func_020fd11c(1 << *(s32 *) (o + 0x88), a * 127 / 0x7fff, 0);
    func_020fd11c(1 << *(s32 *) (o + 0x8c), v * 127 / 0x7fff, 0);
}
