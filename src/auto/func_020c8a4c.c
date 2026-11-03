/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c8cec(void *a, void *b, void *c);
extern u8 data_02135244;
extern u8 data_02135308;
extern u8 data_02135bac;
extern u8 data_02135fb4;
extern u8 data_02135fc8;
extern s32 data_02140190;
extern s32 data_0214019c;
extern s32 data_021401ac;

void func_020c8a4c(void *arg0) {
    u8 *var_r2;
    s32 idx;
    s32 v;

    func_020c8cec(&data_02135fc8, &data_02135308, *(void **) &data_0214019c);
    idx = *(u16 *) ((u8 *) arg0 + 2);
    if (idx != 0) {
        if (idx >= 0 && (u32) idx < 0x17) {
            var_r2 = ((u8 **) &data_02135bac)[idx];
        } else {
            var_r2 = &data_02135244;
        }
        func_020c8cec(&data_02135fb4, &data_02135308, var_r2);
        v = *(u16 *) ((u8 *) arg0 + 2);
        if (*(s32 *) &data_0214019c != 9) {
            *(s32 *) &data_021401ac = v;
        }
        return;
    }
    data_02140190 = 0x30;
}
