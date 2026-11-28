/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_0213fcc4;
extern u8 data_021363fc;
extern u8 data_02134ef8;
extern u8 data_02135698;
extern u8 data_02134d30;
extern u8 data_021363e8;
extern u8 data_0213fcd4;
extern u32 data_02135670;
extern u8 data_02135758;
extern u8 data_02135760;
extern u32 data_0213fcb8;
extern void func_020c87d4(void *, void *, u32);

void func_020c78b8(u8 *arg0) {
    s32 idx;
    u32 r2v;
    enum {
        ONE = 1
    } one;
    func_020c87d4(&data_021363fc, &data_02134ef8, data_0213fcc4);
    idx = *(u16 *) (arg0 + 2);
    if (idx != 0 && data_0213fcc4 != 8) {
        if (idx >= 0 && (u32) idx < 0x17) {
            r2v = ((u32 *) &data_02135698)[idx];
        } else {
            r2v = (u32) &data_02134d30;
        }
        func_020c87d4(&data_021363e8, &data_02134ef8, r2v);
        {
            u32 w = *(u16 *) (arg0 + 2);
            if (data_0213fcc4 != 9) {
                *(u32 *) &data_0213fcd4 = w;
            }
        }
        return;
    }
    func_020c87d4(&data_02135758, (void *) ((u32 *) &data_02135670)[data_0213fcc4], data_0213fcc4);
    data_0213fcc4 = 1;
    one           = 1;
    func_020c87d4(&data_02135760, (void *) ((u32 *) &data_02135670)[one], (u32) &data_0213fcc4);
    data_0213fcb8 = 0xB;
}
