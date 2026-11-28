/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_ov016_0214a9dc;

void func_ov016_0214a4f0(u8 *arg0) {
    void (*fn)(u8 *) = ((void (**)(u8 *)) &data_ov016_0214a9dc)[arg0[0x25]];
    fn(arg0);
}
