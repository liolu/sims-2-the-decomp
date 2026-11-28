/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_021318e4;
extern void *data_0213e294;

void *func_02053384(void *arg0, s8 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021318e4;
    M2C_FIELD(arg0, s8 *, 4)       = arg1;
    switch (arg2) {                                 /* irregular */
        case 0:
            M2C_FIELD(data_0213e294, M2C_UNK(**)(void **, void *), 8)(&data_0213e294, arg0);
            break;
        case 1:
            M2C_FIELD(data_0213e294, M2C_UNK(**)(void **, void *), 0x14)(&data_0213e294, arg0);
            break;
    }
    return arg0;
}
