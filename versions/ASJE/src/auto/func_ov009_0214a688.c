/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov009_0214c000[];
void func_020d54c8(s32 arg0);
void func_0201814c(void *arg0);
void func_020467cc(void *arg0);

u8 *func_ov009_0214a688(u8 *arg0) {
    *(u8 **) arg0 = data_ov009_0214c000;
    if (*(s32 *) (arg0 + 0xAC) != -1) {
        func_020d54c8(*(s32 *) (arg0 + 0xAC));
        *(s32 *) (arg0 + 0xAC) = -1;
    }
    func_0201814c(arg0);
    func_020467cc(arg0);
    return arg0;
}
