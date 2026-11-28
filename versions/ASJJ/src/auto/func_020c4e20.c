/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02134d30;
extern u8 data_02135610;
extern u8 data_02135698;
extern u8 data_0213629c;
extern u8 data_021362b0;
extern void *data_0213fcc4;
extern s32 data_0213fcd4;
extern s32 data_0213fcb8;

M2C_UNK func_020c87d4(void *, void *, void *);

void func_020c4e20(void *arg0) {
    void *var_r2;
    u16 temp_r1;
    u16 t2;

    func_020c87d4(&data_021362b0, &data_02135610, data_0213fcc4);
    temp_r1 = *(u16 *) ((u8 *) arg0 + 2);
    if (temp_r1 != 0) {
        if (((s32) temp_r1 >= 0) && ((u32) temp_r1 < 0x17U)) {
            var_r2 = *(void **) ((u8 *) &data_02135698 + temp_r1 * 4);
        } else {
            var_r2 = &data_02134d30;
        }
        func_020c87d4(&data_0213629c, &data_02135610, var_r2);
        t2 = *(u16 *) ((u8 *) arg0 + 2);
        if (data_0213fcc4 != (void *) 9) {
            data_0213fcd4 = (s32) t2;
        }
        return;
    }
    data_0213fcb8 = 0x27;
}
