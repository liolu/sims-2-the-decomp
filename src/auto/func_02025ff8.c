/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e434;
void *func_0201e774(void *);
void func_020117d8(void *, s32, void *, void *);
void func_020828ac(void *, s32, s32);
void func_02018acc(void *);
s32 func_01ffaf28(void *, s32, s32);
void func_0201b038(void *);
s32 func_0204c928(s32);
void func_02025c80(u8 *);
void func_02025f04(u8 *);

void func_02025ff8(u8 *arg0) {
    u8 a[0x28];
    u8 b[0x20];
    s32 r;
    u8 *p;

    if (*(s32 *) (arg0 + 0x3C) > 0) {
        if (arg0[0x38] == 0) {
            *(s32 *) (arg0 + 0x3C) = *(s32 *) (arg0 + 0x3C) - 1;
        }
    }
    if (*(u8 **) (arg0 + 0x44) != 0) {
        *(s32 *) (*(u8 **) (arg0 + 0x44) + 0x134) = 0;
        *(u8 **) (arg0 + 0x44)                    = 0;
    }
    if (*(u8 **) (arg0 + 0x34) != 0) {
        func_0201e774(b);
        func_020117d8(*(u8 **) (arg0 + 0x34), 5, b, 0);
        p = *(u8 **) (arg0 + 0x34);
        func_020828ac(data_0213e434 + 0x21DC + *(u16 *) (p + 0xA) * 0x2C, 3, 0);
        func_02018acc(b);
        *(u8 **) (arg0 + 0x34) = 0;
    }
    r = func_01ffaf28(*(u8 **) (arg0 + 4) + 0xE0, 0xA, 0);
    if (r == 0) {
        func_0201b038(a);
        func_020117d8(*(u8 **) (arg0 + 4), 0xA, a, arg0);
        func_02018acc(a);
    }
    if (*(s16 *) (arg0 + 0x48) == 0) {
        if (func_0204c928(0x19) != 0) {
            func_02025c80(arg0);
        } else {
            func_02025f04(arg0);
        }
        *(s16 *) (arg0 + 0x48) = 0xC8;
    } else {
        *(s16 *) (arg0 + 0x48) = *(s16 *) (arg0 + 0x48) - 1;
    }
}
