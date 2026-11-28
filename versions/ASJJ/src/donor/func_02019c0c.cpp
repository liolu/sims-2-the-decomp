/* compiler: 1.2/sp2p3  */
/* func_02019c1c from sims-2-the/src/auto/func_02019c1c.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef long s32;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32);
};
extern "C" {
extern void func_0201872c(...);
extern void func_02018a98(...);
extern void func_02018ac8(...);
extern u8 data_0212fdb0;
void *func_02019c0c(u8 *arg0, u8 *arg1) {
    volatile s32 w[2];
    u8 *temp_r4;

    func_0201872c(arg0, arg1, arg0 + 0x18);
    temp_r4       = arg0 + 0x18;
    *(u8 **) arg0 = &data_0212fdb0;
    func_02018ac8(temp_r4);
    *(s32 *) (temp_r4 + 0x10) = 0;
    *(s32 *) (temp_r4 + 0x14) = 0;
    *(s32 *) (temp_r4 + 0x18) = 0;
    func_02018a98(temp_r4, 0x10);
    w[0]                      = 0x199;
    w[1]                      = 0x199;
    *(s32 *) (temp_r4 + 0x20) = 0x199;
    *(s16 *) (temp_r4 + 0x1C) = 7;
    *(s8 *) (temp_r4 + 0x24)  = 0;
    *(s32 *) (temp_r4 + 0x28) = 0;
    *(s32 *) (temp_r4 + 0x2C) = 0;
    *(s8 *) (temp_r4 + 0x25)  = 0;
    *(s16 *) (arg0 + 0x10)    = 0x10;
    *(s8 *) (arg0 + 0x48)     = 1;
    ((VA *) arg0)->f3(*(s32 *) (arg1 + 4));
    if (*(s32 *) (arg0 + 0x44) == 0) {
        *(s32 *) (arg0 + 0x44) = *(s32 *) (arg0 + 4);
    }
    return arg0;
}
}
