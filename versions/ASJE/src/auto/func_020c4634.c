/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c8c24(void *, void *, void *);

extern u8 data_02135104;
extern u8 data_02135130;
extern u8 data_02135a6c;
extern u8 data_021367e4;
extern u8 data_021367f8;
extern u8 *data_0214005c;
extern u8 data_0214006c;
extern u8 data_02140050;

void func_020c4634(u8 *arg0) {
    u8 *var_r2;
    u16 temp_r1;

    func_020c8c24(&data_021367f8, &data_02135130, data_0214005c);
    temp_r1 = *(u16 *) (arg0 + 2);
    if (temp_r1 != 0) {
        if (((s32) temp_r1 >= 0) && ((u32) temp_r1 < 0x17U)) {
            var_r2 = ((u8 **) &data_02135a6c)[temp_r1];
        } else {
            var_r2 = &data_02135104;
        }
        func_020c8c24(&data_021367e4, &data_02135130, var_r2);
        temp_r1 = *(u16 *) (arg0 + 2);
        if (data_0214005c != (u8 *) 9) {
            *(s32 *) &data_0214006c = temp_r1;
        }
    }
    *(s32 *) &data_02140050 = 0x9;
}
