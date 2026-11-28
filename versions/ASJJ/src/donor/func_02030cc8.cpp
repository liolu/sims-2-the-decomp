/* compiler: 1.2/sp2p3  */
/* func_02030c94 from sims-2-the/src/auto/func_02030c94.cpp (same code in another game of this workspace), reused by
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
    virtual void f3(s32);
};
extern "C" {
extern void func_0201872c(...);
extern void func_02018a98(...);
extern void func_02018ac8(...);
extern s8 func_0204cbc0(...);
extern M2C_UNK data_02130e4c;
void *func_02030cc8(void *arg0, void *arg1) {
    u8 *p = (u8 *) arg0;
    void *temp_r4;
    func_0201872c(arg0, arg1, p + 0x18);
    temp_r4                               = p + 0x18;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0))) = &data_02130e4c;
    func_02018ac8(temp_r4);
    func_02018a98(temp_r4, 0x40);
    (*(s16 *) ((s8 *) (arg0) + (0x10))) = 0x40;
    ((VA *) arg0)->f3((*(s32 *) ((s8 *) (arg1) + (4))));
    (*(s8 *) ((s8 *) (arg0) + (0x28)))  = 0;
    (*(s8 *) ((s8 *) (arg0) + (0x29)))  = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x2C))) = 0;
    (*(s8 *) ((s8 *) (arg0) + (0x30)))  = 0;
    (*(s8 *) ((s8 *) (arg0) + (0x31)))  = func_0204cbc0(0, 4);
    (*(s32 *) ((s8 *) (arg0) + (0x34))) = 0;
    return arg0;
}
}
