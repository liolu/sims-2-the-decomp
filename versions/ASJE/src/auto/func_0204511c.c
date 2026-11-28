#include "m2c.h"
extern void *data_02139d40;
extern s32 *data_02139d44;
extern s32 *data_02139d48;
s32 func_0204511c(s32 *arg0) {
    s32 n;
    data_02139d44 = arg0;
    n             = arg0[0];
    data_02139d48 = (s32 *) ((u8 *) arg0 + 4);
    data_02139d40 = (void *) ((u8 *) arg0 + n);
    return 0;
}
