/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02132618[];
extern u8 data_02132624[];
extern u8 func_02070968[];
extern u8 func_02070984[];
extern u8 func_02070c44[];
extern u8 func_02070dcc[];
extern u8 func_02070e58[];
extern u8 func_020714a4[];
extern u8 func_020714a8[];

u32 data_02132648[8] = {0x5047364E, 0x756E654D, 0x53433231, 0x646E756F,
                        0x64696C53, 0x00457265, 0x00000000, (u32) &data_02132624};
u32 data_02132668[9] = {(u32) &func_02070968, (u32) &func_02070984, (u32) &func_020714a8,
                        (u32) &func_020714a4, (u32) &func_02070e58, (u32) &func_02070c44,
                        (u32) &func_02070dcc, 0x00000000,           (u32) &data_02132618};
