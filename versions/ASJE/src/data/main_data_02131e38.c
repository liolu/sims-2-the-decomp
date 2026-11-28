/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02131e28[];
extern u8 data_02131e84[];
extern u8 data_02139050[];
extern u8 data_02139060[];

u32 data_02131e38[2] = {(u32) &data_02139060, (u32) &data_02131e28};
u32 data_02131e40[3] = {(u32) &data_02139050, (u32) &data_02131e84, (u32) &data_02131e38};
