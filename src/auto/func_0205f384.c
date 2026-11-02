/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void *data_0213e434;
void func_0205f384(void *arg0) {
    s32 t;
    u8 var_r4;
    var_r4 = 0;
    do {
        M2C_FIELD((arg0 + var_r4), s8 *, 8)                = 0;
        t                                                  = M2C_FIELD(data_0213e434, s32 *, 0x480C);
        M2C_FIELD((u8 *) arg0 + (var_r4 * 4), s32 *, 0x2C) = t;
        var_r4 += 1;
    } while ((u32) var_r4 < 0x21U);
    M2C_FIELD(arg0, s32 *, 4)    = 0x21;
    M2C_FIELD(arg0, s32 *, 0)    = 0x21;
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) M2C_FIELD(data_0213e434, s32 *, 0x480C);
}
