/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c8c24(void *, void *, s32);            /* extern */
extern s32 data_0214005c;
extern s32 data_02140050;
extern s32 data_0214006c;
extern u8 data_021363c0;
extern u8 data_0213527c;
extern u8 data_021363ac;
extern u8 data_02135a6c;
extern u8 data_02135104;
extern u8 data_02135a44;
extern u8 data_02135b2c;
extern u8 data_02135b34;

void func_020c5a98(u8 *arg0) {
    s32 idx;
    s32 r2;
    u16 v;
    enum {
        ONE = 1
    } one;

    func_020c8c24(&data_021363c0, &data_0213527c, data_0214005c);
    data_02140050 = 0x17;
    idx           = *(u16 *) (arg0 + 2);
    if (idx != 0) {
        if (idx >= 0 && (u32) idx < 0x17U) {
            r2 = *(s32 *) (&data_02135a6c + idx * 4);
        } else {
            r2 = (s32) &data_02135104;
        }
        func_020c8c24(&data_021363ac, &data_0213527c, r2);
        v = *(u16 *) (arg0 + 2);
        if (data_0214005c != 9) {
            data_0214006c = v;
        }
        return;
    }
    func_020c8c24(&data_02135b2c, (void *) *(s32 *) (&data_02135a44 + data_0214005c * 4), data_0214005c);
    one           = 1;
    data_0214005c = one;
    func_020c8c24(&data_02135b34, (void *) *(s32 *) (&data_02135a44 + one * 4), (s32) &data_0214005c);
    data_02140050 = 0x17;
}
