/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0208bb24(void *, s32, s32, s32);          /* extern */
u8 *func_0208af58(s32);                             /* extern */
extern u8 data_021334c0;
extern u8 data_02133c2c;
extern u8 data_02133c58;
extern s32 *data_0213e2f4;

void *func_02090d4c(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *p = arg0;
    s32 i;
    s32 v;
    u8 *t;

    func_0208bb24(arg0, arg1, 0, 0);
    *(u32 *) (arg0 + 0x4C) = (u32) &data_021334c0;
    *(s32 *) (arg0 + 0x50) = arg2;
    *(s32 *) (arg0 + 0x54) = *(s16 *) (func_0208af58(arg2) + 0xE);
    *(u8 *) (arg0 + 0x58)  = 0;
    *(u8 *) (arg0 + 0x59)  = 1;
    *(u32 *) arg0          = (u32) &data_02133c2c;
    *(u32 *) (arg0 + 0x4C) = (u32) &data_02133c58;
    if (!(*data_0213e2f4 & 0x20)) {
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
