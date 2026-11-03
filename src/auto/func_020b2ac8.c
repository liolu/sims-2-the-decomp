/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_0213e434;

void func_02015394(void *);
void func_02015360(void *);
void func_02015354(void *, s32);
void func_02015338(void *, void *, void *, void *);
void func_02015334(void *);
void func_02071ddc(void *);
void func_02046384(void *, s32, s32);
s32 func_0204ca70(s32);
void func_020b0780(void *, s32);

void *func_020b2ac8(u8 *arg0, s32 arg1, u8 *arg2) {
    u8 f[0x10];
    u8 *obj;

    *(s32 *) (arg0 + 0x18) = 0;
    *(s32 *) (arg0 + 0x1C) = arg1;
    *(u8 **) (arg0 + 0x20) = arg2;
    func_02015394(arg0 + 0x24);
    func_02015360(arg0 + 0x30);
    func_02015354(f + 0x8, 1);
    func_02015354(f + 0x4, 1);
    func_02015354(f + 0x0, 1);
    func_02015338(arg0 + 0x3C, f + 0x0, f + 0x4, f + 0x8);
    func_02015334(arg0 + 0x48);
    *(u8 *) (arg0 + 0x88)  = 1;
    *(s32 *) (arg0 + 0x8C) = 0;
    *(s32 *) (arg0 + 0x90) = 0;
    *(s32 *) (arg0 + 0x94) = 0;
    func_02071ddc(arg0 + 0x9C);
    *(s32 *) (arg0 + 0xC4)  = 0;
    *(s32 *) (arg0 + 0xCC)  = 0;
    *(u8 *) (arg0 + 0xD0)   = 0;
    *(s32 *) (arg0 + 0x10C) = 0;
    *(s32 *) (arg0 + 0x110) = 0;
    *(s32 *) (arg0 + 0x114) = 0;
    *(s32 *) (arg0 + 0x118) = 0;
    *(s32 *) (arg0 + 0x11C) = 0;
    *(s32 *) (arg0 + 0x120) = 0;
    obj                     = (u8 *) (data_0213e434 + 0x21DC);
    obj                     = obj + *(u16 *) (*(u8 **) (arg0 + 0x20) + 0xA) * 0x2C;
    *(u8 **) (arg0 + 0xBC)  = obj;
    obj                     = *(u8 **) (arg0 + 0xBC);
    obj[0x28]               = obj[0x28] | 1;
    func_02046384(arg0 + 0xE4, 0, 0x10);
    func_02046384(arg0 + 0xF4, 0, 0x10);
    *(s32 *) (arg0 + 0xC8) = func_0204ca70(2);
    func_020b0780(arg0, 0);
    return arg0;
}
