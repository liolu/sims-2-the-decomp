/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VB {
    virtual void f0();
    virtual void f1();
};

extern "C" M2C_UNK func_01ffac40(void *, void *);              /* extern */
extern "C" M2C_UNK func_020117d8(void *, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern "C" M2C_UNK func_02018ac4(M2C_UNK *);                   /* extern */
extern "C" M2C_UNK func_0201e754(M2C_UNK *);                   /* extern */
extern "C" M2C_UNK func_02022404(void *);                      /* extern */
extern "C" M2C_UNK func_02022884(void *);                      /* extern */
extern "C" M2C_UNK func_02022a48(void *);                      /* extern */
extern "C" M2C_UNK func_02022b24(void *);                      /* extern */
extern "C" M2C_UNK func_02022cd8(void *);                      /* extern */
extern "C" u32 func_020235e8(void *);                          /* extern */
extern "C" M2C_UNK func_02082764(s32, M2C_UNK, M2C_UNK);       /* extern */
extern s32 data_0213df5c;

extern "C" void func_02023c10(void *arg0) {
    s32 sp0[7];
    u32 temp_r0_2;
    void **temp_r0;
    void *temp_r1;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0x44);
    if (temp_r5 != NULL) {
        func_0201e754((M2C_UNK *) sp0);
        func_020117d8(temp_r5, 5, (M2C_UNK *) sp0, 0);
        func_02082764((M2C_FIELD(temp_r5, u16 *, 0xA) * 0x2C) + (data_0213df5c + 0x21E4), 3, 0);
        func_02018ac4((M2C_UNK *) sp0);
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
    temp_r0_2 = func_020235e8(arg0);
    switch (temp_r0_2) {
        default:
            break;
        case 2:
            func_02022404(arg0);
            break;
        case 1:
        case 5:
            func_02022884(arg0);
            break;
        case 3:
            func_02022a48(arg0);
            break;
        case 0:
            func_02022b24(arg0);
            break;
        case 4:
            func_02022cd8(arg0);
            break;
    }
    M2C_FIELD(arg0, s8 *, 0x40) = 1;
}
