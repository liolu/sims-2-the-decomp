/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 raw[0x30];
    s16 v;
    s16 pad;
    s32 pad2;
} Blk;

extern s32 func_0200aac4(void *, s32);
extern s32 func_0204cbb4(s32, s32);
extern s32 func_0204ca70(s32);
extern s32 func_01ffaf28(void *, s32, s32);
extern void func_01ffabc8(void *, s32, s32);
extern void func_02011090(void *, s32, s32, s32, s32);
extern void func_0201d124(void *);
extern void func_020117e8(void *, s32, void *, void *);
extern void func_02018acc(void *);

void func_02019204(u8 *arg0) {
    u8 *r4;
    u16 r6v;
    Blk b;
    s32 sel;

    r4 = *(u8 **) (arg0 + 4);
    if (*(u8 *) (arg0 + 0x29) == 0) {
        return;
    }
    if (((u32) (*(u16 *) (r4 + 0x1F8) << 31)) >> 31 == 1) {
        if (*(u8 *) (arg0 + 0x28) == 0) {
            goto l264;
        }
        r6v = *(u16 *) (r4 + 0x1FE);
        if (r6v == func_0200aac4(r4, 1)) {
            goto l280;
        }
    l264:
        if (*(u8 *) (arg0 + 0x28) != 0) {
            goto l28c;
        }
        if (*(u16 *) (r4 + 0x1FE) != 0) {
            goto l28c;
        }
    l280:
        *(s32 *) (arg0 + 0x2C) = *(s32 *) (arg0 + 0x2C) - 1;
    l28c:
        if (*(u8 *) (arg0 + 0x28) != 0) {
            func_02011090(r4, func_0200aac4(r4, 1), 0, 1, 0);
        } else {
            func_02011090(r4, 0, 0, 1, 0);
        }
    }
    if (*(s32 *) (arg0 + 0x2C) > 0) {
        return;
    }
    if (func_01ffaf28(r4 + 0xE0, 3, 0) != 0) {
        func_01ffabc8(r4 + 0xE0, 3, 1);
    }
    func_0201d124(&b);
    if (*(u8 *) (arg0 + 0x28) != 0) {
        if (*(u16 *) (*(u8 **) (arg0 + 4) + 0xC) == 2 && *(u16 *) (*(u8 **) (arg0 + 4) + 0xA) == 0x2D) {
            b.v = (s16) func_0200aac4(r4, func_0204cbb4(0, 2) + 1);
        } else {
            if (func_0204ca70(1) != 0) {
                sel = 2;
            } else {
                sel = 3;
            }
            b.v = (s16) func_0200aac4(r4, sel);
        }
    } else {
        b.v = 1;
    }
    func_020117e8(r4, 3, &b, arg0);
    *(s32 *) (arg0 + 0x2C) = *(s32 *) (arg0 + 0x30);
    func_02018acc(&b);
}
