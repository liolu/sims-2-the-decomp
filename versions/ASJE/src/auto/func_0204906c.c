/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0213add0;
extern u8 data_0213c0f9;
extern s32 data_027e0000;
extern s32 data_027e00c4;
void func_0204906c(void) {
    u8 *temp_r1;
    s32 temp_r3;
    u32 var_ip;
    u32 *var_r2;
    u32 *var_r1;
    temp_r3 = data_027e0000 * 0x132C;
    var_ip  = *(&data_0213c0f9 + temp_r3);
    temp_r1 = *(u8 **) (&data_0213add0 + temp_r3);
    var_r2  = (u32 *) (temp_r1 + (var_ip * 8));
    var_r1  = (u32 *) (temp_r1 + 0x400 + (var_ip * 8));
    if (var_ip < 0x80U) {
        do {
            var_ip += 1;
            *var_r2 = (*var_r2 & ~0x300) | 0x200;
            *var_r1 = (*var_r1 & ~0x300) | 0x200;
            var_r2 += 2;
            var_r1 += 2;
        } while (var_ip < 0x80U);
    }
    *(s8 *) (data_027e00c4 + data_027e0000 + 0x2D) = 1;
}
