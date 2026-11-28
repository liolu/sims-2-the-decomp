/* compiler: 1.2/sp2p3 */
/* func_020730c0 from projets/madagascar/src/auto/func_020730c0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_021075f4(M2C_UNK);
extern M2C_UNK func_02111aac();
extern M2C_UNK (*data_021494c4)();
extern s32 data_021494cc;
void func_02107728(M2C_UNK arg0) {
    if (data_021494cc == 0) {
        func_02111aac();
        if (data_021494c4 != ((void *) 0)) {
            data_021494c4();
            data_021494c4 = ((void *) 0);
        }
    }
    func_021075f4(arg0);
}
