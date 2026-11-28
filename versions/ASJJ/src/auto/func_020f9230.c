/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_020f64a8();
extern void func_020f9230();
extern u32 data_02145a84;
extern u32 data_02145a9c;
extern u32 data_02145a98;
extern s32 data_02145a94;
extern const struct {
    u16 blk1;
    u16 blk2;
    u16 szBlk1;
} data_0212ef74[16];

/* func_0214c6a8 from https://github.com/RonyxDumb/mkds src/arm9/0214c6a8_func_0214c6a8.c (license: none), reused by
 * tools/donor_match.py */
void func_020f9230() {
    u32 temp      = func_020f64a8();
    data_02145a94 = (s32) temp;
    data_02145a84 = (u32) (data_0212ef74[temp].blk1 << 0xC);
    data_02145a98 = (u32) (data_0212ef74[temp].blk2 << 0xC);
    data_02145a9c = (u32) (data_0212ef74[temp].szBlk1 << 0xC);
}
