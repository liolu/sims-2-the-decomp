/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 a, b, c, d;
} Bytes4;
typedef struct {
    s16 e, f;
} Shorts2;

void func_0203cfa8(s32, s32, s32, s32);

void func_0203db00(s32 arg0, s32 arg1, s32 arg2, s32 arg3, Bytes4 p4, Shorts2 p6, s32 g, s32 h) {
    s32 rows;
    s32 cols;
    u16 *dst;
    u16 *src;
    s32 hw;
    s32 dst_stride;
    s32 src_stride;

    func_0203cfa8(arg0, arg1, arg2, arg3);
    dst  = (u16 *) ((u8 *) arg2 + 2 * (p6.f * (0x10 << arg3))) + p6.e;
    src  = (u16 *) ((u8 *) arg0 + 2 * (p4.b * arg1)) + p4.a;
    rows = p4.d;
    if (rows <= 0) {
        return;
    }
    hw         = h << 12;
    dst_stride = 2 * ((0x10 << arg3) - p4.c);
    src_stride = 2 * (arg1 - p4.c);
    do {
        cols = p4.c;
        if (cols > 0) {
            do {
                cols -= 1;
                *dst = (u16) (g + (*src + hw));
                dst += 1;
                src += 1;
            } while (cols > 0);
        }
        rows -= 1;
        dst = (u16 *) ((u8 *) dst + dst_stride);
        src = (u16 *) ((u8 *) src + src_stride);
    } while (rows > 0);
}
