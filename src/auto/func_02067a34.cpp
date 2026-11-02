/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
};
extern "C" M2C_UNK func_020165bc(void *, u8);
extern "C" M2C_UNK func_02016708(void *, M2C_UNK *);
extern "C" M2C_UNK func_0203c3a4(M2C_UNK, M2C_UNK, M2C_UNK);
extern "C" M2C_UNK func_0203cc08(M2C_UNK, M2C_UNK);
extern "C" M2C_UNK func_0203cee8(M2C_UNK);
extern "C" M2C_UNK func_0203d078(M2C_UNK);
extern "C" M2C_UNK data_0211f844;
extern "C" M2C_UNK data_0211f858;
extern "C" M2C_UNK data_0211f860;
extern "C" void func_02067a34(void *arg0, s32 arg1) {
    s32 temp_r0;
    void *temp_r1;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r6;
    void *temp_r6_2;
    if (arg1 == M2C_FIELD(arg0, s32 *, 0x64)) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x68) != 0) {
        return;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x6C) != 0) &&
        (M2C_FIELD(M2C_FIELD(((u8 *) arg0 + (arg1 * 4)), void **, 0x34), u8 *, 8) != 0)) {
        return;
    }
    func_0203cc08(1, 0);
    func_0203d078(3);
    func_0203d078(0);
    func_0203c3a4(3, 0, 0);
    func_0203c3a4(0, 0, 0);
    func_0203cee8(0xE000);
    M2C_FIELD(arg0, s32 *, 0xC4) = 0;
    M2C_FIELD(arg0, s8 *, 0x108) = 0;
    M2C_FIELD(arg0, s8 *, 0x109) = 0;
    ((VA *) (*(void **) ((u8 *) arg0 + M2C_FIELD(arg0, s32 *, 0x64) * 4 + 0x34)))->f6();
    temp_r6                         = M2C_FIELD(((u8 *) arg0 + (M2C_FIELD(arg0, s32 *, 0x64) * 4)), void **, 0x48);
    M2C_FIELD(temp_r6, s32 *, 0x14) = (s32) ((M2C_FIELD(temp_r6, s32 *, 0x14) & ~0xF000) | 0x1000);
    func_02016708(temp_r6, &data_0211f858);
    func_020165bc(temp_r6, (u8) M2C_FIELD(temp_r6, u16 *, 0xA));
    temp_r6_2                         = M2C_FIELD(((u8 *) arg0 + (arg1 * 4)), void **, 0x48);
    M2C_FIELD(temp_r6_2, s32 *, 0x14) = (s32) ((M2C_FIELD(temp_r6_2, s32 *, 0x14) & ~0xF000) | 0x2000);
    func_02016708(temp_r6_2, &data_0211f860);
    func_020165bc(temp_r6_2, (u8) M2C_FIELD(temp_r6_2, u16 *, 0xA));
    M2C_FIELD(arg0, s32 *, 0x64)   = arg1;
    M2C_FIELD(arg0, s32 *, 0x68)   = 2;
    temp_r2                        = M2C_FIELD(arg0, void **, 0x10C);
    M2C_FIELD(temp_r2, s32 *, 4)   = (s32) (M2C_FIELD(temp_r2, s32 *, 4) & ~1);
    temp_r2_2                      = M2C_FIELD(arg0, void **, 0x110);
    M2C_FIELD(temp_r2_2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_2, s32 *, 4) & ~1);
    temp_r0                        = *((M2C_UNK *) ((s8 *) &data_0211f844 + (arg1 * 4)));
    if (temp_r0 >= 0) {
        temp_r1                      = M2C_FIELD(((u8 *) arg0 + (temp_r0 * 4)), void **, 0x5C);
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) & ~1);
    }
}
