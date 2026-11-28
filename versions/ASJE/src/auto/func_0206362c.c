/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02001914();                            /* extern */
M2C_UNK func_02001944(M2C_UNK);                     /* extern */
M2C_UNK func_02063bf0(s32, s32);                    /* extern */
s32 *func_02077d3c(s32, M2C_UNK);                   /* extern */
extern s32 data_0213e2f4;

void func_0206362c(M2C_UNK arg0) {
    s32 temp_r4;

    func_02001944(0);
    temp_r4 = *func_02077d3c(data_0213e2f4 + 0x21DC, arg0);
    func_02063bf0(data_0213e2f4 + 0x4620, temp_r4);
    func_02063bf0(data_0213e2f4 + 0x4620, temp_r4);
    func_02063bf0(data_0213e2f4 + 0x4620, temp_r4);
    func_02063bf0(data_0213e2f4 + 0x4620, temp_r4);
    func_02063bf0(data_0213e2f4 + 0x4620, temp_r4);
    func_02001914();
}
