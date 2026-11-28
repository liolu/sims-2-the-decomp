/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046398(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0209e524(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020bb91c(s32, M2C_UNK, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK data_02124640;
extern s32 data_0213e1ec;
extern s32 *data_0213e1f0;

void func_0209e60c(void) {
    func_02046398(data_0213e1ec, 0, 0x1000);
    func_0209e524(0x19, 0x32, &data_02124640, 1);
    func_020bb91c(*data_0213e1f0 + 0x1A4, 1, data_0213e1ec, 0x1000, 0);
}
