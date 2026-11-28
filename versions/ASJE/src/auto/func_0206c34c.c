/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0206d668(s32, u16);
void func_020d5880(s32);

void func_0206c34c(u8 *arg0) {
    volatile s32 fr[5];
    s32 spC;
    s32 sp10;
    s32 t;
    s32 temp_r0;
    s32 temp_r1_2;

    if ((*(s32 *) (arg0 + 4) & 1) != 1) {
        return;
    }
    func_020d5880(0x16A);
    spC                    = *(s32 *) (arg0 + 0x7C);
    fr[3]                  = spC;
    sp10                   = *(s32 *) (arg0 + 0x78);
    fr[4]                  = sp10;
    temp_r1_2              = *(s32 *) (arg0 + 0x50) - sp10;
    fr[0]                  = temp_r1_2;
    temp_r0                = *(s32 *) (arg0 + 0x54) - spC;
    fr[1]                  = temp_r0;
    *(s32 *) (arg0 + 0x94) = temp_r1_2;
    t                      = fr[1];
    fr[2]                  = t;
    *(s32 *) (arg0 + 0x98) = t;
    func_0206d668(*(s32 *) (arg0 + 0x90), *(u16 *) (arg0 + 0xA));
}
