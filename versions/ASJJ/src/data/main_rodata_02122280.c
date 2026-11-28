/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02117a74[];
extern u8 data_02121c80[];
extern u8 data_02121ca0[];
extern u8 data_02121cb0[];
extern u8 data_02121cc0[];
extern u8 data_02121cc8[];
extern u8 data_02121d08[];
extern u8 data_02121d38[];
extern u8 data_02121e30[];

const u32 data_02122280[11] = {0x08150813, 0x00040826,           0x00050004, 0x00030005,
                               0xFF070000, (u32) &data_02121cb0, 0x00010828, (u32) &data_02121c80,
                               0x00010816, (u32) &data_02117a74, 0x00000829};
const u32 data_021222ac[17] = {
    0x08020800, 0x00040805,           0x00050004, 0x00060005,           0xFFFF0005, (u32) &data_02121d08,
    0x00010803, (u32) &data_02121ca0, 0x00010809, (u32) &data_02121d38, 0x0001080C, (u32) &data_02121cc0,
    0x0001080E, (u32) &data_02121e30, 0x00010811, (u32) &data_02121cc8, 0x00010806};
