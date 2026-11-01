/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual M2C_UNK f1();
};

extern "C" M2C_UNK func_0206466c(s32 *, M2C_UNK, M2C_UNK);     /* extern */
extern "C" s32 *data_0213e434;

extern "C" s32 func_0209aa8c(void *arg0) {
    void *temp_r2;
    void *temp_r2_2;

    func_0206466c(data_0213e434, 4, 1);
    *data_0213e434 |= 2;
    temp_r2                                              = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_r2, s32 *, 4)                         = (s32) (M2C_FIELD(temp_r2, s32 *, 4) & ~1);
    temp_r2_2                                            = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_r2_2, s32 *, 4)                       = (s32) (M2C_FIELD(temp_r2_2, s32 *, 4) | 0x82);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x130) = 0;
    if (arg0 != NULL) {
        ((VC0 *) (arg0))->f1();
    }
    return 0;
}
