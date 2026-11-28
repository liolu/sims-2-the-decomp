/* compiler: 1.2/sp2p3  */
/* func_0206be9c from sims-2-the/src/auto/func_0206be9c.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef struct {
    s32 v;
} W;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(void *a, W b, W c);
};
extern "C" {
extern void func_02016708(void *, void *);
extern void func_020d5880(s32);
extern u8 data_0211f7a4[];
extern u8 data_0211f7ac[];
void func_0206be24(u8 *arg0) {
    if (arg0[0x94] != 0) {
        return;
    }
    if (*(s32 *) (*(u8 **) (*(u8 **) (arg0 + 0x90) + 0xC) + 0x6C) == 2) {
        return;
    }
    if (((VA *) *(void **) (arg0 + 0x74))->f2(arg0, *(W *) (arg0 + 0x80), *(W *) (arg0 + 0x84)) != 0) {
        if (arg0[0x95] != 0) {
            return;
        }
        arg0[0x95]             = 1;
        *(s32 *) (arg0 + 0x14) = (*(s32 *) (arg0 + 0x14) & ~0xF000) | 0x2000;
        func_02016708(arg0, data_0211f7ac);
        if ((*(s32 *) (arg0 + 4) & 1) != 1) {
            return;
        }
        func_020d5880(0x161);
        return;
    }
    if (arg0[0x95] == 0) {
        return;
    }
    arg0[0x95]             = 0;
    *(s32 *) (arg0 + 0x14) = (*(s32 *) (arg0 + 0x14) & ~0xF000) | 0x1000;
    func_02016708(arg0, data_0211f7a4);
}
}
