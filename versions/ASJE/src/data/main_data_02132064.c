/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02132058[];
extern u8 data_021320ec[];
extern u8 func_020690f0[];
extern u8 func_0206912c[];
extern u8 func_0206b2f0[];
extern u8 func_0206b4bc[];
extern u8 func_0206b638[];
extern u8 func_0206bb08[];
extern u8 func_0206bb0c[];

u32 data_02132064[8] = {0x5047364E, 0x756E654D, 0x54433231, 0x6E496261,
                        0x61726574, 0x00457463, 0x00000000, (u32) &data_02132058};
u32 data_02132084[9] = {(u32) &func_020690f0, (u32) &func_0206912c, (u32) &func_0206bb0c,
                        (u32) &func_0206bb08, (u32) &func_0206b638, (u32) &func_0206b2f0,
                        (u32) &func_0206b4bc, 0x00000000,           (u32) &data_021320ec};
