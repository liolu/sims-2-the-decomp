/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02117e4c[];
extern u8 data_02122018[];
extern u8 data_02122038[];
extern u8 data_02122048[];
extern u8 data_02122058[];
extern u8 data_02122060[];
extern u8 data_021220a0[];
extern u8 data_021220d0[];
extern u8 data_021221c8[];

const u32 data_02122618[11] = {0x08150813, 0x00040826,           0x00050004, 0x00030005,
                               0xFF070000, (u32) &data_02122048, 0x00010828, (u32) &data_02122018,
                               0x00010816, (u32) &data_02117e4c, 0x00000829};
const u32 data_02122644[17] = {
    0x08020800, 0x00040805,           0x00050004, 0x00060005,           0xFFFF0005, (u32) &data_021220a0,
    0x00010803, (u32) &data_02122038, 0x00010809, (u32) &data_021220d0, 0x0001080C, (u32) &data_02122058,
    0x0001080E, (u32) &data_021221c8, 0x00010811, (u32) &data_02122060, 0x00010806};
