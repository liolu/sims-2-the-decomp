/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_0201d124(void *);
extern void func_01ffabc8(void *, s32, s32);
extern void func_020276c8(void *);
extern void func_020117e8(s32, s32, void *, s32);
extern void func_02034f48(void *);
extern void func_02018acc(void *);
extern s32 func_0204c928(s32);
extern void func_02028464(void *);
extern void func_0201cc34(void *);
extern void func_0202873c(void *);

void func_0202e6c0(u8 *arg0, s32 arg1) {
    u8 buf[0xD0];

    func_0201d124(buf + 0x00);
    func_01ffabc8((u8 *) arg1 + 0xE0, 8, 0);
    func_020276c8(buf + 0x3C);
    *(u16 *) (buf + 0x50) = 0x15;
    *(s32 *) (buf + 0x4C) = *(s32 *) (arg0 + 4);
    func_020117e8(arg1, 0x21, buf + 0x3C, 0);
    if (arg0[0x2D] != 5) {
        func_02034f48(buf + 0x58);
        *(s32 *) (buf + 0x68) = arg0[0x2D];
        func_020117e8(arg1, 0x3D, buf + 0x58, 0);
        func_02018acc(buf + 0x58);
    }
    if (func_0204c928(0x14) != 0) {
        func_02028464(buf + 0x74);
        *(s32 *) (buf + 0x84) = *(s32 *) (arg0 + 4);
        *(u8 *) (buf + 0x8A)  = 1;
        *(u16 *) (buf + 0x88) = 0xB9;
        func_020117e8(arg1, 0x3E, buf + 0x74, 0);
        func_02018acc(buf + 0x74);
    }
    *(u16 *) (buf + 0x30) = 0x27;
    *(s32 *) (buf + 0x20) = *(s32 *) (arg0 + 4);
    *(u8 *) (buf + 0x33)  = 1;
    *(u8 *) (buf + 0x38)  = 1;
    func_020117e8(arg1, 3, buf + 0x00, 0);
    *(u8 *) (buf + 0x38) = 0;
    func_0201cc34(buf + 0x8C);
    *(s32 *) (buf + 0xA0) = 0x800000;
    *(s32 *) (buf + 0x9C) = arg1;
    func_020117e8(arg1, 0x36, buf + 0x8C, 0);
    *(u16 *) (buf + 0x30) = 0x3E;
    *(s32 *) (buf + 0x20) = arg1;
    *(u8 *) (buf + 0x33)  = 0;
    func_020117e8(arg1, 3, buf + 0x00, 0);
    *(u16 *) (buf + 0x30) = 0x2A;
    *(s32 *) (buf + 0x20) = *(s32 *) (arg0 + 4);
    *(u8 *) (buf + 0x33)  = 1;
    func_020117e8(arg1, 3, buf + 0x00, 0);
    func_0202873c(buf + 0xA8);
    *(s32 *) (buf + 0xCC) = (s32) (arg0 + 0x28);
    func_020117e8(arg1, 0x2D, buf + 0xA8, 0);
    func_02018acc(buf + 0xA8);
    func_02018acc(buf + 0x8C);
    func_02018acc(buf + 0x3C);
    func_02018acc(buf + 0x00);
}
