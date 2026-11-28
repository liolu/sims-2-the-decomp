/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u8 func_0203b368();                                 /* extern */
M2C_UNK func_0203b51c(s32, s32, s32, M2C_UNK (*)(M2C_UNK), s32); /* extern */
M2C_UNK func_020467a4(s32);                         /* extern */
extern void *data_0213d728;
extern M2C_UNK data_0213d73c;

void func_0204d9e0(s32 arg0) {
    M2C_FIELD(data_0213d728, u8 *, 4) = func_0203b368();
    func_020467a4(M2C_FIELD(&data_0213d73c, s32 *, 0));
    if ((M2C_FIELD(data_0213d728, u8 *, 4) != 0) && ((s32) M2C_FIELD(&data_0213d73c, s32 *, 8) > 0)) {
        func_0203b51c(M2C_FIELD(&data_0213d73c, s32 *, 4), M2C_FIELD(&data_0213d73c, s32 *, 8),
                      M2C_FIELD(&data_0213d73c, s32 *, 0xC), M2C_FIELD(&data_0213d73c, M2C_UNK(**)(M2C_UNK), 0x10), arg0);
        return;
    }
    M2C_FIELD(&data_0213d73c, M2C_UNK(**)(M2C_UNK), 0x10)(0);
}
