/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02084bd0(s32);
M2C_UNK func_020d4e54(u16);
M2C_UNK func_020d4f38(u16);
M2C_UNK func_020d50f0(s32);
s32 func_020d516c(u16, void *);
s32 func_020d54a8();
extern u8 data_02138ee8;
extern void *data_0213e0a8;

void func_02028548(u8 *arg0) {
    u16 v;
    s32 *p;
    s32 r;
    s32 flag;
    volatile s32 tmp[2];
    s32 a;
    s32 b;

    v = *(u16 *) (arg0 + 0x2A);
    if (v == 0x2A0 && *(u16 *) (arg0 + 0x28) == 0x2A) {
        p = *(s32 **) (arg0 + 0x3C);
        if (p != NULL) {
            func_020d50f0(*p);
        }
    } else if (v == 0x2A0) {
        if (*(u16 *) (arg0 + 0x28) == 0x2B) {
            func_02084bd0(*(s32 *) ((u8 *) data_0213e0a8 + 0xFC));
        } else {
            func_020d4f38(*(u16 *) (arg0 + 0x28));
        }
    } else if (arg0[0x2C] != 0) {
        func_020d4e54(v);
    } else {
        if (*(s32 *) (arg0 + 0x30) != *(s32 *) &data_02138ee8 ||
            (a = *((s32 *) &data_02138ee8 + 1), tmp[0] = a, *(s32 *) (arg0 + 0x34) != a) ||
            (b = *((s32 *) &data_02138ee8 + 2), tmp[1] = b, *(s32 *) (arg0 + 0x38) != b)) {
            flag = 1;
        } else {
            flag = 0;
        }
        if (flag != 0) {
            r = func_020d516c(v, arg0 + 0x30);
        } else {
            r = func_020d54a8();
        }
        p = *(s32 **) (arg0 + 0x3C);
        if (p != NULL) {
            *p = r;
        }
    }
    arg0[0x13] = 1;
}
