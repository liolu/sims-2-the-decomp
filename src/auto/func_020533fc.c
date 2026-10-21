/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02131a24;
extern void *data_0213e3d4;

void *func_020533fc(void *arg0, s8 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02131a24;
    M2C_FIELD(arg0, s8 *, 4)       = arg1;
    switch (arg2) {                                 /* irregular */
        case 0:
            M2C_FIELD(data_0213e3d4, M2C_UNK(**)(void **, void *), 8)(&data_0213e3d4, arg0);
            break;
        case 1:
            M2C_FIELD(data_0213e3d4, M2C_UNK(**)(void **, void *), 0x14)(&data_0213e3d4, arg0);
            break;
    }
    return arg0;
}
