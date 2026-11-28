/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02139050[];
extern u8 data_02139060[];
extern u8 data_ov014_0214b34c[];
extern u8 data_ov014_0214b37c[];

u32 data_ov014_0214b2e0[2] = {(u32) &data_02139060, (u32) &data_ov014_0214b34c};
u32 data_ov014_0214b2e8[3] = {(u32) &data_02139050, (u32) &data_ov014_0214b37c, (u32) &data_ov014_0214b2e0};
