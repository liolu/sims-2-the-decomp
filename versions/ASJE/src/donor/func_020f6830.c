/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_ResetBankForSubBgExtPltt from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_vramcnt.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef struct {
    u16 lcdc;
    u16 bg;
    u16 obj;
    u16 arm7;
    u16 tex;
    u16 texPltt;
    u16 clearImage;
    u16 bgExtPltt;
    u16 objExtPltt;
    u16 subBg;
    u16 subObj;
    u16 subBgExtPltt;
    u16 subObjExtPltt;
} UnkGxVramState;
extern UnkGxVramState data_02145de8;
extern UnkGxVramState data_02145de8;
s32 func_020f68dc(u16 *bank);
s32 func_020f6830(void) {
    (*(u32 *) ((0x04001000) | 0x0)) &= ~0x40000000;
    return func_020f68dc(&data_02145de8.subBgExtPltt);
}
