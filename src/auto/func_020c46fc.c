/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c8cec(void *, void *, void *);

extern u8 data_02135244;
extern u8 data_02135270;
extern u8 data_02135bac;
extern u8 data_02136924;
extern u8 data_02136938;
extern u8 *data_0214019c;
extern u8 data_021401ac;
extern u8 data_02140190;

void func_020c46fc(u8 *arg0) {
    u8 *var_r2;
    u16 temp_r1;

    func_020c8cec(&data_02136938, &data_02135270, data_0214019c);
    temp_r1 = *(u16 *) (arg0 + 2);
    if (temp_r1 != 0) {
        if (((s32) temp_r1 >= 0) && ((u32) temp_r1 < 0x17U)) {
            var_r2 = ((u8 **) &data_02135bac)[temp_r1];
        } else {
            var_r2 = &data_02135244;
        }
        func_020c8cec(&data_02136924, &data_02135270, var_r2);
        temp_r1 = *(u16 *) (arg0 + 2);
        if (data_0214019c != (u8 *) 9) {
            *(s32 *) &data_021401ac = temp_r1;
        }
    }
    *(s32 *) &data_02140190 = 0x9;
}
