/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c87d4(void *, void *, s32);            /* extern */
extern s32 data_0213fcc4;
extern s32 data_0213fcb8;
extern s32 data_0213fcd4;
extern u16 data_0213fca4;
extern u8 data_02135eb0;
extern u8 data_02135e9c;
extern u8 data_02135004;
extern u8 data_02135698;
extern u8 data_02134d30;
extern u8 data_02135670;
extern u8 data_02135758;
extern u8 data_02135760;

void func_020c7468(u8 *arg0) {
    s32 idx;
    s32 r2;
    u16 v;
    enum {
        ONE = 1
    } one;

    func_020c87d4(&data_02135eb0, &data_02135004, data_0213fcc4);
    data_0213fcb8 = 0x11;
    idx           = *(u16 *) (arg0 + 2);
    if (idx != 0) {
        if (idx >= 0 && (u32) idx < 0x17U) {
            r2 = *(s32 *) (&data_02135698 + idx * 4);
        } else {
            r2 = (s32) &data_02134d30;
        }
        func_020c87d4(&data_02135e9c, &data_02135004, r2);
        v = *(u16 *) (arg0 + 2);
        if (data_0213fcc4 != 9) {
            data_0213fcd4 = v;
        }
        return;
    }
    func_020c87d4(&data_02135758, (void *) *(s32 *) (&data_02135670 + data_0213fcc4 * 4), data_0213fcc4);
    one           = 1;
    data_0213fcc4 = one;
    func_020c87d4(&data_02135760, (void *) *(s32 *) (&data_02135670 + one * 4), (s32) &data_0213fcc4);
    data_0213fcb8 = 0x11;
    data_0213fca4 = 0;
}
