/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020b898c(void *);
M2C_UNK func_020ee050(void *, s32);

typedef struct {
    s32 a;
    s32 b;
} S8;

void func_020b8c0c(u8 *arg0) {
    volatile s32 buf[1];
    s32 var_r7;
    u8 *var_r6;
    u8 *p4;
    s32 t;

    if ((((u32) (*(u16 *) (arg0 + 0xAC) << 0x18)) >> 0x1F) != 1) {
        return;
    }
    var_r6 = arg0 + 0x84;
    var_r7 = 0;
    do {
        t = ((S8 *) (arg0 + 0x84))[var_r7].a;
        if (t != 0) {
            func_020ee050(arg0 + 4, t);
            func_020b898c(var_r6);
        }
        var_r7 += 1;
        var_r6 += 8;
    } while (var_r7 < 4);
    *(u16 *) (arg0 + 0xAC) = (u16) (*(u16 *) (arg0 + 0xAC) & ~0x80);
}
