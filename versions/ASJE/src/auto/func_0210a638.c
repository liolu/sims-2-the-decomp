/* func_0207623c from projets/club-house-games/src/auto/func_0207623c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
s32 func_0210a638(u8 *arg0) {
    s32 var_r2;
    u8 *var_r0;
    u8 temp_r1;

    var_r0 = arg0;
    var_r2 = -1;
    do {
        temp_r1 = *var_r0;
        var_r0 += 1;
        var_r2 += 1;
    } while (temp_r1 != 0);
    return var_r2;
}
