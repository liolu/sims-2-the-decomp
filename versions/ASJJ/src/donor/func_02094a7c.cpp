/* compiler: 1.2/sp2p3  */
/* func_02094c88 from sims-2-the/src/auto/func_02094c88.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern "C" {
extern M2C_UNK func_02011080(void *, void *, s32);
extern M2C_UNK func_0204811c(void *, s32, s32, s32, s32, s32);
extern void *data_0213e0a8;
extern void *data_02139a84;
s32 func_02094a7c(void *arg0) {
    func_02011080(*(void **) ((u8 *) data_0213e0a8 + 0xf8), *(void **) ((u8 *) arg0 + 4), 0);
    func_0204811c(data_02139a84, 0x17, 1, 0, 0, 0);
    return 6;
}
}
