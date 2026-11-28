/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02008804(s32);
M2C_UNK func_020168a4(void *, M2C_UNK);

void func_020088e8(s32 arg0) {
    volatile s32 w[4];
    u8 var_r8;
    u8 *temp_r7;
    s32 v;

    var_r8 = 0;
    do {
        temp_r7                  = (u8 *) arg0 + (var_r8 * 0x14);
        *(s8 *) (temp_r7 + 0xD0) = 0;
        if (*(void **) (temp_r7 + 0xC4) != NULL) {
            func_020168a4(*(void **) (temp_r7 + 0xC4), 1);
            v                                                    = *(s32 *) (temp_r7 + 0xC8);
            w[0]                                                 = v;
            *(s32 *) ((u8 *) *(void **) (temp_r7 + 0xC4) + 0x50) = v;
            v                                                    = *(s32 *) (temp_r7 + 0xCC);
            w[1]                                                 = v;
            *(s32 *) ((u8 *) *(void **) (temp_r7 + 0xC4) + 0x54) = v;
        }
        *(s8 *) (temp_r7 + 0x198) = 0;
        if (*(void **) (temp_r7 + 0x18C) != NULL) {
            func_020168a4(*(void **) (temp_r7 + 0x18C), 1);
            v                                                     = *(s32 *) (temp_r7 + 0x190);
            w[2]                                                  = v;
            *(s32 *) ((u8 *) *(void **) (temp_r7 + 0x18C) + 0x50) = v;
            v                                                     = *(s32 *) (temp_r7 + 0x194);
            w[3]                                                  = v;
            *(s32 *) ((u8 *) *(void **) (temp_r7 + 0x18C) + 0x54) = v;
        }
        var_r8 += 1;
    } while ((u32) var_r8 < 0xAU);
    *(s32 *) ((u8 *) arg0 + 0x2DC) = -1;
    func_02008804(arg0);
}
