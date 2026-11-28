/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0211e208[];
extern void *data_0213d348;
extern s32 data_0213d34c[];
extern u8 data_0213d39c[];
s32 func_02046894(s32, s32, s32);
void func_0204db30(void *, s32);
void func_0204dd68(void *, s32);
void *func_0204e6c4(void *arg0) {
    s32 r9;
    s32 r8;
    u8 *r7;
    u8 *r6;
    r9                 = 0;
    data_0213d348      = arg0;
    r7                 = data_0213d39c;
    r6                 = data_0211e208;
    r8                 = 0;
    *((s8 *) arg0 + 5) = 0;
    do {
        if (*(u8 *) (r6 + 0x14) != 0) {
            *(s32 *) (r7 + 8) = *(s32 *) (r6 + 8);
        } else {
            *(s32 *) (r7 + 8) = *(s32 *) (r6 + 8) * 3;
        }
        *(s32 *) (r7 + 4)   = *(s32 *) (r7 + 8) + *(s32 *) (r6 + 0x10);
        data_0213d34c[r8]   = func_02046894(*(s32 *) (r7 + 4) << 5, 3, 4);
        *(s32 *) (r7 + 0)   = func_02046894(*(s32 *) (r7 + 8) * 4, 3, 4);
        *(s32 *) (r7 + 0xC) = r9;
        r9 += *(s32 *) (r7 + 4) * *(s32 *) (r6 + 0xC);
        func_0204dd68(arg0, r8);
        func_0204db30(arg0, r8);
        r7 += 0x18;
        r6 += 0x18;
        r8 += 1;
    } while (r8 < 4);
    return arg0;
}
