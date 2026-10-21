/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020525f0(s32, u8);                     /* extern */
M2C_UNK func_02052800(s32, u8);                     /* extern */
extern void *data_0213e434;

void func_02040964(void *arg0, void *arg1) {
    u8 temp_r0;
    u8 var_r3;
    u8 var_r5;

    var_r3  = 0;
    temp_r0 = M2C_FIELD(data_0213e434, u8 *, 0x2F9C);
    var_r5  = 0;
    switch (temp_r0) {
        default:
            break;
        case 0:
            var_r3 = M2C_FIELD(arg1, u8 *, 0);
            var_r5 = M2C_FIELD(arg1, u8 *, 1);
            break;
        case 1:
            var_r3 = M2C_FIELD(arg1, u8 *, 2);
            var_r5 = M2C_FIELD(arg1, u8 *, 3);
            break;
        case 2:
            var_r3 = M2C_FIELD(arg1, u8 *, 4);
            var_r5 = M2C_FIELD(arg1, u8 *, 5);
            break;
        case 3:
            var_r3 = M2C_FIELD(arg1, u8 *, 6);
            var_r5 = M2C_FIELD(arg1, u8 *, 7);
            break;
        case 4:
            var_r3 = M2C_FIELD(arg1, u8 *, 8);
            var_r5 = M2C_FIELD(arg1, u8 *, 9);
            break;
        case 5:
            var_r3 = M2C_FIELD(arg1, u8 *, 0xA);
            var_r5 = M2C_FIELD(arg1, u8 *, 0xB);
            break;
        case 6:
            var_r3 = M2C_FIELD(arg1, u8 *, 0xC);
            var_r5 = M2C_FIELD(arg1, u8 *, 0xD);
            break;
        case 7:
            var_r3 = M2C_FIELD(arg1, u8 *, 0xE);
            var_r5 = M2C_FIELD(arg1, u8 *, 0xF);
            break;
        case 8:
            var_r3 = M2C_FIELD(arg1, u8 *, 0x10);
            var_r5 = M2C_FIELD(arg1, u8 *, 0x11);
            break;
        case 9:
            var_r3 = M2C_FIELD(arg1, u8 *, 0x12);
            var_r5 = M2C_FIELD(arg1, u8 *, 0x13);
            break;
    }
    func_020525f0(M2C_FIELD(arg0, s32 *, 4) + 0x24, var_r3);
    func_02052800(M2C_FIELD(arg0, s32 *, 4) + 0x24, var_r5);
}
