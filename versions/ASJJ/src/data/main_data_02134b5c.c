/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02134b4c[];
extern u8 data_02134b70[];
extern u8 data_02138c7c[];
extern u8 data_02138c8c[];

u32 data_02134b5c[2] = {(u32) &data_02138c8c, (u32) &data_02134b4c};
u32 data_02134b64[3] = {(u32) &data_02138c7c, (u32) &data_02134b70, (u32) &data_02134b5c};
