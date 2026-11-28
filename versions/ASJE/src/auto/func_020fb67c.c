/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_InitException from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/os/os_init_exception.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern u32 data_02146124;
extern u32 data_0214612c;
extern void func_020fb4f8(void);
extern u32 func_020fa800(void);
void func_020fb67c(void) {
    u32 userHandler = (*(vu32 *) 0x027ffd9c);
    vu32 *dtcm      = (vu32 *) 0x27e3000;

    if (userHandler >= 0x02600000 && userHandler < 0x02800000) {
        data_0214612c = userHandler;
    } else {
        data_0214612c = 0;
    }
    if (data_0214612c == 0 || (func_020fa800() & 0x40000000) == 0) {
        (*(vu32 *) 0x027ffd9c) = (u32) func_020fb4f8;
        dtcm[0xfdc / 4]        = (u32) func_020fb4f8;
    }
    data_02146124 = 0;
}
