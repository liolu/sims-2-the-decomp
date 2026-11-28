/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov009_0214bc60[];
void func_020d50f0(s32 arg0);
void func_02018144(void *arg0);
void func_02046858(void *arg0);

u8 *func_ov009_0214a2e8(u8 *arg0) {
    *(u8 **) arg0 = data_ov009_0214bc60;
    if (*(s32 *) (arg0 + 0xAC) != -1) {
        func_020d50f0(*(s32 *) (arg0 + 0xAC));
        *(s32 *) (arg0 + 0xAC) = -1;
    }
    func_02018144(arg0);
    func_02046858(arg0);
    return arg0;
}
