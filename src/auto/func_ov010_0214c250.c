/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02016550(void *, s32, s8 *);
void func_ov010_0214b3a4(void *, void *, s32);

void func_ov010_0214c250(u8 *arg0, s32 arg1, s32 arg2) {
    s32 loc[13];
    u8 *r5;
    s32 off;
    u8 *r4;
    u8 *p;
    s32 c;
    s32 r3;
    s32 ip;
    s32 r2;

    off = arg1 * 0x28;
    r5  = *(u8 **) (arg0 + off + arg2 * 4 + 0x13c);
    func_02016550(*(void **) (arg0 + 0x1b4), 0, (s8 *) loc);

    r2                   = 0x58000;
    loc[1]               = r2;
    loc[7]               = r2;
    *(s32 *) (r5 + 0x54) = r2;
    loc[2]               = r2;
    loc[8]               = r2;
    p                    = *(u8 **) (r5 + 0x74);
    *(s32 *) (p + 0x54)  = r2;

    c       = *(s8 *) loc;
    r4      = arg0 + 0x154 + off;
    ip      = c + 8;
    r3      = ip << 12;
    loc[4]  = r3;
    loc[11] = r3;

    r2                   = *(s32 *) (*(u8 **) (arg0 + 0x1b4) + 0x50) + r3;
    loc[3]               = r2;
    loc[9]               = r2;
    *(s32 *) (r5 + 0x50) = r2;
    loc[6]               = r3;
    loc[12]              = r3;

    r3                  = *(s32 *) (*(u8 **) (arg0 + 0x1b4) + 0x50) + r3;
    loc[5]              = r3;
    loc[10]             = r3;
    p                   = *(u8 **) (r5 + 0x74);
    *(s32 *) (p + 0x50) = r3;

    *(s32 *) (r5 + 0x14) = (*(s32 *) (r5 + 0x14) & ~0xc00) | 0x400;
    p                    = *(u8 **) (r5 + 0x74);
    *(s32 *) (p + 0x14)  = *(s32 *) (p + 0x14) & ~0xc00;

    func_ov010_0214b3a4(arg0, r5, r4[arg2]);

    *(s32 *) (r5 + 4) |= 1;
    if (r4[arg2] < 0x30) {
        p = *(u8 **) (r5 + 0x74);
        *(s32 *) (p + 4) |= 1;
    }
}
