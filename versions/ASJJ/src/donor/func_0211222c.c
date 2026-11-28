/* compiler: 1.2/sp2p3  */
/* func_020b5660 from pokemon-dash/src/auto/func_020b5660.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern s32 func_02109fe8(s32, s32);
s32 func_0211222c(void *arg0, void *arg1) {
    if ((arg0 == arg1) || (func_02109fe8((*(s32 *) ((s8 *) (arg0) + (4))), (*(s32 *) ((s8 *) (arg1) + (4)))) == 0)) {
        return 1;
    }
    return 0;
}
