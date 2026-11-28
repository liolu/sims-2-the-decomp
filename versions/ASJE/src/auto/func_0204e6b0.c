/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0211e5e0[];
extern void *data_0213d728;
extern s32 data_0213d72c[];
extern u8 data_0213d77c[];
s32 func_02046808(s32, s32, s32);
void func_0204db1c(void *, s32);
void func_0204dd54(void *, s32);
void *func_0204e6b0(void *arg0) {
    s32 r9;
    s32 r8;
    u8 *r7;
    u8 *r6;
    r9                 = 0;
    data_0213d728      = arg0;
    r7                 = data_0213d77c;
    r6                 = data_0211e5e0;
    r8                 = 0;
    *((s8 *) arg0 + 5) = 0;
    do {
        if (*(u8 *) (r6 + 0x14) != 0) {
            *(s32 *) (r7 + 8) = *(s32 *) (r6 + 8);
        } else {
            *(s32 *) (r7 + 8) = *(s32 *) (r6 + 8) * 3;
        }
        *(s32 *) (r7 + 4)   = *(s32 *) (r7 + 8) + *(s32 *) (r6 + 0x10);
        data_0213d72c[r8]   = func_02046808(*(s32 *) (r7 + 4) << 5, 3, 4);
        *(s32 *) (r7 + 0)   = func_02046808(*(s32 *) (r7 + 8) * 4, 3, 4);
        *(s32 *) (r7 + 0xC) = r9;
        r9 += *(s32 *) (r7 + 4) * *(s32 *) (r6 + 0xC);
        func_0204dd54(arg0, r8);
        func_0204db1c(arg0, r8);
        r7 += 0x18;
        r6 += 0x18;
        r8 += 1;
    } while (r8 < 4);
    return arg0;
}
