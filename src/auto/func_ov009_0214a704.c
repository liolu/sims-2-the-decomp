/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov009_0214c140[];
void func_020d5604(s32 arg0);
void func_0201814c(void *arg0);

u8 *func_ov009_0214a704(u8 *arg0) {
    *(u8 **) arg0 = data_ov009_0214c140;
    if (*(s32 *) (arg0 + 0xAC) != -1) {
        func_020d5604(*(s32 *) (arg0 + 0xAC));
        *(s32 *) (arg0 + 0xAC) = -1;
    }
    func_0201814c(arg0);
    return arg0;
}
