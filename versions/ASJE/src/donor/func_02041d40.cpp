/* compiler: 1.2/sp2p3  */
/* func_02041db8 from sims-2-the/src/auto/func_02041db8.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef struct {
    s32 v;
} W;
extern "C" {
extern s32 func_02052364(s32, u8);
extern s32 func_020ba038(void *, s32, W, u8);
extern u8 data_02139e74;
extern u8 data_0213e440;
void func_02041d40(u8 *arg0, u8 *arg1) {
    s32 var_r1;
    u8 temp_r2;
    u8 b5;
    W w;

    temp_r2 = arg1[4];
    b5      = arg1[5];
    if (temp_r2 == 0xFF) {
        var_r1 = *(s32 *) (*(u8 **) &data_0213e440 + 0xF8);
    } else {
        var_r1 = func_02052364(*(s32 *) (*(u8 **) (arg0 + 4) + 0x28) + (temp_r2 * 8), b5);
    }
    if (var_r1 == 0) {
        return;
    }
    w.v = 0x1E000;
    func_020ba038(&data_02139e74, var_r1 + 0x78, w, arg1[6]);
}
}
