/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020fc994(s32 arg0, u8 *arg1, s32 arg2);
void func_021030a8(s32 *arg0);

void func_020c42ac(u8 *arg0) {
    volatile s32 t0;
    volatile s32 t1;
    volatile s32 t2;
    s32 out[3];

    t0 = 0;
    func_020fc994(t0, arg0 + 544, 512);
    t1 = 0;
    func_020fc994(t1, arg0 + 32, 512);
    t2 = 0;
    func_020fc994(t2, arg0 + 1056, 68);
    *(s32 *) (arg0 + 1160) = 0;
    *(s32 *) (arg0 + 1156) = 0;
    *(u8 *) (arg0 + 1152)  = 0;
    *(s32 *) (arg0 + 1164) = 0;
    func_021030a8(out);
    *(s32 *) (arg0 + 1096) = (out[0] << (out[1] + 12)) << (out[2] + 6);
}
