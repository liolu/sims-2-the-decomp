/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02110700(void *, M2C_UNK *);             /* extern */

void func_021104c0(u8 *arg0) {
    M2C_UNK sp0;
    u8 temp_r4;
    void *temp_r0;

    temp_r4 = *arg0;
    temp_r0 = func_02110700(arg0 + 2, &sp0);
    if (!(temp_r4 & 0x40)) {
        return;
    }
    func_02110700(temp_r0, &sp0);
}
