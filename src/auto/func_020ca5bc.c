/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02051338(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_02052258(s32);                             /* extern */
M2C_UNK func_020c53dc(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_020c9444(void *);                      /* extern */
extern M2C_UNK data_021278cc;

void func_020ca5bc(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x2E) = 0;
    func_02051338(1, 0x7F, 0xC, func_02052258(0x7F8), 1);
    func_020c53dc(&data_021278cc, 0);
    func_020c9444(arg0);
}
