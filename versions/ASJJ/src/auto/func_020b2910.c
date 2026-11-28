/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_0213df5c;

void func_0201538c(void *);
void func_02015358(void *);
void func_0201534c(void *, s32);
void func_02015330(void *, void *, void *, void *);
void func_0201532c(void *);
void func_02071dcc(void *);
void func_02046398(void *, s32, s32);
s32 func_0204ca7c(s32);
void func_020b05c8(void *, s32);

void *func_020b2910(u8 *arg0, s32 arg1, u8 *arg2) {
    u8 f[0x10];
    u8 *obj;

    *(s32 *) (arg0 + 0x18) = 0;
    *(s32 *) (arg0 + 0x1C) = arg1;
    *(u8 **) (arg0 + 0x20) = arg2;
    func_0201538c(arg0 + 0x24);
    func_02015358(arg0 + 0x30);
    func_0201534c(f + 0x8, 1);
    func_0201534c(f + 0x4, 1);
    func_0201534c(f + 0x0, 1);
    func_02015330(arg0 + 0x3C, f + 0x0, f + 0x4, f + 0x8);
    func_0201532c(arg0 + 0x48);
    *(u8 *) (arg0 + 0x88)  = 1;
    *(s32 *) (arg0 + 0x8C) = 0;
    *(s32 *) (arg0 + 0x90) = 0;
    *(s32 *) (arg0 + 0x94) = 0;
    func_02071dcc(arg0 + 0x9C);
    *(s32 *) (arg0 + 0xC4)  = 0;
    *(s32 *) (arg0 + 0xCC)  = 0;
    *(u8 *) (arg0 + 0xD0)   = 0;
    *(s32 *) (arg0 + 0x10C) = 0;
    *(s32 *) (arg0 + 0x110) = 0;
    *(s32 *) (arg0 + 0x114) = 0;
    *(s32 *) (arg0 + 0x118) = 0;
    *(s32 *) (arg0 + 0x11C) = 0;
    *(s32 *) (arg0 + 0x120) = 0;
    obj                     = (u8 *) (data_0213df5c + 0x21E4);
    obj                     = obj + *(u16 *) (*(u8 **) (arg0 + 0x20) + 0xA) * 0x2C;
    *(u8 **) (arg0 + 0xBC)  = obj;
    obj                     = *(u8 **) (arg0 + 0xBC);
    obj[0x28]               = obj[0x28] | 1;
    func_02046398(arg0 + 0xE4, 0, 0x10);
    func_02046398(arg0 + 0xF4, 0, 0x10);
    *(s32 *) (arg0 + 0xC8) = func_0204ca7c(2);
    func_020b05c8(arg0, 0);
    return arg0;
}
