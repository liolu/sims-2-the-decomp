/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02017f64();
void func_02070b9c(u8 *arg0) {
    volatile s32 tmp[2];
    u8 *p;
    u8 *q;
    s32 a;
    func_02017f64();
    p                = *(u8 **) (arg0 + 0xB0);
    q                = p + 0x58;
    a                = *(s32 *) (arg0 + 0x50);
    tmp[0]           = a;
    *(s32 *) q       = a;
    a                = *(s32 *) (arg0 + 0x54);
    tmp[1]           = a;
    *(s32 *) (q + 4) = a;
}
