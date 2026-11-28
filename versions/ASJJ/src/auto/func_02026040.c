/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213df5c;
void *func_0201e754(void *);
void func_020117d8(void *, s32, void *, void *);
void func_02082764(void *, s32, s32);
void func_02018ac4(void *);
s32 func_01ffaf28(void *, s32, s32);
void func_0201b020(void *);
s32 func_0204c934(s32);
void func_02025cc8(u8 *);
void func_02025f4c(u8 *);

void func_02026040(u8 *arg0) {
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
        func_0201e754(b);
        func_020117d8(*(u8 **) (arg0 + 0x34), 5, b, 0);
        p = *(u8 **) (arg0 + 0x34);
        func_02082764(data_0213df5c + 0x21E4 + *(u16 *) (p + 0xA) * 0x2C, 3, 0);
        func_02018ac4(b);
        *(u8 **) (arg0 + 0x34) = 0;
    }
    r = func_01ffaf28(*(u8 **) (arg0 + 4) + 0xE0, 0xA, 0);
    if (r == 0) {
        func_0201b020(a);
        func_020117d8(*(u8 **) (arg0 + 4), 0xA, a, arg0);
        func_02018ac4(a);
    }
    if (*(s16 *) (arg0 + 0x48) == 0) {
        if (func_0204c934(0x19) != 0) {
            func_02025cc8(arg0);
        } else {
            func_02025f4c(arg0);
        }
        *(s16 *) (arg0 + 0x48) = 0xC8;
    } else {
        *(s16 *) (arg0 + 0x48) = *(s16 *) (arg0 + 0x48) - 1;
    }
}
