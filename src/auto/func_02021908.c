/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_01ffac40(s32, void *);
void *func_0201d124(void *);
void *func_0201d844(void *);
void func_0201d56c(void *);
void func_020117e8(s32, s32, void *, void *);
s32 func_02021fd4(void *, s32);
u32 func_020235a0(void *);
void func_02018acc(void *);

s32 func_02021908(u8 *arg0) {
    u8 fr[0x78];
    u32 t;

    func_01ffac40(*(s32 *) (arg0 + 4) + 0xE0, arg0);
    func_0201d124(fr);
    func_0201d844(fr + 0x3C);
    func_0201d56c(fr + 0x54);
    func_020117e8(*(s32 *) (arg0 + 4), 0x22, fr + 0x54, 0);
    fr[0x34]             = 1;
    *(u16 *) (fr + 0x30) = 0x78;
    func_020117e8(*(s32 *) (arg0 + 4), 3, fr, arg0);
    *(u16 *) (fr + 0x30) = 0x78;
    func_020117e8(*(s32 *) (arg0 + 4), 3, fr, arg0);
    *(u16 *) (fr + 0x30) = 0x78;
    func_020117e8(*(s32 *) (arg0 + 4), 3, fr, arg0);
    *(u16 *) (fr + 0x30) = 0x78;
    func_020117e8(*(s32 *) (arg0 + 4), 3, fr, arg0);
    *(u16 *) (fr + 0x30) = 0x78;
    *(s32 *) (fr + 0x10) = func_02021fd4(arg0, 6);
    func_020117e8(*(s32 *) (arg0 + 4), 3, fr, arg0);
    arg0[0x3F]           = 1;
    fr[0x50]             = 1;
    *(u16 *) (fr + 0x4E) = 0x7F;
    func_020117e8(*(s32 *) (arg0 + 4), 0x23, fr + 0x3C, 0);
    t = func_020235a0(arg0);
    switch (t) {
        case 2:
            *(u16 *) (fr + 0x64) = 0x110;
            break;
        case 1:
        case 5:
            *(u16 *) (fr + 0x64) = 0x111;
            break;
        case 3:
            *(u16 *) (fr + 0x64) = 0x113;
            break;
        default:
        case 0:
        case 4:
            *(u16 *) (fr + 0x64) = 0x10F;
            break;
    }
    *(u16 *) (fr + 0x70) = 0xC8;
    func_020117e8(*(s32 *) (arg0 + 4), 0x22, fr + 0x54, 0);
    func_02018acc(fr + 0x54);
    func_02018acc(fr + 0x3C);
    func_02018acc(fr);
    return 0;
}
