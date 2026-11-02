/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020bbee0(s32, M2C_UNK *);
M2C_UNK func_020bd908(M2C_UNK *, u16, M2C_UNK, M2C_UNK, s32);
M2C_UNK func_020bdb24(M2C_UNK *);
M2C_UNK func_020bdb84(M2C_UNK *, s32);
extern u16 data_02124754;

void func_0208ee4c(void *arg0, s32 arg1) {
    u32 sp4[10];
    func_020bdb84((M2C_UNK *) sp4, 0xFFFF);
    func_020bd908((M2C_UNK *) sp4, *(u16 *) ((u8 *) &data_02124754 + arg1 * 2), 0x40, 0x40, 4);
    func_020bbee0(*(s32 *) ((u8 *) arg0 + 4) + 0x1A4, (M2C_UNK *) sp4);
    func_020bdb24((M2C_UNK *) sp4);
}
