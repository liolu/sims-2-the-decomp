/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02001914();                            /* extern */
M2C_UNK func_02001944(M2C_UNK);                     /* extern */
M2C_UNK func_02063d24(s32, s32);                    /* extern */
s32 *func_02077d80(s32, M2C_UNK);                   /* extern */
extern s32 data_0213df5c;

void func_02062378(M2C_UNK arg0) {
    s32 temp_r4;

    func_02001944(0);
    temp_r4 = *func_02077d80(data_0213df5c + 0x21E4, arg0);
    func_02063d24(data_0213df5c + 0x4628, temp_r4);
    func_02063d24(data_0213df5c + 0x4628, temp_r4);
    func_02063d24(data_0213df5c + 0x4628, temp_r4);
    func_02063d24(data_0213df5c + 0x4628, temp_r4);
    func_02063d24(data_0213df5c + 0x4628, temp_r4);
    func_02001914();
}
