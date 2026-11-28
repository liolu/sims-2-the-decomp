/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204811c(s32, s32, M2C_UNK, s32, s32, s32);
M2C_UNK func_02048b90(M2C_UNK *);
s32 func_02048bec(M2C_UNK *);
M2C_UNK func_02048bf4(M2C_UNK *, M2C_UNK);
extern s32 data_02139a84;
extern M2C_UNK data_0213a998;
extern void *data_0213df5c;

void func_020590dc(void *arg0) {
    func_02048bf4(&data_0213a998, 0);
    if (func_02048bec(&data_0213a998) == 0) {
        return;
    }
    func_02048b90(&data_0213a998);
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        func_0204811c(data_02139a84, M2C_FIELD(arg0, s32 *, 0x24), 0, 0, (s32) M2C_FIELD(data_0213df5c, u8 *, 0x50), 0xF);
    } else {
        func_0204811c(data_02139a84, M2C_FIELD(arg0, s32 *, 0x24), 0, 0, 0, 0);
    }
    func_0204811c(data_02139a84, M2C_FIELD(arg0, s32 *, 0x28), 1, 0, 0, 0);
}
