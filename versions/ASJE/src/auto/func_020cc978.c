/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204e364(s32, M2C_UNK, s32, s32, s32, M2C_UNK *); /* extern */
extern M2C_UNK data_0213d670;
extern s32 data_0213d728;
extern M2C_UNK func_020cbfd4;

void func_020cc978(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xBC) != 0) {
        func_0204e364(data_0213d728, 2, M2C_FIELD(&data_0213d670, s32 *, 0xA4), M2C_FIELD(arg0, s32 *, 0xC0),
                      M2C_FIELD(arg0, s32 *, 0xC4), &func_020cbfd4);
        return;
    }
    func_0204e364(data_0213d728, 1, M2C_FIELD(&data_0213d670, s32 *, 0xA4), M2C_FIELD(arg0, s32 *, 0xC0),
                  M2C_FIELD(arg0, s32 *, 0xC4), &func_020cbfd4);
}
