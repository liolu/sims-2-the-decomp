/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_0205095c(M2C_UNK);
M2C_UNK func_020521e0(s32);
void func_0209748c(s32 arg0, s32 arg1) {
    s32 temp_r2;
    temp_r2 = arg0 + 0x10;
    if (*(u8 *) (temp_r2 + arg1) == 0x5F) {
        func_0205095c(0xC8);
    }
    func_020521e0(*(u8 *) (temp_r2 + arg1) + 0x735);
}
