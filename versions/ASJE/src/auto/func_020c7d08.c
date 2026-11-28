/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_0214005c;
extern u8 data_021367d0;
extern u8 data_021352cc;
extern u8 data_02135a6c;
extern u8 data_02135104;
extern u8 data_021367bc;
extern u8 data_0214006c;
extern u32 data_02135a44;
extern u8 data_02135b2c;
extern u8 data_02135b34;
extern u32 data_02140050;
extern void func_020c8c24(void *, void *, u32);

void func_020c7d08(u8 *arg0) {
    s32 idx;
    u32 r2v;
    enum {
        ONE = 1
    } one;
    func_020c8c24(&data_021367d0, &data_021352cc, data_0214005c);
    idx = *(u16 *) (arg0 + 2);
    if (idx != 0 && data_0214005c != 8) {
        if (idx >= 0 && (u32) idx < 0x17) {
            r2v = ((u32 *) &data_02135a6c)[idx];
        } else {
            r2v = (u32) &data_02135104;
        }
        func_020c8c24(&data_021367bc, &data_021352cc, r2v);
        {
            u32 w = *(u16 *) (arg0 + 2);
            if (data_0214005c != 9) {
                *(u32 *) &data_0214006c = w;
            }
        }
        return;
    }
    func_020c8c24(&data_02135b2c, (void *) ((u32 *) &data_02135a44)[data_0214005c], data_0214005c);
    data_0214005c = 1;
    one           = 1;
    func_020c8c24(&data_02135b34, (void *) ((u32 *) &data_02135a44)[one], (u32) &data_0214005c);
    data_02140050 = 0xB;
}
