/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f7d70 from projets/sims-2-the/src/donor/func_020f7d70.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
s32 func_020f785c(s32 *in) {
    if ((*(vu32 *) 0x04000600) & 1) {
        return -1;
    }
    *in = (*(vu32 *) 0x04000600) & 2;
    return 0;
}
