/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 func_02016548(u8 *, u32, void *);

void func_ov010_0214be7c(u8 *arg0, u8 *arg1, s32 arg2) {
    volatile s32 tmp[25];
    u8 *obj;
    u8 *r4;
    u8 *base;
    s32 v88;
    s32 r3;
    s32 ip;
    enum {
        L2000 = 0x2000
    } lr;
    s32 v;
    s32 nib;
    s32 r0;
    s32 r1;
    s32 sh;

    v       = arg0[0x1E6];
    v88     = *(s32 *) (arg1 + 0x88);
    tmp[24] = v88;
    tmp[7]  = v88;
    r3      = *(s32 *) (arg1 + 0x50);
    if (r3 < v88) {
        tmp[1]                 = 0x4000;
        tmp[8]                 = 0x4000;
        *(s32 *) (arg1 + 0x50) = *(s32 *) (arg1 + 0x50) + 0x4000;
    } else {
        tmp[9] = v88;
        if (r3 > v88) {
            tmp[2]                 = 0x4000;
            tmp[10]                = 0x4000;
            *(s32 *) (arg1 + 0x50) = *(s32 *) (arg1 + 0x50) - 0x4000;
        }
    }
    lr      = L2000;
    tmp[4]  = lr;
    tmp[18] = lr;
    ip      = *(s32 *) (arg1 + 0x88);
    r3      = ip + 0x2000;
    tmp[3]  = r3;
    tmp[11] = r3;
    v88     = *(s32 *) (arg1 + 0x50);
    if (v88 <= r3) {
        r3      = ip - lr;
        tmp[6]  = lr;
        tmp[19] = lr;
        tmp[5]  = r3;
        tmp[12] = r3;
        if (v88 >= r3) {
            r3                     = *(s32 *) (arg1 + 0x88);
            tmp[13]                = r3;
            *(s32 *) (arg1 + 0x50) = r3;
        }
    }
    if (arg2 == 0) {
        return;
    }
    obj = arg0 + v * 0x28;
    nib = ((u32) (obj[0x159] << 24)) >> 28;
    r4  = *(u8 **) (obj + (nib << 2) + 0x13C);
    func_02016548(*(u8 **) (arg0 + 0x1B4), 0, &tmp[0]);
    v                      = *(s8 *) &tmp[0];
    sh                     = v << 12;
    tmp[15]                = sh;
    tmp[22]                = sh;
    r0                     = *(s32 *) (*(u8 **) (arg0 + 0x1B4) + 0x50) + (v << 12);
    tmp[14]                = r0;
    tmp[20]                = r0;
    *(s32 *) (r4 + 0x50)   = r0;
    tmp[17]                = sh;
    tmp[23]                = sh;
    r1                     = *(s32 *) (*(u8 **) (arg0 + 0x1B4) + 0x50) + (v << 12);
    tmp[16]                = r1;
    tmp[21]                = r1;
    base                   = *(u8 **) (r4 + 0x74);
    *(s32 *) (base + 0x50) = r1;
}
