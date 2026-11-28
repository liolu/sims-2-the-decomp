/* compiler: 1.2/sp2p3  */
/* func_0201d004 from sims-2-the/src/auto/func_0201d004.cpp (same code in another game of this workspace), reused by
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
extern void func_0201d0ac(...);
extern u8 data_021302e8;
void *func_0201cf8c(void *arg0, void *arg1) {
    u8 *self = (u8 *) arg0;
    func_02018734(self, arg1, self + 0x18);
    *(u8 **) self = &data_021302e8;
    func_0201d0ac(self + 0x18);
    *(s16 *) (self + 0x10) = 3;
    ((VA *) self)->f3(*(s32 *) ((u8 *) arg1 + 4));
    if (*(s32 *) (self + 0x38) == 0) {
        *(s32 *) (self + 0x38) = *(s32 *) (self + 4);
    }
    return self;
}
}
