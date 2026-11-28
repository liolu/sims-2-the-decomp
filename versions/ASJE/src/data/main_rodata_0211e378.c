/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_0203f8f4[];
extern u8 func_0203f9d8[];
extern u8 func_0203fbd0[];
extern u8 func_0203fbe0[];
extern u8 func_0203fd74[];
extern u8 func_0203fe80[];
extern u8 func_0203fed8[];
extern u8 func_020404dc[];
extern u8 func_02040508[];
extern u8 func_02040530[];
extern u8 func_02040560[];
extern u8 func_0204058c[];
extern u8 func_02040620[];
extern u8 func_020406ac[];
extern u8 func_020406c8[];
extern u8 func_020406fc[];
extern u8 func_02040768[];
extern u8 func_020407a8[];
extern u8 func_0204085c[];
extern u8 func_02040884[];
extern u8 func_020408ec[];
extern u8 func_020409e8[];
extern u8 func_02040a1c[];
extern u8 func_02040ad4[];
extern u8 func_02040afc[];
extern u8 func_02040b4c[];
extern u8 func_02040ba4[];
extern u8 func_02040c94[];
extern u8 func_02040cbc[];
extern u8 func_02040cd8[];
extern u8 func_02040d3c[];
extern u8 func_02040d5c[];
extern u8 func_02040dd8[];
extern u8 func_02040e98[];
extern u8 func_02040f28[];
extern u8 func_02040f98[];
extern u8 func_02041008[];
extern u8 func_0204106c[];
extern u8 func_020410d4[];
extern u8 func_02041144[];
extern u8 func_02041290[];
extern u8 func_020412ec[];
extern u8 func_020412f0[];
extern u8 func_020412f4[];
extern u8 func_02041338[];
extern u8 func_0204145c[];
extern u8 func_02041494[];
extern u8 func_02041648[];
extern u8 func_02041678[];
extern u8 func_020416a8[];
extern u8 func_02041790[];
extern u8 func_0204183c[];
extern u8 func_02041914[];
extern u8 func_02041990[];
extern u8 func_02041b60[];
extern u8 func_02041d40[];
extern u8 func_02041dc0[];
extern u8 func_02041f28[];
extern u8 func_02041f2c[];
extern u8 func_0204202c[];
extern u8 func_02042068[];
extern u8 func_020420cc[];
extern u8 func_020420f0[];
extern u8 func_020420f4[];
extern u8 func_02042254[];
extern u8 func_02042258[];
extern u8 func_020422a4[];
extern u8 func_02042304[];
extern u8 func_020423a4[];
extern u8 func_0204254c[];
extern u8 func_0204265c[];
extern u8 func_02042674[];
extern u8 func_02042678[];
extern u8 func_020426c4[];
extern u8 func_020426d4[];
extern u8 func_020426e4[];
extern u8 func_020426f4[];
extern u8 func_02042704[];
extern u8 func_02042710[];
extern u8 func_0204271c[];
extern u8 func_02042818[];
extern u8 func_02042904[];

const u32 data_0211e378[3]  = {0x40100401, 0x20080402, 0x20080402};
const u32 data_0211e384[12] = {0x00200808, 0x00801010, 0x02002020, 0x08004040, 0x00400810, 0x00800820,
                               0x01001020, 0x04002040, 0x00401008, 0x00802008, 0x01002010, 0x04004020};
const u32 data_0211e3b4[82] = {
    (u32) &func_02042904, (u32) &func_02042818, (u32) &func_0204271c, (u32) &func_02042710, (u32) &func_02042704,
    (u32) &func_020426f4, (u32) &func_020426e4, (u32) &func_020426d4, (u32) &func_020426c4, (u32) &func_02042678,
    (u32) &func_0204265c, (u32) &func_02042674, (u32) &func_0204254c, (u32) &func_020423a4, (u32) &func_02042304,
    (u32) &func_020422a4, (u32) &func_02042258, (u32) &func_02042254, (u32) &func_020420f4, (u32) &func_020420f0,
    (u32) &func_020420cc, (u32) &func_02042068, (u32) &func_0204202c, (u32) &func_02041f2c, (u32) &func_02041f28,
    (u32) &func_02041dc0, (u32) &func_02041d40, (u32) &func_02041990, (u32) &func_02041914, (u32) &func_0204183c,
    (u32) &func_02041790, (u32) &func_02041b60, (u32) &func_020416a8, (u32) &func_02041678, (u32) &func_02041648,
    (u32) &func_02041494, (u32) &func_0204145c, (u32) &func_02041338, (u32) &func_020412f4, (u32) &func_020412f0,
    (u32) &func_020412ec, (u32) &func_02041290, (u32) &func_02041144, (u32) &func_020410d4, (u32) &func_0204106c,
    (u32) &func_02041008, (u32) &func_02040f98, (u32) &func_02040f28, (u32) &func_02040e98, (u32) &func_02040dd8,
    (u32) &func_02040d5c, (u32) &func_02040d3c, (u32) &func_02040cd8, (u32) &func_02040cbc, (u32) &func_02040c94,
    (u32) &func_02040ba4, (u32) &func_02040b4c, (u32) &func_02040afc, (u32) &func_02040ad4, (u32) &func_02040a1c,
    (u32) &func_020409e8, (u32) &func_020408ec, (u32) &func_02040884, (u32) &func_0204085c, (u32) &func_020407a8,
    (u32) &func_02040768, (u32) &func_020406fc, (u32) &func_020406c8, (u32) &func_020406ac, (u32) &func_02040620,
    (u32) &func_0204058c, (u32) &func_02040560, (u32) &func_02040530, (u32) &func_02040508, (u32) &func_020404dc,
    (u32) &func_0203fed8, (u32) &func_0203f8f4, (u32) &func_0203fe80, (u32) &func_0203fd74, (u32) &func_0203fbe0,
    (u32) &func_0203fbd0, (u32) &func_0203f9d8};
