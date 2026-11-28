/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u8 a, b, c, d;
} B4;

void func_02073c58(u8 *arg0, B4 arg1, u8 *arg2) {
    u8 *e;
    u8 *q;
    s32 cnt;
    s32 *tbl;
    s32 k;

    e                                                 = arg0 + *(s32 *) (arg0 + 0x2E0) * 0x58;
    cnt                                               = *(s32 *) (e + 0x54);
    tbl                                               = (s32 *) (e + 0x38);
    q                                                 = e + cnt * 4;
    *q                                                = arg1.a;
    q[1]                                              = arg1.b;
    q[2]                                              = arg1.c;
    q[3]                                              = arg1.d;
    *(s32 *) (arg0 + *(s32 *) (e + 0x54) * 4 + 0x2E4) = *(s32 *) (arg2 + 4);
    k                                                 = *(s32 *) (arg2 + 0x2C);
    tbl[k]                                            = tbl[k] + 1;
    *(s32 *) (e + 0x54)                               = *(s32 *) (e + 0x54) + 1;
}
