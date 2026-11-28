/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0208ba60(void *, s32, s32, s32);          /* extern */
u8 *func_0208aebc(s32);                             /* extern */
extern u8 data_021330ec;
extern u8 data_02133858;
extern u8 data_02133884;
extern s32 *data_0213df5c;

void *func_02090ce4(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *p = arg0;
    s32 i;
    s32 v;
    u8 *t;

    func_0208ba60(arg0, arg1, 0, 0);
    *(u32 *) (arg0 + 0x4C) = (u32) &data_021330ec;
    *(s32 *) (arg0 + 0x50) = arg2;
    *(s32 *) (arg0 + 0x54) = *(s16 *) (func_0208aebc(arg2) + 0xE);
    *(u8 *) (arg0 + 0x58)  = 0;
    *(u8 *) (arg0 + 0x59)  = 1;
    *(u32 *) arg0          = (u32) &data_02133858;
    *(u32 *) (arg0 + 0x4C) = (u32) &data_02133884;
    if (!(*data_0213df5c & 0x20)) {
        i = *(s32 *) (arg0 + 0x8);
        if (i > *(s32 *) (arg0 + 0xC)) {
            do {
                t = p + (i - 1);
                v = t[0x10];
                t = p + i;
                i -= 1;
                t[0x10] = v;
            } while (i > *(s32 *) (arg0 + 0xC));
        }
        *(u8 *) (arg0 + *(s32 *) (arg0 + 0xC) + 0x10) = 0;
        *(s32 *) (arg0 + 0xC)                         = *(s32 *) (arg0 + 0xC) + 1;
        *(s32 *) (arg0 + 0x8)                         = *(s32 *) (arg0 + 0x8) + 1;
    }
    return arg0;
}
