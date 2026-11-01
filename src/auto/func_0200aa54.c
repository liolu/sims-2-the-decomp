/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02045894(s32, void *);
extern M2C_UNK data_0212f9f0;
extern s32 data_027e0000;
extern M2C_UNK data_027e0014;
void *func_0200aa54(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212f9f0;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s16 *, 0xA)    = 0;
    M2C_FIELD(arg0, s16 *, 0xC)    = 0;
    M2C_FIELD(arg0, s16 *, 0xE)    = 0;
    M2C_FIELD(arg0, s32 *, 4)      = (s32) (M2C_FIELD(arg0, s32 *, 4) | 1);
    M2C_FIELD(arg0, u8 *, 8)       = 0xFF;
    M2C_FIELD(arg0, u8 *, 9)       = 0xFF;
    func_02045894((data_027e0000 * 0x34) + (s32) &data_027e0014, arg0);
    return arg0;
}
