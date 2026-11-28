/* compiler: 1.2/sp2p3  */
/* func_02027278 from sims-2-the/src/auto/func_02027278.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef short s16;
typedef long s32;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" {
extern void func_02018734(void *a, void *b, void *c);
extern void func_02018aa0(void *a, s32 b);
extern void func_02018ad0(void *a);
extern u8 data_021307ac;
void *func_02027200(u8 *arg0, u8 *arg1) {
    u8 *t;
    func_02018734(arg0, arg1, arg0 + 0x18);
    t             = arg0 + 0x18;
    *(u8 **) arg0 = &data_021307ac;
    func_02018ad0(t);
    func_02018aa0(t, 0xD);
    *(s32 *) (t + 0x10)    = 0;
    *(s32 *) (t + 0x14)    = 0;
    *(s16 *) (arg0 + 0x10) = 0xD;
    ((VA *) arg0)->f3(*(s32 *) (arg1 + 4));
    return arg0;
}
}
