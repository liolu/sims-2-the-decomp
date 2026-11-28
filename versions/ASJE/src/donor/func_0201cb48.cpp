/* compiler: 1.2/sp2p3  */
/* func_0201cbc0 from sims-2-the/src/auto/func_0201cbc0.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
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
extern u8 data_0213029c;
void *func_0201cb48(void *arg0, void *arg1) {
    u8 *self = (u8 *) arg0;
    u8 *t;
    func_02018734(self, arg1, self + 0x18);
    t             = self + 0x18;
    *(u8 **) self = &data_0213029c;
    func_02018ad0(t);
    func_02018aa0(t, 0x36);
    *(s32 *) (t + 0x10)    = 0;
    *(s32 *) (t + 0x14)    = 0;
    *(s8 *) (t + 0x18)     = 1;
    *(s16 *) (self + 0x10) = 0x36;
    ((VA *) self)->f3(*(s32 *) ((u8 *) arg1 + 4));
    return self;
}
}
