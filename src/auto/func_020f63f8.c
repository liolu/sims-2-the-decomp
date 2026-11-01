/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02063920 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern u32 data_02138d28;
extern void func_020fc304(u32 dmaNo);
extern u32 data_02138d28;
u32 func_020f63f8(u32 dmaNo) {
    u32 prev = data_02138d28;
    u32 e;
    if (prev != -1) {
        func_020fc304(prev);
    }
    e             = func_020fbea0();
    data_02138d28 = dmaNo;
    func_020fbeb4(e);
    return prev;
}
