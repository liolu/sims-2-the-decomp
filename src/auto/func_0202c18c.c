/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02083dc8(void *, s32);                 /* extern */
extern void *data_0213e434;

s32 func_0202c18c(void *arg0, s32 arg1) {
    void *temp_r1;

    if (arg1 == 0xA) {
        if ((s32) M2C_FIELD(data_0213e434, s32 *, 0x215C) < 6) {
            func_02083dc8(data_0213e434 + 0x18, M2C_FIELD(arg0, s32 *, 0x28));
            temp_r1                      = M2C_FIELD(arg0, void **, 4);
            M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) | 0x82);
        }
        return 0;
    }
    return 0;
}
