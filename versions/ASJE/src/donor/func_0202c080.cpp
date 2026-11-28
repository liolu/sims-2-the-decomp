/* compiler: 1.2/sp2p3  */
/* func_0202c0f8 from sims-2-the/src/auto/func_0202c0f8.cpp (same code in another game of this workspace), reused by
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
extern void func_02018734(...);
extern void func_02018aa0(...);
extern void func_02018ad0(...);
extern u8 data_02130d3c;
void *func_0202c080(void *arg0, void *arg1) {
    u8 *self = (u8 *) arg0;
    u8 *t;
    func_02018734(self, arg1, self + 0x18);
    t             = self + 0x18;
    *(u8 **) self = &data_02130d3c;
    func_02018ad0(t);
    func_02018aa0(t, 0x1F);
    *(s16 *) (self + 0x10) = 0x1F;
    ((VA *) self)->f3(*(s32 *) ((u8 *) arg1 + 4));
    *(s32 *) (self + 0x28) = -1;
    return self;
}
}
