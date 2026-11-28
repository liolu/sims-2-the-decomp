/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov003_021508ec[];
extern u8 data_ov003_0215088c[];
void func_020469e0(void *arg0);
void func_020467cc(void *arg0);

u8 *func_ov003_0214bcdc(u8 *arg0) {
    *(u8 **) arg0 = data_ov003_021508ec;
    *(u8 **) arg0 = data_ov003_0215088c;
    func_020469e0(arg0 + 8);
    func_020467cc(arg0);
    return arg0;
}
