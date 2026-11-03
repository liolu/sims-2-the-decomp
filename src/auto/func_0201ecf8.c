/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0201ca08(void *);
void func_02019684(void *);
void func_0201dcf0(void *);
void func_020276c8(void *);
void func_01ffac40(s32, void *);
void func_020117e8(s32, s32, void *, void *);
s32 func_0200aac4(s32, s32);
void func_02011090(s32, s32, s32, s32, s32);
void func_02018acc(void *);

s32 func_0201ecf8(u8 *arg0, u8 *arg1) {
    u8 f[0x98];
    s32 b0;
    s32 b4;
    s32 b8;

    func_0201ca08(f + 0xC);
    func_02019684(f + 0x40);
    func_0201dcf0(f + 0x58);
    func_020276c8(f + 0x7C);
    func_01ffac40(*(s32 *) (arg0 + 0x4) + 0xE0, arg0);
    func_020117e8(*(s32 *) (arg0 + 0x4), 0x1E, f + 0x40, arg0);
    func_02011090(*(s32 *) (arg0 + 0x4), func_0200aac4(*(s32 *) (arg0 + 0x4), 0), 1, 1, 0);
    *(u8 *) (f + 0x7A) = 1;
    func_020117e8(*(s32 *) (arg0 + 0x4), 0x46, f + 0x58, arg0);
    if (*(s32 *) (arg0 + 0x48) != 0) {
        *(s32 *) (f + 0x8C) = *(s32 *) (arg0 + 0x4);
        *(s32 *) (f + 0x94) = *(s32 *) (arg0 + 0x48);
        *(u16 *) (f + 0x90) = 0x26;
        func_020117e8(*(s32 *) (arg0 + 0x4), 0x21, f + 0x7C, arg0);
    }
    b0                  = *(s32 *) (arg1 + 0x0);
    *(s32 *) (f + 0x0)  = b0;
    *(s32 *) (f + 0x1C) = b0;
    b4                  = *(s32 *) (arg1 + 0x4);
    *(s32 *) (f + 0x4)  = b4;
    *(s32 *) (f + 0x20) = b4;
    b8                  = *(s32 *) (arg1 + 0x8);
    *(s32 *) (f + 0x8)  = b8;
    *(s32 *) (f + 0x24) = b8;
    *(u8 *) (f + 0x3F)  = 1;
    func_020117e8(*(s32 *) (arg0 + 0x4), 0x1B, f + 0xC, arg0);
    func_02018acc(f + 0x7C);
    func_02018acc(f + 0x58);
    func_02018acc(f + 0x40);
    func_02018acc(f + 0xC);
    return 0;
}
