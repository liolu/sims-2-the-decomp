/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02073c24(void *arg0, s32 arg1) {
    u8 *temp_ip;
    u8 *temp_r3;
    u8 *temp_lr;
    u8 *temp_r6;
    u8 *temp_r7;
    s32 var_r1;
    s32 temp_r2;
    s32 temp_r1;
    u8 *temp_r2_2;

    var_r1  = arg1;
    temp_ip = (u8 *) arg0 + (*(s32 *) ((u8 *) arg0 + 0x2E0) * 0x58);
    temp_r3 = *(u8 **) (*(u8 **) ((u8 *) arg0 + (var_r1 * 4) + 0x2E4) + 0x130);
    if (var_r1 < (*(s32 *) (temp_ip + 0x54) - 1)) {
        do {
            temp_r2                    = var_r1 + 1;
            temp_r7                    = temp_ip + (temp_r2 * 4);
            temp_r6                    = temp_ip + (var_r1 * 4);
            temp_r6[0]                 = temp_r7[0];
            temp_lr                    = (u8 *) arg0 + (var_r1 * 4);
            temp_r6[1]                 = temp_r7[1];
            var_r1                     = temp_r2;
            temp_r6[2]                 = temp_r7[2];
            temp_r6[3]                 = temp_r7[3];
            *(s32 *) (temp_lr + 0x2E4) = *(s32 *) ((u8 *) arg0 + (temp_r2 * 4) + 0x2E4);
        } while (temp_r2 < (*(s32 *) (temp_ip + 0x54) - 1));
    }
    temp_r1                              = *(s32 *) (temp_r3 + 0x2C);
    temp_r2_2                            = temp_ip + 0x38;
    *(s32 *) (temp_r2_2 + (temp_r1 * 4)) = *(s32 *) (temp_r2_2 + (temp_r1 * 4)) - 1;
    *(s32 *) (temp_ip + 0x54)            = *(s32 *) (temp_ip + 0x54) - 1;
}
