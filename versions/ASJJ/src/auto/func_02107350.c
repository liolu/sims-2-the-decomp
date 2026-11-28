/* compiler: 1.2/sp2p3 */
/* func_020730c0 from projets/madagascar/src/auto/func_020730c0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0210721c(M2C_UNK);
extern M2C_UNK func_021116d4();
extern M2C_UNK (*data_02149124)();
extern s32 data_0214912c;
void func_02107350(M2C_UNK arg0) {
    if (data_0214912c == 0) {
        func_021116d4();
        if (data_02149124 != ((void *) 0)) {
            data_02149124();
            data_02149124 = ((void *) 0);
        }
    }
    func_0210721c(arg0);
}
