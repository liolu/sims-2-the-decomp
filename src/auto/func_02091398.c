/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213355c;
extern u8 data_02133e98;
extern void *data_0213e434;

void func_02091398(u8 *arg0, s32 arg1) {
    u8 *base;
    s32 lr;
    s32 flag;
    s32 ip;
    s32 v;
    u8 *t;

    *(u32 *) arg0          = (u32) &data_0213355c;
    *(s32 *) (arg0 + 4)    = arg1;
    *(s32 *) (arg0 + 8)    = 0;
    *(s32 *) (arg0 + 0xC)  = 0;
    *(s32 *) (arg0 + 0x14) = 0;
    *(u8 *) (arg0 + 0x1C)  = 1;
    *(u32 *) arg0          = (u32) &data_02133e98;
    base                   = (u8 *) data_0213e434;
    lr                     = *(s32 *) (base + 0x44C8);
    flag                   = *(u8 *) (base + 0x26);
    if (lr >= 10) {
        return;
    }
    if (flag == 0) {
        return;
    }
    ip = *(s32 *) (arg0 + 8);
    if (ip > *(s32 *) (arg0 + 0xC)) {
        do {
            t = arg0 + (ip - 1);
            v = t[0x10];
            t = arg0 + ip;
            ip -= 1;
            t[0x10] = v;
        } while (ip > *(s32 *) (arg0 + 0xC));
    }
    arg0[*(s32 *) (arg0 + 0xC) + 0x10] = 0x57;
    *(s32 *) (arg0 + 0xC)              = *(s32 *) (arg0 + 0xC) + 1;
    *(s32 *) (arg0 + 8)                = *(s32 *) (arg0 + 8) + 1;
    if (lr + 5 >= 10) {
        return;
    }
    if (flag < 5) {
        return;
    }
    ip = *(s32 *) (arg0 + 8);
    if (ip > *(s32 *) (arg0 + 0xC)) {
        do {
            t = arg0 + (ip - 1);
            v = t[0x10];
            t = arg0 + ip;
            ip -= 1;
            t[0x10] = v;
        } while (ip > *(s32 *) (arg0 + 0xC));
    }
    arg0[*(s32 *) (arg0 + 0xC) + 0x10] = 0x58;
    *(s32 *) (arg0 + 0xC)              = *(s32 *) (arg0 + 0xC) + 1;
    *(s32 *) (arg0 + 8)                = *(s32 *) (arg0 + 8) + 1;
}
