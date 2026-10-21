/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001914();                            /* extern */
M2C_UNK func_02001944(M2C_UNK);                     /* extern */
M2C_UNK func_02063c68(s32, s32);                    /* extern */
s32 *func_02077db4(s32, M2C_UNK);                   /* extern */
extern s32 data_0213e434;

void func_0206250c(M2C_UNK arg0) {
    s32 temp_r4;

    func_02001944(0);
    temp_r4 = *func_02077db4(data_0213e434 + 0x21DC, arg0);
    func_02063c68(data_0213e434 + 0x4620, temp_r4);
    func_02063c68(data_0213e434 + 0x4620, temp_r4);
    func_02063c68(data_0213e434 + 0x4620, temp_r4);
    func_02063c68(data_0213e434 + 0x4620, temp_r4);
    func_02063c68(data_0213e434 + 0x4620, temp_r4);
    func_02001914();
}
