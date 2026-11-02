/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VB {
    virtual void f0();
    virtual void f1();
};

extern "C" M2C_UNK func_01ffac40(void *, void *);              /* extern */
extern "C" M2C_UNK func_020117d8(void *, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern "C" M2C_UNK func_02018acc(M2C_UNK *);                   /* extern */
extern "C" M2C_UNK func_0201e774(M2C_UNK *);                   /* extern */
extern "C" M2C_UNK func_020223bc(void *);                      /* extern */
extern "C" M2C_UNK func_0202283c(void *);                      /* extern */
extern "C" M2C_UNK func_02022a00(void *);                      /* extern */
extern "C" M2C_UNK func_02022adc(void *);                      /* extern */
extern "C" M2C_UNK func_02022c90(void *);                      /* extern */
extern "C" u32 func_020235a0(void *);                          /* extern */
extern "C" M2C_UNK func_020828ac(s32, M2C_UNK, M2C_UNK);       /* extern */
extern s32 data_0213e434;

extern "C" void func_02023bc8(void *arg0) {
    s32 sp0[7];
    u32 temp_r0_2;
    void **temp_r0;
    void *temp_r1;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x44);
    if (temp_r5 != NULL) {
        func_0201e774((M2C_UNK *) sp0);
        func_020117d8(temp_r5, 5, (M2C_UNK *) sp0, 0);
        func_020828ac((M2C_FIELD(temp_r5, u16 *, 0xA) * 0x2C) + (data_0213e434 + 0x21DC), 3, 0);
        func_02018acc((M2C_UNK *) sp0);
        M2C_FIELD(arg0, void **, 0x44) = NULL;
    }
    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x1C);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) | 0x82);
        temp_r0                      = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x1C), void ***, 0x130);
        if (temp_r0 != NULL) {
            if (temp_r0 != NULL) {
                ((VB *) temp_r0)->f1();
            }
            M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x1C), s32 *, 0x130) = 0;
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x1C) = NULL;
    }
    func_01ffac40((u8 *) M2C_FIELD(arg0, void **, 4) + 0xE0, arg0);
    temp_r0_2 = func_020235a0(arg0);
    switch (temp_r0_2) {
        default:
            break;
        case 2:
            func_020223bc(arg0);
            break;
        case 1:
        case 5:
            func_0202283c(arg0);
            break;
        case 3:
            func_02022a00(arg0);
            break;
        case 0:
            func_02022adc(arg0);
            break;
        case 4:
            func_02022c90(arg0);
            break;
    }
    M2C_FIELD(arg0, s8 *, 0x40) = 1;
}
