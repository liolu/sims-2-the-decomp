/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02017f64(void *arg0);

void func_ov009_0214a268(u8 *arg0) {
    if (arg0[0xA9] != 0) {
        func_02017f64(arg0);
    }
    arg0[0xA9] = arg0[0xA9] == 0;
}
