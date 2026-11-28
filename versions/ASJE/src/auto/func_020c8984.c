/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c8c24(void *a, void *b, void *c);
extern u8 data_02135104;
extern u8 data_021351c8;
extern u8 data_02135a6c;
extern u8 data_02135e74;
extern u8 data_02135e88;
extern s32 data_02140050;
extern s32 data_0214005c;
extern s32 data_0214006c;

void func_020c8984(void *arg0) {
    u8 *var_r2;
    s32 idx;
    s32 v;

    func_020c8c24(&data_02135e88, &data_021351c8, *(void **) &data_0214005c);
    idx = *(u16 *) ((u8 *) arg0 + 2);
    if (idx != 0) {
        if (idx >= 0 && (u32) idx < 0x17) {
            var_r2 = ((u8 **) &data_02135a6c)[idx];
        } else {
            var_r2 = &data_02135104;
        }
        func_020c8c24(&data_02135e74, &data_021351c8, var_r2);
        v = *(u16 *) ((u8 *) arg0 + 2);
        if (*(s32 *) &data_0214005c != 9) {
            *(s32 *) &data_0214006c = v;
        }
        return;
    }
    data_02140050 = 0x30;
}
