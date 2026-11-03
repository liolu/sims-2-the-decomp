/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0212fe5c;
void func_0200aa54(void *);
void func_0200bd88(void *);
void func_02015334(void *);
void func_02015338(void *, void *, void *, void *);
void func_02015354(void *, s32);
void func_02015360(void *);
void func_02015394(void *);
void func_020447c8(void *);
void func_020dae58(void *);
void func_020fca8c(s32, void *, s32);

void *func_020153a8(void *arg0) {
    volatile s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;

    func_0200aa54(arg0);
    *(u8 **) arg0                 = &data_0212fe5c;
    *(s32 *) ((u8 *) arg0 + 0x10) = 0;
    *(s32 *) ((u8 *) arg0 + 0x14) = 0;
    *(s32 *) ((u8 *) arg0 + 0x18) = 0;
    func_0200bd88((u8 *) arg0 + 0x24);
    func_020dae58((u8 *) arg0 + 0x34);
    *(s32 *) ((u8 *) arg0 + 0x5C) = 0;
    *(s32 *) ((u8 *) arg0 + 0x60) = 0;
    *(s32 *) ((u8 *) arg0 + 0x64) = 0;
    func_020447c8((u8 *) arg0 + 0x68);
    func_02015394((u8 *) arg0 + 0x78);
    func_02015360((u8 *) arg0 + 0x84);
    func_02015354(&spC, 1);
    func_02015354(&sp8, 1);
    func_02015354(&sp4, 1);
    func_02015338((u8 *) arg0 + 0x90, &sp4, &sp8, &spC);
    func_02015334((u8 *) arg0 + 0x9C);
    *((u8 *) arg0 + 0xDC)        = 1;
    *(s16 *) ((u8 *) arg0 + 0xE) = 2;
    sp0                          = 0;
    func_020fca8c(sp0, (u8 *) arg0 + 0x1C, 8);
    return arg0;
}
