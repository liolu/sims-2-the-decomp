/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" void *func_0208c384(s32 a, s32 b);
extern "C" void *func_02112244(void *a, void *b, void *c, s32 d);
extern "C" u8 data_0212fde8[];
extern "C" u8 data_021327ac[];

extern "C" void func_02073b48(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *base;
    VA *obj;
    u8 *q;
    s32 r4;
    s32 i;
    u8 *d;
    u8 *s;
    s32 j;

    base = arg0 + arg1 * 0x58;
    obj  = (VA *) func_0208c384(base[arg2 * 4], 0);
    q    = (u8 *) obj;
    if (obj != 0) {
        q = (u8 *) func_02112244(obj, data_0212fde8, data_021327ac, -1);
    }
    r4 = *(s32 *) (q + 0x2C);
    if (obj != 0) {
        obj->f1();
    }
    i = arg2;
    if (i < *(s32 *) (base + 0x54) - 1) {
        do {
            j    = i + 1;
            s    = base + j * 4;
            d    = base + i * 4;
            d[0] = s[0];
            d[1] = s[1];
            i    = j;
            d[2] = s[2];
            d[3] = s[3];
        } while (j < *(s32 *) (base + 0x54) - 1);
    }
    *(s32 *) (base + 0x38 + r4 * 4) = *(s32 *) (base + 0x38 + r4 * 4) - 1;
    *(s32 *) (base + 0x54)          = *(s32 *) (base + 0x54) - 1;
}
