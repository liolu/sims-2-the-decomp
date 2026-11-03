/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_0213e434;
extern M2C_UNK data_0213e580;
void func_0209153c(u8 *, s32);
void func_0206466c(void *, s32, s32);
void func_0201d124(u8 *, void *);
void func_020117e8(void *, s32, u8 *, s32);
void func_02018acc(u8 *);

s32 func_0209170c(u8 *arg0, s32 arg1) {
    u8 buf[0x40];
    u8 *base;
    u8 *r4;
    u8 c;

    c = arg0[0x10 + arg1];
    switch (c) {
        case 0x4A:
            func_0209153c(arg0, 0xD);
            break;
        case 0x4B:
            func_0209153c(arg0, 0x1B);
            break;
        case 0x4C:
            func_0209153c(arg0, 0x14);
            break;
        case 0x50:
            func_0209153c(arg0, 0x14);
            func_0206466c(*(void **) &data_0213e434, 0x2E, 0);
            base = *(u8 **) &data_0213e580;
            r4   = *(u8 **) (base + 0xF8);
            func_0201d124(buf, base);
            *(u16 *) (buf + 0x30) = 0x17;
            *(s32 *) (buf + 0x10) = 0xD5;
            func_020117e8(r4, 3, buf, 0);
            *(u16 *) (buf + 0x30) = 0x16;
            *(s32 *) (buf + 0x10) = 0xC1;
            func_020117e8(r4, 3, buf, 0);
            *(u16 *) (buf + 0x30) = 0x15;
            *(s32 *) (buf + 0x10) = -1;
            func_020117e8(r4, 3, buf, 0);
            func_02018acc(buf);
            break;
        case 0x4D:
            func_0209153c(arg0, 0x13);
            break;
    }
    return 2;
}
