/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" s32 func_020d59bc(s32);
extern "C" void func_020d4f64(s32, s32);
extern u8 data_02139250;
extern "C" void func_02004608(void) {
    u8 *o;
    s32 v;
    s32 idx;
    s32 *tab;
    o = *(u8 **) &data_02139250;
    if (*(s32 *) (o + 0x2e8) == 0xa) {
        func_020d4f64(func_020d59bc(0x10a), 0x2000);
    }
    v = *(s32 *) (o + 0x2e8);
    if (v > 0) {
        *(s32 *) (o + 0x2e8) = v - 1;
        return;
    }
    idx                  = *(u8 *) (o + 0x2f1);
    tab                  = (s32 *) (o + 0x2cc);
    tab[idx]             = tab[idx] + 0xa;
    *(s32 *) (o + 0x2e4) = 0;
    *(u8 *) (o + 0x2f0)  = 1;
}
