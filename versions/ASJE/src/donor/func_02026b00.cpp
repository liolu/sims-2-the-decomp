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
extern void func_02018734(...);
extern void func_02018aa0(...);
extern void func_02018ad0(...);
extern M2C_UNK data_021306d0;
void *func_02026b00(void *arg0, void *arg1) {
    u8 *obj;
    u8 *t4;
    obj = (u8 *) arg0;
    func_02018734(arg0, arg1, obj + 0x18);
    t4                                    = obj + 0x18;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0))) = &data_021306d0;
    func_02018ad0(t4);
    func_02018aa0(t4, 0x26);
    (*(s32 *) ((s8 *) (t4) + (0x10)))   = 0;
    (*(s8 *) ((s8 *) (t4) + (0x14)))    = 0;
    (*(s32 *) ((s8 *) (t4) + (0x18)))   = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x10))) = 0x26;
    ((VA *) obj)->f3((*(s32 *) ((s8 *) (arg1) + (4))));
    return arg0;
}
}
