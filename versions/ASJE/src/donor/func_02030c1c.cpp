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
extern void func_02018734(...);
extern void func_02018aa0(...);
extern void func_02018ad0(...);
extern s8 func_0204cb3c(...);
extern M2C_UNK data_0213120c;
void *func_02030c1c(void *arg0, void *arg1) {
    u8 *p = (u8 *) arg0;
    void *temp_r4;
    func_02018734(arg0, arg1, p + 0x18);
    temp_r4                               = p + 0x18;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0))) = &data_0213120c;
    func_02018ad0(temp_r4);
    func_02018aa0(temp_r4, 0x40);
    (*(s16 *) ((s8 *) (arg0) + (0x10))) = 0x40;
    ((VA *) arg0)->f3((*(s32 *) ((s8 *) (arg1) + (4))));
    (*(s8 *) ((s8 *) (arg0) + (0x28)))  = 0;
    (*(s8 *) ((s8 *) (arg0) + (0x29)))  = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x2C))) = 0;
    (*(s8 *) ((s8 *) (arg0) + (0x30)))  = 0;
    (*(s8 *) ((s8 *) (arg0) + (0x31)))  = func_0204cb3c(0, 4);
    (*(s32 *) ((s8 *) (arg0) + (0x34))) = 0;
    return arg0;
}
}
