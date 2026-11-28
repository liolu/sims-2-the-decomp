/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u8 func_0203b414();                                 /* extern */
M2C_UNK func_0203b5c8(s32, s32, s32, M2C_UNK (*)(M2C_UNK), s32); /* extern */
M2C_UNK func_02046830(s32);                         /* extern */
extern void *data_0213d348;
extern M2C_UNK data_0213d35c;

void func_0204d9f4(s32 arg0) {
    M2C_FIELD(data_0213d348, u8 *, 4) = func_0203b414();
    func_02046830(M2C_FIELD(&data_0213d35c, s32 *, 0));
    if ((M2C_FIELD(data_0213d348, u8 *, 4) != 0) && ((s32) M2C_FIELD(&data_0213d35c, s32 *, 8) > 0)) {
        func_0203b5c8(M2C_FIELD(&data_0213d35c, s32 *, 4), M2C_FIELD(&data_0213d35c, s32 *, 8),
                      M2C_FIELD(&data_0213d35c, s32 *, 0xC), M2C_FIELD(&data_0213d35c, M2C_UNK(**)(M2C_UNK), 0x10), arg0);
        return;
    }
    M2C_FIELD(&data_0213d35c, M2C_UNK(**)(M2C_UNK), 0x10)(0);
}
