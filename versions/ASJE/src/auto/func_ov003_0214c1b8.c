/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov003_02150968[];
extern u8 data_ov003_0215088c[];
void func_020469e0(void *arg0);

u8 *func_ov003_0214c1b8(u8 *arg0) {
    *(u8 **) arg0 = data_ov003_02150968;
    *(u8 **) arg0 = data_ov003_0215088c;
    func_020469e0(arg0 + 8);
    return arg0;
}
