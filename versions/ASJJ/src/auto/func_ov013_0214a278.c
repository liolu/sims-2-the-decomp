/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK func_0200fb30(s32, s32, s32);
extern M2C_UNK func_020105d0(s32);
extern M2C_UNK func_0203c574();
extern M2C_UNK func_020464b0(s32);
extern u8 *data_0213e0a8;
extern s32 data_027e0000;
extern u8 data_027e0014;

void func_ov013_0214a278(u8 *arg0) {
    u16 var_r3;
    u8 *temp_r2;

    func_0200fb30(*(s32 *) (data_0213e0a8 + 0xF8), 0, 0);
    func_020464b0(*(s32 *) (arg0 + 0xD4));
    *(s32 *) (arg0 + 0xD4) = 0;
    func_0203c574();
    var_r3 = 0;
    do {
        temp_r2 = arg0 + (var_r3 * 4);
        if (*(s32 *) (temp_r2 + 0x84) != 0) {
            *(s32 *) (temp_r2 + 0x84) = 0;
        }
        var_r3 += 1;
    } while (var_r3 < 8);
    func_020105d0(data_027e0000 * 0x34 + (s32) &data_027e0014);
}
