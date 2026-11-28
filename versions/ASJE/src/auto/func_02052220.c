/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02044480(u16);
M2C_UNK func_02044560(u16);
M2C_UNK func_0204511c();
M2C_UNK func_020fbeb4(u8 *);
extern u16 data_0211e698[];
extern s8 data_0213de80;
extern u8 data_0213de84;
void func_02052220(void) {
    u8 sp0[0x50];
    u8 var_r4;
    data_0213de84 = 6;
    func_020fbeb4(sp0);
    var_r4 = sp0[0];
    if (var_r4 == 0) {
        var_r4 = 1;
    }
    if ((s32) var_r4 >= 6) {
        var_r4 = 1;
    }
    if ((data_0213de84 != var_r4) && (data_0213de84 != 6)) {
        func_02044480(data_0211e698[data_0213de84]);
    }
    func_02044560(data_0211e698[var_r4]);
    func_0204511c();
    data_0213de84 = var_r4;
    switch (*(volatile u8 *) &data_0213de84) {
        case 2:
            data_0213de80 = 0x20;
            return;
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
            data_0213de80 = 0x2E;
            break;
    }
}
