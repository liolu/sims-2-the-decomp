/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c87d4(void *, void *, void *);

extern u8 data_02134d30;
extern u8 data_02134d5c;
extern u8 data_02135698;
extern u8 data_02136410;
extern u8 data_02136424;
extern u8 *data_0213fcc4;
extern u8 data_0213fcd4;
extern u8 data_0213fcb8;

void func_020c41e4(u8 *arg0) {
    u8 *var_r2;
    u16 temp_r1;

    func_020c87d4(&data_02136424, &data_02134d5c, data_0213fcc4);
    temp_r1 = *(u16 *) (arg0 + 2);
    if (temp_r1 != 0) {
        if (((s32) temp_r1 >= 0) && ((u32) temp_r1 < 0x17U)) {
            var_r2 = ((u8 **) &data_02135698)[temp_r1];
        } else {
            var_r2 = &data_02134d30;
        }
        func_020c87d4(&data_02136410, &data_02134d5c, var_r2);
        temp_r1 = *(u16 *) (arg0 + 2);
        if (data_0213fcc4 != (u8 *) 9) {
            *(s32 *) &data_0213fcd4 = temp_r1;
        }
    }
    *(s32 *) &data_0213fcb8 = 0x9;
}
