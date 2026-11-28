/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020d3a34(s32 a, u32 b, void **c, u8 *d);
extern void *data_02142000[];
extern void *data_02141ff4;
void func_020d3cd0(s32 arg0, u32 arg1) {
    u8 *r3;
    void **cur;
    r3 = data_02142000[arg0];
    if (r3 == NULL) {
        return;
    }
    cur  = &data_02141ff4;
    *cur = r3;
    if (arg1 < 0x20) {
        arg1 = 0x20;
    } else if (arg1 > 0xFF) {
        arg1 = 0xFF;
    }
    r3[0x2D] = (u8) arg1;
    func_020d3a34(arg0, arg1, cur, r3);
}
