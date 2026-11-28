/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_0213d234;
extern u8 data_0213d26c;

s32 func_0204c570(s32 arg0) {
    M2C_FIELD(data_0213d234, M2C_UNK(**)(void **, s32), 0xC)(&data_0213d234, arg0);
    data_0213d26c -= 1;
    return arg0;
}
