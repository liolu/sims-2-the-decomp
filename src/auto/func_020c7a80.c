/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02135244;
extern u8 data_02135728;
extern u8 data_02135bac;
extern u8 data_02136360;
extern u8 data_02136374;
extern void *data_0214019c;
extern s32 data_021401ac;
extern s32 data_02140190;

M2C_UNK func_020c8cec(void *, void *, void *);

void func_020c7a80(void *arg0) {
    void *var_r2;
    u16 temp_r1;
    u16 t2;

    func_020c8cec(&data_02136374, &data_02135728, data_0214019c);
    temp_r1 = *(u16 *) ((u8 *) arg0 + 2);
    if (temp_r1 != 0) {
        if (((s32) temp_r1 >= 0) && ((u32) temp_r1 < 0x17U)) {
            var_r2 = *(void **) ((u8 *) &data_02135bac + temp_r1 * 4);
        } else {
            var_r2 = &data_02135244;
        }
        func_020c8cec(&data_02136360, &data_02135728, var_r2);
        t2 = *(u16 *) ((u8 *) arg0 + 2);
        if (data_0214019c != (void *) 9) {
            data_021401ac = (s32) t2;
        }
        return;
    }
    data_02140190 = 0x15;
}
