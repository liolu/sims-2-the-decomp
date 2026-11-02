/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020525f0(s32, u8);
M2C_UNK func_02052800(s32, u8);
s32 func_020778ac(s32);
extern s32 data_0213e434;

void func_02040774(void *arg0, void *arg1) {
    u8 var_r5;
    u8 var_r4;
    var_r5 = *(u8 *) ((u8 *) arg1 + 3);
    var_r4 = *(u8 *) ((u8 *) arg1 + 4);
    if (func_020778ac(data_0213e434 + 0x2F78) != 0) {
        var_r5 = *(u8 *) ((u8 *) arg1 + 1);
        var_r4 = *(u8 *) ((u8 *) arg1 + 2);
    }
    func_020525f0(*(s32 *) ((u8 *) arg0 + 4) + 0x24, var_r5);
    func_02052800(*(s32 *) ((u8 *) arg0 + 4) + 0x24, var_r4);
}
