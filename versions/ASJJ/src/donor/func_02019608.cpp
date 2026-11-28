/* compiler: 1.2/sp2p3  */
/* func_02019618 from sims-2-the/src/auto/func_02019618.cpp (same code in another game of this workspace), reused by
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
extern u8 data_0212fd18;
extern void func_0201872c(...);
extern void func_02018a98(...);
extern void func_02018ac8(...);
void *func_02019608(void *arg0, void *arg1) {
    u8 *obj;
    u8 *t4;
    obj = (u8 *) arg0;
    func_0201872c(arg0, arg1, obj + 0x18);
    t4           = obj + 0x18;
    *(u8 **) obj = &data_0212fd18;
    func_02018ac8(t4);
    func_02018a98(t4, 0x1E);
    *(s32 *) (t4 + 0x10)  = 0;
    *(u8 *) (t4 + 0x14)   = 0;
    *(s16 *) (obj + 0x10) = 0x1E;
    ((VA *) obj)->f3(*(s32 *) ((u8 *) arg1 + 4));
    return arg0;
}
}
