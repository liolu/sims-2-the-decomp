/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214b720 from https://github.com/RonyxDumb/mkds src/arm9/0214b720_func_0214b720.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_020f64e0();
extern void func_020f82a8();
extern s32 data_02145a78;
extern u32 data_02145a74;
extern u32 data_02145a70;
#pragma thumb off
void func_020f82a8() {
    data_02145a78 = (s32) func_020f64e0();
    switch (data_02145a78) {
        case 0:
            break;
        case 0x10:
            data_02145a74 = 0x06880000;
            data_02145a70 = 0x0;
            break;
        case 0x40:
            data_02145a74 = 0x06894000;
            data_02145a70 = 0x4000;
            break;
        case 0x20:
        case 0x60:
            data_02145a74 = 0x06890000;
            data_02145a70 = 0x0;
            break;
    }
}
