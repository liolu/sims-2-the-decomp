/* compiler: 1.2/sp3 */
#include "m2c.h"
s32 func_0210f330(s32);
s32 func_0210f378(s32, s32);
s32 func_0210f638(s32, s32);
extern u8 data_021387d8;

s32 func_020e0380(s32 arg0) {
    s32 a;
    s32 v;

    a = func_0210f330((u32) (arg0 & ~0x10000000) >> 5);
    v = func_0210f378(a, ((s32 *) &data_021387d8)[arg0 & 31]);
    if ((arg0 & 0x10000000) != 0) {
        v = func_0210f638(0, v);
    }
    return v;
}
