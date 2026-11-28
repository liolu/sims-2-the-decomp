/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"
M2C_UNK func_020df044(s32);
M2C_UNK func_020df254(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32);
extern u8 data_02142b40;
extern M2C_UNK func_020e3c50;
extern M2C_UNK func_020e3ce4;
extern M2C_UNK func_020e3d10;
s32 func_020e3b9c(s32 arg0) {
    s32 t;
    t = arg0 & 0xF;
    switch (t) {
        case 8:
        case 9:
            func_020df254(0xF, 0xA, 5, 0, 7, 3, 3, 3);
            break;
        default:
            return 0;
    }
    *(s32 *) (&data_02142b40 + 0x80)   = 2;
    *(void **) (&data_02142b40 + 0x70) = &func_020e3ce4;
    *(void **) (&data_02142b40 + 0x74) = &func_020e3c50;
    *(s32 *) (&data_02142b40 + 0x88)   = 0;
    *(s32 *) (&data_02142b40 + 0x84)   = 1;
    *(void **) (&data_02142b40 + 0x78) = &func_020e3d10;
    func_020df044(arg0 & 0x70000000);
    return 1;
}
