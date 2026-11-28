/* compiler: 1.2/sp2p3  */
/* func_02026b78 from sims-2-the/src/auto/func_02026b78.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(int);
};
extern "C" {
extern void func_0201872c(...);
extern void func_02018a98(...);
extern void func_02018ac8(...);
extern M2C_UNK data_02130310;
void *func_02026bc0(void *arg0, void *arg1) {
    u8 *obj;
    u8 *t4;
    obj = (u8 *) arg0;
    func_0201872c(arg0, arg1, obj + 0x18);
    t4                                    = obj + 0x18;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0))) = &data_02130310;
    func_02018ac8(t4);
    func_02018a98(t4, 0x26);
    (*(s32 *) ((s8 *) (t4) + (0x10)))   = 0;
    (*(s8 *) ((s8 *) (t4) + (0x14)))    = 0;
    (*(s32 *) ((s8 *) (t4) + (0x18)))   = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x10))) = 0x26;
    ((VA *) obj)->f3((*(s32 *) ((s8 *) (arg1) + (4))));
    return arg0;
}
}
