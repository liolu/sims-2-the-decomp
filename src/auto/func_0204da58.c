/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u8 func_0203b3e0();                                 /* extern */
M2C_UNK func_0203b594(s32, s32, s32, M2C_UNK (*)(M2C_UNK), s32); /* extern */
M2C_UNK func_0204681c(s32);                         /* extern */
extern void *data_0213d868;
extern M2C_UNK data_0213d87c;

void func_0204da58(s32 arg0) {
    M2C_FIELD(data_0213d868, u8 *, 4) = func_0203b3e0();
    func_0204681c(M2C_FIELD(&data_0213d87c, s32 *, 0));
    if ((M2C_FIELD(data_0213d868, u8 *, 4) != 0) && ((s32) M2C_FIELD(&data_0213d87c, s32 *, 8) > 0)) {
        func_0203b594(M2C_FIELD(&data_0213d87c, s32 *, 4), M2C_FIELD(&data_0213d87c, s32 *, 8),
                      M2C_FIELD(&data_0213d87c, s32 *, 0xC), M2C_FIELD(&data_0213d87c, M2C_UNK(**)(M2C_UNK), 0x10), arg0);
        return;
    }
    M2C_FIELD(&data_0213d87c, M2C_UNK(**)(M2C_UNK), 0x10)(0);
}
