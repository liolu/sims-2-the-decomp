/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_0213df5c;
extern M2C_UNK data_0213e0a8;
void func_02091400(u8 *, s32);
void func_02064720(void *, s32, s32);
void func_0201d10c(u8 *, void *);
void func_020117e8(void *, s32, u8 *, s32);
void func_02018ac4(u8 *);

s32 func_020915d0(u8 *arg0, s32 arg1) {
    u8 buf[0x40];
    u8 *base;
    u8 *r4;
    u8 c;

    c = arg0[0x10 + arg1];
    switch (c) {
        case 0x4A:
            func_02091400(arg0, 0xD);
            break;
        case 0x4B:
            func_02091400(arg0, 0x1B);
            break;
        case 0x4C:
            func_02091400(arg0, 0x14);
            break;
        case 0x50:
            func_02091400(arg0, 0x14);
            func_02064720(*(void **) &data_0213df5c, 0x2E, 0);
            base = *(u8 **) &data_0213e0a8;
            r4   = *(u8 **) (base + 0xF8);
            func_0201d10c(buf, base);
            *(u16 *) (buf + 0x30) = 0x17;
            *(s32 *) (buf + 0x10) = 0xD5;
            func_020117e8(r4, 3, buf, 0);
            *(u16 *) (buf + 0x30) = 0x16;
            *(s32 *) (buf + 0x10) = 0xC1;
            func_020117e8(r4, 3, buf, 0);
            *(u16 *) (buf + 0x30) = 0x15;
            *(s32 *) (buf + 0x10) = -1;
            func_020117e8(r4, 3, buf, 0);
            func_02018ac4(buf);
            break;
        case 0x4D:
            func_02091400(arg0, 0x13);
            break;
    }
    return 2;
}
