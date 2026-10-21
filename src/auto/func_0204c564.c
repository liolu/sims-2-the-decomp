/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_0213d754;
extern u8 data_0213d78c;

s32 func_0204c564(s32 arg0) {
    M2C_FIELD(data_0213d754, M2C_UNK(**)(void **, s32), 0xC)(&data_0213d754, arg0);
    data_0213d78c -= 1;
    return arg0;
}
