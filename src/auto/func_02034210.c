/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_0213e434;

void func_02083634(s32, s32);
void func_02026be8(void *);
void func_020117e8(s32, s32, void *, void *);
void func_0201d124(void *);
void func_0202873c(void *);
void func_02019684(void *);
void func_02018acc(void *);

s32 func_02034210(u8 *arg0, u8 *arg1) {
    u8 f[0x9C];

    func_02083634(data_0213e434 + 0x18, *(u16 *) (arg1 + 0xA) - 0x47);
    func_02026be8(f + 0x0);
    *(s32 *) (f + 0x10) = 0;
    func_020117e8(*(s32 *) (arg0 + 0x4), 0x26, f + 0x0, arg0);
    func_0201d124(f + 0x1C);
    *(u16 *) (f + 0x4C) = 0xAA;
    func_020117e8(*(s32 *) (arg0 + 0x4), 3, f + 0x1C, arg0);
    func_0202873c(f + 0x58);
    *(u16 *) (f + 0x6A) = 0x18;
    *(u8 *) (f + 0x6C)  = 1;
    func_020117e8(*(s32 *) (arg0 + 0x4), 0x2D, f + 0x58, arg0);
    func_02019684(f + 0x80);
    *(u8 **) (f + 0x90) = arg1;
    func_020117e8(*(s32 *) (arg0 + 0x4), 0x1E, f + 0x80, arg0);
    *(u16 *) (f + 0x4C) = 0x52;
    *(s32 *) (f + 0x2C) = 0x16E;
    func_020117e8(*(s32 *) (arg0 + 0x4), 3, f + 0x1C, arg0);
    func_02018acc(f + 0x80);
    func_02018acc(f + 0x58);
    func_02018acc(f + 0x1C);
    func_02018acc(f + 0x0);
    return 2;
}
