/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0201d124(u8 *);
void func_020276c8(u8 *);
void func_02028c84(u8 *);
void func_0202873c(u8 *);
void func_020269b4(u8 *);
void *func_0204688c(s32, s32, s32);
void *func_02014c30(void *, s32);
void func_02011090(void *, s32, s32, s32, s32);
void func_020117e8(void *, s32, u8 *, s32);
void func_02018acc(u8 *);

void func_02036d80(u8 *arg0) {
    u8 loc[0xF0];
    void *r4;
    u8 *obj;

    func_0201d124(loc + 0x8);
    func_020276c8(loc + 0x44);
    func_02028c84(loc + 0x60);
    func_0202873c(loc + 0x7C);
    func_020269b4(loc + 0xA4);
    r4 = func_0204688c(0x214, 0, 4);
    if (r4 != 0) {
        r4 = func_02014c30(r4, 0x11C);
    }
    obj                     = *(u8 **) (arg0 + 0x4);
    *(void **) (obj + 0x1C) = r4;
    func_02011090(r4, 0x83, 0, 1, 0);
    *(u16 *) (loc + 0x58) = 0x4D;
    *(u8 **) (loc + 0x54) = *(u8 **) (arg0 + 0x4);
    func_020117e8(*(void **) (arg0 + 0x4), 0x21, loc + 0x44, 0);
    *(void **) (loc + 0x28) = r4;
    *(u16 *) (loc + 0x38)   = 0x83;
    func_020117e8(*(void **) (arg0 + 0x4), 3, loc + 0x8, 0);
    *(u16 *) (loc + 0x8C) = 0x1E;
    func_020117e8(*(void **) (arg0 + 0x4), 0x2D, loc + 0x7C, 0);
    *(s32 *) (loc + 0x74) = 9;
    *(s32 *) (loc + 0x0)  = 0x88;
    *(s32 *) (loc + 0x4)  = 0x88;
    *(s32 *) (loc + 0x70) = 0x88;
    func_020117e8(*(void **) (arg0 + 0x4), 0x34, loc + 0x60, 0);
    obj                   = *(u8 **) (arg0 + 0x4);
    *(s32 *) (obj + 0x4)  = *(s32 *) (obj + 0x4) & ~0x800000;
    *(u16 *) (loc + 0x8E) = 0x26D;
    func_020117e8(r4, 0x2D, loc + 0x7C, 0);
    *(u16 *) (loc + 0xC0) = 0x3C;
    func_020117e8(r4, 8, loc + 0xA4, 0);
    func_02018acc(loc + 0xA4);
    func_02018acc(loc + 0x7C);
    func_02018acc(loc + 0x60);
    func_02018acc(loc + 0x44);
    func_02018acc(loc + 0x8);
}
