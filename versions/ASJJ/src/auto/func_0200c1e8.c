/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 x, y, z;
} V3;

void func_020f52a0(void *, s32);
void func_020f5680(void *, void *, s32, s32, s32);
void func_01ffba84(void *, void *);
void func_01ffb98c(volatile s32 *, void *, void *);

void func_0200c1e8(s32 *out, s32 unused, s32 *in, u8 *obj) {
    volatile s32 fr[23];
    V3 *q;
    s32 *p;
    s32 t;
    s32 a;
    s32 b;
    s32 c;
    s32 sx;
    s32 sy;
    s32 sz;

    if (obj[0x64] == 1) {
        obj[0x64] = 0;
        func_020f52a0(obj + 0x24, 0);
        q = (V3 *) (obj + 0x18);
        func_020f5680(obj + 0x24, obj + 0x24, q->x, q->y, q->z);
        func_01ffba84(obj + 0x24, obj + 0xc);
        *(s32 *) (obj + 0x54) = *(s32 *) (obj + 0x0);
        *(s32 *) (obj + 0x58) = *(s32 *) (obj + 0x4);
        *(s32 *) (obj + 0x5c) = *(s32 *) (obj + 0x8);
    }
    func_01ffb98c(&fr[20], obj + 0x24, in + 1);
    t       = fr[20];
    fr[6]   = t;
    out[1]  = t;
    t       = fr[21];
    fr[7]   = t;
    out[2]  = t;
    t       = fr[22];
    fr[8]   = t;
    out[3]  = t;
    t       = in[6];
    fr[0]   = t;
    out[6]  = t;
    t       = in[7];
    fr[1]   = t;
    out[7]  = t;
    t       = in[8];
    fr[2]   = t;
    out[8]  = t;
    p       = (s32 *) (obj + 0xc);
    a       = p[2];
    fr[11]  = a;
    sz      = in[11] + a;
    fr[5]   = sz;
    b       = p[1];
    fr[12]  = b;
    sy      = in[10] + b;
    fr[4]   = sy;
    c       = *(s32 *) (obj + 0xc);
    fr[13]  = c;
    sx      = in[9] + c;
    fr[3]   = sx;
    fr[14]  = sx;
    fr[17]  = sx;
    fr[15]  = sy;
    fr[18]  = sy;
    fr[16]  = sz;
    fr[19]  = sz;
    out[9]  = sx;
    t       = fr[18];
    fr[9]   = t;
    out[10] = t;
    t       = fr[19];
    fr[10]  = t;
    out[11] = t;
}
