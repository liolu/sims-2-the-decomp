/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02016fb4(void *);                      /* extern */
M2C_UNK func_02017640(void *);                      /* extern */
M2C_UNK func_02046844(void *);                      /* extern */
extern M2C_UNK data_0213518c;
extern M2C_UNK data_021351c4;
extern s32 data_027e0000;

void *func_020c0bd8(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021351c4;
    if ((M2C_FIELD(arg0, u8 *, 0x16D) != 0) && (M2C_FIELD(arg0, u8 *, 0x16E) != 0) && (M2C_FIELD(arg0, u8 *, 0x169) != 0)) {
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
        temp_r0 = M2C_FIELD(arg0, void ***, 0x12C);
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        if (data_027e0000 == 0) {
            data_027e0000 = 1;
        } else {
            data_027e0000 = 0;
        }
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x90) = &data_0213518c;
    func_02016fb4(arg0 + 0x90);
    func_02017640(arg0);
    func_02046844(arg0);
    return arg0;
}
