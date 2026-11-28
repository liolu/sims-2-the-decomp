/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02044480(s32);                         /* extern */
M2C_UNK func_020467a4(s32);                         /* extern */
M2C_UNK func_020467cc(void *);                      /* extern */
extern void *data_0213e2f4;
extern s32 data_0213f7dc;
extern void *data_0213f7e0;
extern s32 data_0213f7e4;

void func_020b3cd8(void) {
    M2C_FIELD(data_0213e2f4, s32 *, 0x468C) = (s32) M2C_FIELD(data_0213f7e0, s32 *, 0x4C);
    func_020467cc(data_0213f7e0);
    data_0213f7e0 = NULL;
    func_020467a4(data_0213f7e4);
    data_0213f7e4 = 0;
    func_020467a4(data_0213f7dc);
    data_0213f7dc = 0;
    func_02044480(0x1E25);
}
