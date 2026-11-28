/* compiler: 1.2/sp2p3  */
/* func_020c0e74 from sims-2-the/src/auto/func_020c0e74.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef struct {
    s32 v;
} W;
struct VB {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(void *a, W b, W c);
};
extern "C" {
extern u8 data_021273a8[];
extern s32 func_02016700(void *, void *);
void func_020c0980(u8 *arg0) {
    s32 t;
    if (arg0[0x94] == 0) {
        return;
    }
    t                      = ((VB *) *(void **) (arg0 + 0x74))->f2(arg0, *(W *) (arg0 + 0x80), *(W *) (arg0 + 0x84));
    *(s32 *) (arg0 + 0x14) = (*(s32 *) (arg0 + 0x14) & ~0xF000) | (((t + 0xD) & 0xF) << 0xC);
    func_02016700(arg0, data_021273a8 + ((t + 3) * 8));
}
}
