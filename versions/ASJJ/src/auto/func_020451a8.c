#include "m2c.h"
extern void *data_02139960;
extern s32 *data_02139964;
extern s32 *data_02139968;
s32 func_020451a8(s32 *arg0) {
    s32 n;
    data_02139964 = arg0;
    n             = arg0[0];
    data_02139968 = (s32 *) ((u8 *) arg0 + 4);
    data_02139960 = (void *) ((u8 *) arg0 + n);
    return 0;
}
