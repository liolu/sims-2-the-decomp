/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02131c6c[];
extern u8 data_02131c94[];
extern u8 data_02138c7c[];
extern u8 data_02138c8c[];

u32 data_02131c80[2] = {(u32) &data_02138c8c, (u32) &data_02131c6c};
u32 data_02131c88[3] = {(u32) &data_02138c7c, (u32) &data_02131c94, (u32) &data_02131c80};
