/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_Terminate from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_terminate.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern u32 func_020fbd64(void);
extern void func_020fbde0(void);
extern void func_020fbdc8(void);
void func_020fbde0(void) {
    while (1) {
        func_020fbd64();
        func_020fbdc8();
    }
}
void func_020fbdc8(void);
