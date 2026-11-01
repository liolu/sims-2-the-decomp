/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214c2f8 from https://github.com/RonyxDumb/mkds src/arm9/0214c2f8_func_0214c2f8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_020f6994();
extern void func_020f9394();
extern s32 data_02145f60;
extern u32 data_02145f70;
#pragma thumb off
void func_020f9394() {
    u32 temp      = func_020f6994();
    data_02145f60 = (s32) temp;
    switch (temp) {
        case 2:
        case 3:
            data_02145f70 = 0x6800000;
            return;
        case 8:
        case 12:
            data_02145f70 = 0x6840000;
            return;
        case 1:
            data_02145f70 = 0x67E0000;
            return;
        case 4:
            data_02145f70 = 0x6820000;
    }
}
