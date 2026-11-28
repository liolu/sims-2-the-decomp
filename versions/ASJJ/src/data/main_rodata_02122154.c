/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02121c70[];
extern u8 data_02121cb8[];
extern u8 data_02121cd0[];
extern u8 data_02121d68[];
extern u8 data_02121d80[];

const u32 data_02122154[9]  = {0x1C011BFF,           0x000A1C04, 0x000A000A,           0x0002000A, 0xFFFF0001,
                               (u32) &data_02121d80, 0x00011C02, (u32) &data_02121cb8, 0x00011C06};
const u32 data_02122178[11] = {0x18BA18B8, 0x000418BC,           0x00050004, 0x00030005,
                               0xFFFF0000, (u32) &data_02121cd0, 0x000118BE, (u32) &data_02121d68,
                               0x000118C0, (u32) &data_02121c70, 0x000118BB};
