/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0205892c(s32, s32, s32, s32, s32, s32);
extern s32 data_02139a84;

void func_0208916c(u8 *arg0) {
    u16 v;
    u8 *temp_r1;
    s32 two;

    v       = *(u16 *) (arg0 + 0xA);
    temp_r1 = *(u8 **) (arg0 + 0x90);
    if (*(s32 *) (temp_r1 + 0x70) != 0) {
        return;
    }
    if (v == 1) {
        *(s32 *) (temp_r1 + 0x70) = 1;
        return;
    }
    two                       = 2;
    *(s32 *) (temp_r1 + 0x70) = two;
    func_0205892c(data_02139a84, 0x983, 0x982, two, 0, 1);
}
