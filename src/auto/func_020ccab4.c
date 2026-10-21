/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204e3dc(s32, M2C_UNK, s32, s32, s32, M2C_UNK *); /* extern */
extern M2C_UNK data_0213d7b0;
extern s32 data_0213d868;
extern M2C_UNK func_020cc110;

void func_020ccab4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xBC) != 0) {
        func_0204e3dc(data_0213d868, 2, M2C_FIELD(&data_0213d7b0, s32 *, 0xA4), M2C_FIELD(arg0, s32 *, 0xC0),
                      M2C_FIELD(arg0, s32 *, 0xC4), &func_020cc110);
        return;
    }
    func_0204e3dc(data_0213d868, 1, M2C_FIELD(&data_0213d7b0, s32 *, 0xA4), M2C_FIELD(arg0, s32 *, 0xC0),
                  M2C_FIELD(arg0, s32 *, 0xC4), &func_020cc110);
}
