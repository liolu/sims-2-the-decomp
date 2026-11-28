/* compiler: 1.2/sp2p3  */
/* func_0206fb08 from sims-2-the/src/auto/func_0206fb08.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
typedef struct {
    s32 v;
} W;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(void *a, W b, W c);
};
extern "C" {
extern M2C_UNK func_0206f1f0(s32, s32);
void func_0206faf8(void *arg0) {
    u8 *p = (u8 *) arg0;
    if (((VA *) *(void **) (p + 0x74))->f2(arg0, *(W *) (p + 0x80), *(W *) (p + 0x84)) == 0) {
        return;
    }
    func_0206f1f0(*(s32 *) (p + 0x90), (*(s32 *) (p + 0x84) >> 12) - 0x35);
}
}
