/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e080;

void func_ov000_0214e464(u8 *arg0) {
    *(u8 **) &data_0213e080 = arg0 + 8 + *(u8 *) (arg0 + 0x608) * 0x300;
}
