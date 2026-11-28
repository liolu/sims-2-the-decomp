/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_0203f9d4[];
extern u8 func_0203fab8[];
extern u8 func_0203fcb0[];
extern u8 func_0203fcc0[];
extern u8 func_0203fe54[];
extern u8 func_0203ff60[];
extern u8 func_0203ffb8[];
extern u8 func_020405b4[];
extern u8 func_020405d8[];
extern u8 func_02040600[];
extern u8 func_02040628[];
extern u8 func_0204064c[];
extern u8 func_020406e0[];
extern u8 func_0204076c[];
extern u8 func_02040788[];
extern u8 func_020407bc[];
extern u8 func_02040820[];
extern u8 func_02040860[];
extern u8 func_02040914[];
extern u8 func_0204093c[];
extern u8 func_020409a4[];
extern u8 func_02040aa0[];
extern u8 func_02040ad4[];
extern u8 func_02040b94[];
extern u8 func_02040bbc[];
extern u8 func_02040c0c[];
extern u8 func_02040c64[];
extern u8 func_02040d54[];
extern u8 func_02040d7c[];
extern u8 func_02040d98[];
extern u8 func_02040dfc[];
extern u8 func_02040e1c[];
extern u8 func_02040e98[];
extern u8 func_02040f58[];
extern u8 func_02040fdc[];
extern u8 func_02041044[];
extern u8 func_020410ac[];
extern u8 func_02041110[];
extern u8 func_02041178[];
extern u8 func_020411e0[];
extern u8 func_0204132c[];
extern u8 func_02041388[];
extern u8 func_0204138c[];
extern u8 func_02041390[];
extern u8 func_020413d4[];
extern u8 func_020414f8[];
extern u8 func_02041530[];
extern u8 func_020416e4[];
extern u8 func_0204170c[];
extern u8 func_02041734[];
extern u8 func_0204181c[];
extern u8 func_020418c8[];
extern u8 func_020419a0[];
extern u8 func_02041a1c[];
extern u8 func_02041bec[];
extern u8 func_02041dcc[];
extern u8 func_02041e4c[];
extern u8 func_02041fb4[];
extern u8 func_02041fb8[];
extern u8 func_020420b8[];
extern u8 func_020420f4[];
extern u8 func_02042158[];
extern u8 func_0204217c[];
extern u8 func_02042180[];
extern u8 func_020422e0[];
extern u8 func_020422e4[];
extern u8 func_02042330[];
extern u8 func_02042390[];
extern u8 func_02042430[];
extern u8 func_020425d8[];
extern u8 func_020426e8[];
extern u8 func_02042700[];
extern u8 func_02042704[];
extern u8 func_02042750[];
extern u8 func_02042760[];
extern u8 func_02042770[];
extern u8 func_02042780[];
extern u8 func_02042790[];
extern u8 func_0204279c[];
extern u8 func_020427a8[];
extern u8 func_020428a4[];
extern u8 func_02042990[];

const u32 data_0211dfa0[3]  = {0x40100401, 0x20080402, 0x20080402};
const u32 data_0211dfac[12] = {0x00200808, 0x00801010, 0x02002020, 0x08004040, 0x00400810, 0x00800820,
                               0x01001020, 0x04002040, 0x00401008, 0x00802008, 0x01002010, 0x04004020};
const u32 data_0211dfdc[82] = {
    (u32) &func_02042990, (u32) &func_020428a4, (u32) &func_020427a8, (u32) &func_0204279c, (u32) &func_02042790,
    (u32) &func_02042780, (u32) &func_02042770, (u32) &func_02042760, (u32) &func_02042750, (u32) &func_02042704,
    (u32) &func_020426e8, (u32) &func_02042700, (u32) &func_020425d8, (u32) &func_02042430, (u32) &func_02042390,
    (u32) &func_02042330, (u32) &func_020422e4, (u32) &func_020422e0, (u32) &func_02042180, (u32) &func_0204217c,
    (u32) &func_02042158, (u32) &func_020420f4, (u32) &func_020420b8, (u32) &func_02041fb8, (u32) &func_02041fb4,
    (u32) &func_02041e4c, (u32) &func_02041dcc, (u32) &func_02041a1c, (u32) &func_020419a0, (u32) &func_020418c8,
    (u32) &func_0204181c, (u32) &func_02041bec, (u32) &func_02041734, (u32) &func_0204170c, (u32) &func_020416e4,
    (u32) &func_02041530, (u32) &func_020414f8, (u32) &func_020413d4, (u32) &func_02041390, (u32) &func_0204138c,
    (u32) &func_02041388, (u32) &func_0204132c, (u32) &func_020411e0, (u32) &func_02041178, (u32) &func_02041110,
    (u32) &func_020410ac, (u32) &func_02041044, (u32) &func_02040fdc, (u32) &func_02040f58, (u32) &func_02040e98,
    (u32) &func_02040e1c, (u32) &func_02040dfc, (u32) &func_02040d98, (u32) &func_02040d7c, (u32) &func_02040d54,
    (u32) &func_02040c64, (u32) &func_02040c0c, (u32) &func_02040bbc, (u32) &func_02040b94, (u32) &func_02040ad4,
    (u32) &func_02040aa0, (u32) &func_020409a4, (u32) &func_0204093c, (u32) &func_02040914, (u32) &func_02040860,
    (u32) &func_02040820, (u32) &func_020407bc, (u32) &func_02040788, (u32) &func_0204076c, (u32) &func_020406e0,
    (u32) &func_0204064c, (u32) &func_02040628, (u32) &func_02040600, (u32) &func_020405d8, (u32) &func_020405b4,
    (u32) &func_0203ffb8, (u32) &func_0203f9d4, (u32) &func_0203ff60, (u32) &func_0203fe54, (u32) &func_0203fcc0,
    (u32) &func_0203fcb0, (u32) &func_0203fab8};
