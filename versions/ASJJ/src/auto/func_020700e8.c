/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0213df5c;
extern u8 data_02139a84;
void func_0206ffac(void *);
void func_0205892c(s32, s32, s32, s32, s32, s32);

void func_020700e8(void *arg0) {
    u8 *p;
    s32 flag;
    volatile s32 *q;
    s32 *r;

    p       = *(u8 **) ((u8 *) arg0 + 0xA8);
    flag    = p[0x8C];
    p[0x8C] = 0;
    if (flag != 0) {
        q = (volatile s32 *) (*(u32 *) &data_0213df5c + 0x21e4 + *(s32 *) ((u8 *) arg0 + 0x28) * 0x2C);
        if ((q[5] & 2) != 0) {
            q[5] |= 4;
            func_0205892c(*(s32 *) &data_02139a84, *(s32 *) ((u8 *) arg0 + 0x28) + 0x19e, 0x19d, 0, 0, 1);
        }
    }
    func_0206ffac(arg0);
    r = *(s32 **) ((u8 *) arg0 + 0x9C);
    if (*(s32 *) ((u8 *) arg0 + 0x24) > 0) {
        r[1] |= 1;
    } else {
        r[1] &= ~1;
    }
    r = *(s32 **) ((u8 *) arg0 + 0xA0);
    if (*(s32 *) ((u8 *) arg0 + 0x24) < *(s32 *) ((u8 *) arg0 + 0x1C) - 1) {
        r[1] |= 1;
    } else {
        r[1] &= ~1;
    }
}
