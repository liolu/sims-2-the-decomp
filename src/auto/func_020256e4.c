/* compiler: 1.2/sp2p3 */
#include "m2c.h"
/* func_020256e4: switch on arg1 (0x1F, 0x0E, 0x57), dead stack copies kept in a frame array */
extern void func_0201ca08(void *p);
extern void func_02019684(void *p, s32 z);
extern void func_01ffac40(void *a, void *b);
extern void func_020117e8(void *a, s32 b, void *c, void *d);
extern s32 func_0200aac4(void *a, s32 b);
extern void func_02011090(void *a, s32 b, s32 c, s32 d, s32 e);
extern void func_02018acc(void *p);
extern void func_02018af8(void *a, s32 b, void *c, s32 d);

s32 func_020256e4(void *arg0, s32 arg1, void *arg2) {
    u8 fr[0x70];
    s32 v;
    u8 *a0 = (u8 *) arg0;

    switch (arg1) {
        case 0x1F:
            func_0201ca08(fr + 0xc);
            v                    = ((s32 *) arg2)[0];
            *(s32 *) (fr + 0x0)  = v;
            *(s32 *) (fr + 0x1c) = v;
            v                    = ((s32 *) arg2)[1];
            *(s32 *) (fr + 0x4)  = v;
            *(s32 *) (fr + 0x20) = v;
            v                    = ((s32 *) arg2)[2];
            *(s32 *) (fr + 0x8)  = v;
            *(s32 *) (fr + 0x24) = v;
            func_02019684(fr + 0x40, v);
            func_01ffac40(*(u8 **) (a0 + 4) + 0xe0, arg0);
            func_020117e8(*(u8 **) (a0 + 4), 0x1e, fr + 0x40, arg0);
            func_02011090(*(u8 **) (a0 + 4), func_0200aac4(*(u8 **) (a0 + 4), 0), 1, 1, 0);
            func_020117e8(*(u8 **) (a0 + 4), 0x1b, fr + 0xc, arg0);
            func_02018acc(fr + 0x40);
            func_02018acc(fr + 0xc);
            return 0;
        case 0xE:
            *(u16 *) (fr + 0x58) = *(u16 *) arg2;
            *(u8 *) (fr + 0x5a)  = ((u8 *) arg2)[2];
            *(s32 *) (fr + 0x5c) = *(s32 *) ((u8 *) arg2 + 4);
            *(s32 *) (fr + 0x60) = *(s32 *) ((u8 *) arg2 + 8);
            *(s32 *) (fr + 0x64) = *(s32 *) ((u8 *) arg2 + 0xc);
            *(s32 *) (fr + 0x68) = *(s32 *) ((u8 *) arg2 + 0x10);
            *(u8 *) (fr + 0x6c)  = ((u8 *) arg2)[0x14];
            func_020117e8(*(u8 **) (a0 + 4), 0x20, fr + 0x58, arg0);
            a0[0x34] = 1;
            func_02018acc(fr + 0x58);
            return 0;
        case 0x57:
            *(void **) (a0 + 0x40) = arg2;
            if (*(void **) (*(u8 **) (a0 + 0x40) + 0x134) != 0) {
                return 2;
            }
            *(u8 **) (*(u8 **) (a0 + 0x40) + 0x134) = *(u8 **) (a0 + 4);
            *(u8 **) (*(u8 **) (a0 + 4) + 0x134)    = *(u8 **) (a0 + 0x40);
            func_01ffac40(*(u8 **) (a0 + 4) + 0xe0, arg0);
            func_02018af8(*(u8 **) (a0 + 0x40) + 0x128, 0xa, *(u8 **) (a0 + 4), 2);
            return 2;
        default:
            return 0;
    }
}
