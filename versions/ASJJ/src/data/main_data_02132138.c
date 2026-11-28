/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02132108[];
extern u8 data_02132114[];
extern u8 func_02070958[];
extern u8 func_02070974[];
extern u8 func_02070c34[];
extern u8 func_02070dbc[];
extern u8 func_02070e48[];
extern u8 func_02071494[];
extern u8 func_02071498[];

u32 data_02132138[8] = {0x5047364E, 0x756E654D, 0x53433231, 0x646E756F,
                        0x64696C53, 0x00457265, 0x00000000, (u32) &data_02132114};
u32 data_02132158[9] = {(u32) &func_02070958, (u32) &func_02070974, (u32) &func_02071498,
                        (u32) &func_02071494, (u32) &func_02070e48, (u32) &func_02070c34,
                        (u32) &func_02070dbc, 0x00000000,           (u32) &data_02132108};
