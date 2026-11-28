/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02085eac(u8 *arg0) {
    s32 i;
    s32 zero;
    u8 *p;
    u8 *q;
    u8 *r2;
    p    = arg0 + 8;
    zero = 0;
    do {
        *(u16 *) (p + 2) = 0xffff;
        *(u16 *) (p + 4) = 0xffff;
        q                = p + 8;
        p                = p + 0x38;
        do {
            *(u16 *) q        = 0xffff;
            *(s32 *) (q + 4)  = zero;
            *(s32 *) (q + 8)  = zero;
            *(s32 *) (q + 12) = zero;
            q                 = q + 0x10;
        } while (q != p);
    } while (p != arg0 + 0x78);
    r2 = arg0;
    i  = 0;
    do {
        s32 *w = (s32 *) arg0;
        w[i]   = 0;
        i++;
        *(u8 *) (r2 + 8) = 0;
        r2               = r2 + 0x38;
    } while (i < 2);
}
