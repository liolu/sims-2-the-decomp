/* compiler: 1.2/sp2p3  */
/* func_02066c30 from sims-2-the/src/auto/func_02066c30.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef struct {
    u16 v;
} S16;
extern "C" {
extern void func_0203d23c(s32, S16);
void func_02066c44(u8 *arg0) {
    s32 idx;

    if (arg0[0x108] == 0) {
        return;
    }
    if (arg0[0x109] == 0) {
        return;
    }
    arg0[0xE4] = (arg0[0xE4] == 0);
    idx        = arg0[0xE4];
    func_0203d23c(3, *(S16 *) (arg0 + idx * 2 + 0xC0));
}
}
