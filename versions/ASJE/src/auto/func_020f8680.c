/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214b720 from https://github.com/RonyxDumb/mkds src/arm9/0214b720_func_0214b720.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_020f68b8();
extern void func_020f8680();
extern s32 data_02145e18;
extern u32 data_02145e14;
extern u32 data_02145e10;
#pragma thumb off
void func_020f8680() {
    data_02145e18 = (s32) func_020f68b8();
    switch (data_02145e18) {
        case 0:
            break;
        case 0x10:
            data_02145e14 = 0x06880000;
            data_02145e10 = 0x0;
            break;
        case 0x40:
            data_02145e14 = 0x06894000;
            data_02145e10 = 0x4000;
            break;
        case 0x20:
        case 0x60:
            data_02145e14 = 0x06890000;
            data_02145e10 = 0x0;
            break;
    }
}
