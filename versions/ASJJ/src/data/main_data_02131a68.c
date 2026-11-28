/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02131a58[];
extern u8 data_02131ab4[];
extern u8 data_02138c7c[];
extern u8 data_02138c8c[];

u32 data_02131a68[2] = {(u32) &data_02138c8c, (u32) &data_02131a58};
u32 data_02131a70[3] = {(u32) &data_02138c7c, (u32) &data_02131ab4, (u32) &data_02131a68};
