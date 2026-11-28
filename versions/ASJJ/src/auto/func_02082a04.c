/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s16 a;
    u8 b;
    u8 c;
} S4;

typedef union {
    S4 s;
    s32 w;
} U4;

M2C_UNK func_0204811c(s32, s32, s32, s32, s32, s32);
u32 func_02082ba8(s32, s32, s32, s32, s32, s32, s32);
extern s32 data_02139a84;
extern void *data_0213e0a8;

u32 func_02082a04(s32 arg0, s32 arg1) {
    U4 sa;
    U4 sb;
    u8 *p;
    u8 i;
    u32 n;
    u32 t;

    i = 0;
    for (;;) {
        p = (u8 *) arg0 + i * 4;
        n = p[3] << 26;
        if ((u32) arg1 == (n >> 26)) {
            break;
        }
        n = i + 1;
        i = (u8) n;
        if (i >= 0x1E) {
            p = NULL;
            break;
        }
    }
    if (p == NULL) {
        return n;
    }
    sb.s.b = (u8) arg1;
    sb.s.a = (s16) p[1];
    sb.s.c &= ~1;
    sb.s.c &= ~2;
    sb.s.c &= ~4;
    sa.s.a = (s16) p[0];
    sa.s.b = 0;
    sa.s.c = p[2];
    func_0204811c(data_02139a84, 0xE, 1, *(s32 *) ((u8 *) data_0213e0a8 + 0xF8), sa.w, sb.w);
    t = ((u32) p[3] << 25) >> 31;
    if (t != 0) {
        return t;
    }
    return func_02082ba8(arg0, arg1, 0xD8, 0x58, 0, 0, 0);
}
