/* func_020726c0 from projets/club-house-games/src/auto/func_020726c0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef short s16;
typedef long s32;
s32 func_02107b24(s16 *arg0, u8 *arg1, s32 arg2) {
    if (arg1 == ((void *) 0)) {
        return 0;
    }
    if (arg2 == 0) {
        return -1;
    }
    if (arg0 != ((void *) 0)) {
        *arg0 = (s16) *arg1;
    }
    if (*arg1 == 0) {
        return 0;
    }
    return 1;
}
