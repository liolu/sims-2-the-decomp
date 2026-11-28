/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_01ffc2ec(void *, s32 *, s32, s32);     /* extern */

void func_0200c90c(void *arg0, void *arg1, void *arg2) {
    volatile s32 st[16];
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 f;
    s32 g;
    s32 p;
    s32 ip2;
    s32 c2;
    s32 q;
    s32 z;

    a      = *(s32 *) ((u8 *) arg2 + 0x18);
    st[10] = a;
    st[4]  = a;
    b      = *(s32 *) ((u8 *) arg2 + 8);
    e      = b - a;
    st[0]  = e;
    st[2]  = e;
    c      = *(s32 *) ((u8 *) arg1 + 0x18);
    st[11] = c;
    st[5]  = c;
    d      = *(s32 *) ((u8 *) arg1 + 8);
    if ((d + c) <= e) {
        *(s32 *) arg0              = 0;
        *(s32 *) ((u8 *) arg0 + 4) = -0x1000;
        *(s32 *) ((u8 *) arg0 + 8) = 0;
        return;
    }
    f     = b + a;
    g     = d - c;
    st[6] = a;
    st[1] = f;
    st[3] = f;
    st[7] = c;
    if (g >= f) {
        *(s32 *) arg0              = 0;
        *(s32 *) ((u8 *) arg0 + 4) = 0x1000;
        *(s32 *) ((u8 *) arg0 + 8) = 0;
        return;
    }
    p      = *(s32 *) ((u8 *) arg2 + 0xC);
    z      = 0;
    st[8]  = p;
    c2     = *(s32 *) ((u8 *) arg1 + 0xC) - p;
    ip2    = *(s32 *) ((u8 *) arg2 + 4);
    st[9]  = ip2;
    q      = *(s32 *) ((u8 *) arg1 + 4) - ip2;
    st[12] = q;
    st[13] = z;
    st[14] = c2;
    func_01ffc2ec(arg0, (s32 *) &st[12], q, z);
}
