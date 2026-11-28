/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_021010e8(s16 *);
void func_02100fa0(s16 *);

void func_0204fc5c(u8 *arg0) {
    s16 tbl[4];

    if (((u32) (arg0[0] << 31)) >> 31 != 0) {
        return;
    }
    if (func_021010e8(tbl) == 0) {
        tbl[0] = 0x3B6;
        tbl[1] = 0x331;
        tbl[2] = 0xE35;
        tbl[3] = 0x12E6;
    }
    func_02100fa0(tbl);
    arg0[0] = (arg0[0] & ~1) | 1;
}
