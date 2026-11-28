/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0201d4f4(void *);
void func_0201d7cc(void *);
void func_0202693c(void *);
void func_020117e8(void *, s32, void *, s32);
void func_02018acc(void *);

s32 func_020364e4(u8 *arg0, s32 arg1) {
    u8 b0[0x24];
    u8 b1[0x18];
    u8 b2[0x4c];

    if (arg1 == 0x3a) {
        func_0201d4f4(b0);
        func_0201d7cc(b1);
        func_0202693c(b2);
        func_020117e8(*(void **) (arg0 + 4), 0x22, b0, 0);
        *(u16 *) (b2 + 0x1c) = 0x3c;
        *(u16 *) (b2 + 0x30) = 0x135;
        func_020117e8(*(void **) (arg0 + 4), 8, b2, 0);
        *(u16 *) (b1 + 0x12) = 200;
        func_020117e8(*(void **) (arg0 + 4), 0x23, b1, 0);
        *(u16 *) (b0 + 0x1c) = 0;
        *(u16 *) (b0 + 0x10) = 0x111;
        *(u16 *) (b0 + 0x12) = 0x111;
        func_020117e8(*(void **) (arg0 + 4), 0x22, b0, 0);
        func_02018acc(b2);
        func_02018acc(b1);
        func_02018acc(b0);
    }
    return 0;
}
