/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02133f70[];
extern u8 data_02133ff8[];
extern u8 func_02014e28[];
extern u8 func_02014e34[];
extern u8 func_0208b1b8[];
extern u8 func_0208b210[];
extern u8 func_020931c8[];
extern u8 func_020931ec[];
extern u8 func_02093218[];
extern u8 func_020934c0[];

u32 data_02133f7c[7]  = {0x49433731, 0x7265746E, 0x61746361, 0x47656C62, 0x006E6F6F, 0x00000000, (u32) &data_02133f70};
u32 data_02133f98[10] = {(u32) &func_020931c8, (u32) &func_020931ec, (u32) &func_02014e28, (u32) &func_020934c0,
                         (u32) &func_0208b210, (u32) &func_02093218, (u32) &func_02014e34, (u32) &func_0208b1b8,
                         0x00000000,           (u32) &data_02133ff8};
