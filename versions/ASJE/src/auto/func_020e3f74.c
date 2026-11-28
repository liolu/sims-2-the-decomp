/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"
M2C_UNK func_020df41c(s32);
M2C_UNK func_020df62c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32);
extern u8 data_02142ee0;
extern M2C_UNK func_020e4028;
extern M2C_UNK func_020e40bc;
extern M2C_UNK func_020e40e8;
s32 func_020e3f74(s32 arg0) {
    s32 t;
    t = arg0 & 0xF;
    switch (t) {
        case 8:
        case 9:
            func_020df62c(0xF, 0xA, 5, 0, 7, 3, 3, 3);
            break;
        default:
            return 0;
    }
    *(s32 *) (&data_02142ee0 + 0x80)   = 2;
    *(void **) (&data_02142ee0 + 0x70) = &func_020e40bc;
    *(void **) (&data_02142ee0 + 0x74) = &func_020e4028;
    *(s32 *) (&data_02142ee0 + 0x88)   = 0;
    *(s32 *) (&data_02142ee0 + 0x84)   = 1;
    *(void **) (&data_02142ee0 + 0x78) = &func_020e40e8;
    func_020df41c(arg0 & 0x70000000);
    return 1;
}
