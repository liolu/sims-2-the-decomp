#include "m2c.h"
extern void *data_02139e80;
extern s32 *data_02139e84;
extern s32 *data_02139e88;
s32 func_02045194(s32 *arg0) {
    s32 n;
    data_02139e84 = arg0;
    n             = arg0[0];
    data_02139e88 = (s32 *) ((u8 *) arg0 + 4);
    data_02139e80 = (void *) ((u8 *) arg0 + n);
    return 0;
}
