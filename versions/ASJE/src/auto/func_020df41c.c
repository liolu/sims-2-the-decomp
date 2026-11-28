/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

extern M2C_UNK data_02142ee0;
extern M2C_UNK func_020df4d0;
extern M2C_UNK func_020df58c;
extern M2C_UNK func_020df5dc;

void func_020df41c(s32 arg0) {
    if ((arg0 == 0x50000000) || (arg0 == 0x40000000) || (arg0 == 0x30000000)) {
        M2C_FIELD(&data_02142ee0, s32 *, 0x8C)      = (s32) (M2C_FIELD(&data_02142ee0, s32 *, 0x80) * 2);
        M2C_FIELD(&data_02142ee0, M2C_UNK **, 0x70) = (M2C_UNK *) M2C_FIELD(&data_02142ee0, M2C_UNK **, 0x74);
        M2C_FIELD(&data_02142ee0, s32 *, 0x88)      = 1;
    } else {
        M2C_FIELD(&data_02142ee0, s32 *, 0x8C) = (s32) M2C_FIELD(&data_02142ee0, s32 *, 0x80);
    }
    if (arg0 == 0x40000000) {
        M2C_FIELD(&data_02142ee0, M2C_UNK **, 0x70) = &func_020df5dc;
    }
    if (arg0 == 0x10000000) {
        if (M2C_FIELD(&data_02142ee0, s32 *, 0x88) == 0) {
            M2C_FIELD(&data_02142ee0, M2C_UNK **, 0x6C) = &func_020df4d0;
            return;
        }
        M2C_FIELD(&data_02142ee0, M2C_UNK **, 0x6C) = (M2C_UNK *) M2C_FIELD(&data_02142ee0, M2C_UNK **, 0x78);
        M2C_FIELD(&data_02142ee0, M2C_UNK **, 0x7C) = (M2C_UNK *) M2C_FIELD(&data_02142ee0, M2C_UNK **, 0x70);
        M2C_FIELD(&data_02142ee0, M2C_UNK **, 0x70) = &func_020df58c;
        return;
    }
    M2C_FIELD(&data_02142ee0, M2C_UNK **, 0x6C) = (M2C_UNK *) M2C_FIELD(&data_02142ee0, M2C_UNK **, 0x78);
}
