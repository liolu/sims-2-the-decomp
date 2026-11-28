/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020105d0(s32);                         /* extern */
M2C_UNK func_0203c574();                            /* extern */
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;

void func_02088728(void) {
    func_0203c574();
    func_020105d0((data_027e0000 * 0x34) + (s32) &data_027e0014);
}
