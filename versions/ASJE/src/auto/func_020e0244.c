/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_0210f1f4(s32);
s32 func_0210f23c(s32, s32);
s32 func_0210f4fc(s32, s32);
extern u8 data_02138698;

s32 func_020e0244(s32 arg0) {
    s32 a;
    s32 v;

    a = func_0210f1f4((u32) (arg0 & ~0x10000000) >> 5);
    v = func_0210f23c(a, ((s32 *) &data_02138698)[arg0 & 31]);
    if ((arg0 & 0x10000000) != 0) {
        v = func_0210f4fc(0, v);
    }
    return v;
}
