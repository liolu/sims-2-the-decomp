/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_ov016_0214ab1c;

void func_ov016_0214a630(u8 *arg0) {
    void (*fn)(u8 *) = ((void (**)(u8 *)) &data_ov016_0214ab1c)[arg0[0x25]];
    fn(arg0);
}
