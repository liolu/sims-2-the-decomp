/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c87d4(void *a, void *b, void *c);
extern u8 data_02134d30;
extern u8 data_02134df4;
extern u8 data_02135698;
extern u8 data_02135aa0;
extern u8 data_02135ab4;
extern s32 data_0213fcb8;
extern s32 data_0213fcc4;
extern s32 data_0213fcd4;

void func_020c8534(void *arg0) {
    u8 *var_r2;
    s32 idx;
    s32 v;

    func_020c87d4(&data_02135ab4, &data_02134df4, *(void **) &data_0213fcc4);
    idx = *(u16 *) ((u8 *) arg0 + 2);
    if (idx != 0) {
        if (idx >= 0 && (u32) idx < 0x17) {
            var_r2 = ((u8 **) &data_02135698)[idx];
        } else {
            var_r2 = &data_02134d30;
        }
        func_020c87d4(&data_02135aa0, &data_02134df4, var_r2);
        v = *(u16 *) ((u8 *) arg0 + 2);
        if (*(s32 *) &data_0213fcc4 != 9) {
            *(s32 *) &data_0213fcd4 = v;
        }
        return;
    }
    data_0213fcb8 = 0x30;
}
