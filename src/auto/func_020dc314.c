/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

s32 func_020daea8();
void func_020dc82c(void *, s32);
void func_020dc5bc(void *, s32);
void func_020de448(void *);

s32 func_020dc314(u8 *a0, s32 a1) {
    u32 r6;
    s32 r5;
    s32 r4;
    s32 off;
    s32 arg1;
    u8 *arg0;
    u32 n;
    s32 v;
    u8 *ent;
    void (*fp)(void *, s32);

    arg0 = a0;
    arg1 = a1;
    r5   = 0;
    if (arg0 == 0) {
        return r5;
    }
    r4 = func_020daea8();
    func_020dc82c(arg0, r4);
    func_020dc5bc(arg0, r4);
    if (arg1 == 0) {
        if (*(s32 *) (arg0 + 0xdc) != 0) {
            r5 = 1;
        }
    } else if (*(s32 *) (arg0 + 0xdc) == 0) {
        v = *(s32 *) (arg0 + 0x268);
        if (v != 0) {
            *(s32 *) (arg0 + 0x330) = r4 - v;
        } else {
            *(s32 *) (arg0 + 0x330) = r5;
        }
    }
    *(s32 *) (arg0 + 0xdc) = arg1;
    n                      = *(u32 *) (arg0 + 0x2e8);
    r6                     = 0;
    if (r6 < n) {
        off = r6;
        do {
            ent = *(u8 **) (arg0 + 0x2f0) + off;
            fp  = *(void (**)(void *, s32))(ent + 0x14);
            fp(ent, arg1);
            n = *(u32 *) (arg0 + 0x2e8);
            r6 += 1;
            off += 0x17c;
        } while (r6 < n);
    }
    if (*(s32 *) (arg0 + 0x258) != 0 && n != 0) {
        func_020de448(arg0);
    }
    if (r5 != 0) {
        v                       = func_020daea8();
        *(s32 *) (arg0 + 0x268) = v - *(s32 *) (arg0 + 0x330);
    }
    return *(s32 *) (arg0 + 0xdc);
}
