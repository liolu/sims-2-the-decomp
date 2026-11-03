/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02084cf8(s32);
M2C_UNK func_020d5368(u16);
M2C_UNK func_020d544c(u16);
M2C_UNK func_020d5604(s32);
s32 func_020d5680(u16, void *);
s32 func_020d59bc();
extern u8 data_02139408;
extern void *data_0213e580;

void func_02028510(u8 *arg0) {
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
            func_020d5604(*p);
        }
    } else if (v == 0x2A0) {
        if (*(u16 *) (arg0 + 0x28) == 0x2B) {
            func_02084cf8(*(s32 *) ((u8 *) data_0213e580 + 0xFC));
        } else {
            func_020d544c(*(u16 *) (arg0 + 0x28));
        }
    } else if (arg0[0x2C] != 0) {
        func_020d5368(v);
    } else {
        if (*(s32 *) (arg0 + 0x30) != *(s32 *) &data_02139408 ||
            (a = *((s32 *) &data_02139408 + 1), tmp[0] = a, *(s32 *) (arg0 + 0x34) != a) ||
            (b = *((s32 *) &data_02139408 + 2), tmp[1] = b, *(s32 *) (arg0 + 0x38) != b)) {
            flag = 1;
        } else {
            flag = 0;
        }
        if (flag != 0) {
            r = func_020d5680(v, arg0 + 0x30);
        } else {
            r = func_020d59bc();
        }
        p = *(s32 **) (arg0 + 0x3C);
        if (p != NULL) {
            *p = r;
        }
    }
    arg0[0x13] = 1;
}
