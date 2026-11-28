/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02135104;
extern u8 data_021359e4;
extern u8 data_02135a6c;
extern u8 data_02136670;
extern u8 data_02136684;
extern void *data_0214005c;
extern s32 data_0214006c;
extern s32 data_02140050;

M2C_UNK func_020c8c24(void *, void *, void *);

void func_020c5270(void *arg0) {
    void *var_r2;
    u16 temp_r1;
    u16 t2;

    func_020c8c24(&data_02136684, &data_021359e4, data_0214005c);
    temp_r1 = *(u16 *) ((u8 *) arg0 + 2);
    if (temp_r1 != 0) {
        if (((s32) temp_r1 >= 0) && ((u32) temp_r1 < 0x17U)) {
            var_r2 = *(void **) ((u8 *) &data_02135a6c + temp_r1 * 4);
        } else {
            var_r2 = &data_02135104;
        }
        func_020c8c24(&data_02136670, &data_021359e4, var_r2);
        t2 = *(u16 *) ((u8 *) arg0 + 2);
        if (data_0214005c != (void *) 9) {
            data_0214006c = (s32) t2;
        }
        return;
    }
    data_02140050 = 0x27;
}
