/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020444f8(s32);                         /* extern */
M2C_UNK func_0204681c(s32);                         /* extern */
M2C_UNK func_02046844(void *);                      /* extern */
extern void *data_0213e434;
extern s32 data_0213f91c;
extern void *data_0213f920;
extern s32 data_0213f924;

void func_020b3da0(void) {
    M2C_FIELD(data_0213e434, s32 *, 0x468C) = (s32) M2C_FIELD(data_0213f920, s32 *, 0x4C);
    func_02046844(data_0213f920);
    data_0213f920 = NULL;
    func_0204681c(data_0213f924);
    data_0213f924 = 0;
    func_0204681c(data_0213f91c);
    data_0213f91c = 0;
    func_020444f8(0x1E25);
}
