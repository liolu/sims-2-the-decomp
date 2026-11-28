/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef unsigned char u8;
typedef struct {
    u16 h[10];
} T20;

s32 func_02011090(u8 *, s32, s32, s32, s32);
s32 func_0204c934(s32);
s32 func_0204ca7c(s32);
void func_020b8d28(u8 *, u16);
extern u8 *data_0213996c;
extern T20 data_ov003_02150498;

void func_ov003_021496ac(u8 *arg0) {
    T20 sp4;
    u8 *t;

    sp4 = data_ov003_02150498;
    if (arg0[0x83] != 0) {
        t = *(u8 **) (arg0 + *(u16 *) (arg0 + 0x76) * 4 + 0x48);
        if (*(u16 *) (arg0 + 0x7C) == *(u16 *) (t + 0x1FE) && (((u32) (*(u16 *) (t + 0x1F8) << 0x1F)) >> 0x1F) == 1) {
            func_02011090(t, 0, 1, 1, 0);
            *(u16 *) (arg0 + 0x7C) = 0;
            arg0[0x83]             = 0;
        }
    } else if ((func_0204c934(1) != 0 || (*(u16 *) (data_0213996c + 2) & 1)) && *(u16 *) (arg0 + 0x7E) > 0x15E) {
        *(u16 *) (arg0 + 0x7E) = 0;
        *(u16 *) (arg0 + 0x7C) = sp4.h[func_0204ca7c(9)];
        arg0[0x83]             = 1;
        func_020b8d28(*(u8 **) (arg0 + *(u16 *) (arg0 + 0x76) * 4 + 0x48) + 0x14C, *(u16 *) (arg0 + 0x7C));
    }
    *(u16 *) (arg0 + 0x7E) = *(u16 *) (arg0 + 0x7E) + 1;
}
