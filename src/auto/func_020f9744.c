/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_020f69bc();
extern void func_020f9744();
extern u32 data_02145f64;
extern u32 data_02145f7c;
extern u32 data_02145f78;
extern s32 data_02145f74;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_0212f474[16];

/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
void func_020f9744() {
    u32 temp      = func_020f69bc();
    data_02145f74 = (s32) temp;
    data_02145f64 = (u32) (data_0212f474[temp].blk1 << 0xC);
    data_02145f78 = (u32) (data_0212f474[temp].blk2 << 0xC);
    data_02145f7c = (u32) (data_0212f474[temp].szBlk1 << 0xC);
}
