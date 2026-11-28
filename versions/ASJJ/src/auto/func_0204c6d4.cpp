/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" void func_020f6338();
extern "C" void func_020f677c(s32);
extern "C" void func_020fc5bc(s32, s32, s32);

extern "C" void func_0204c6d4(void) {
    volatile s32 tmp[5];
    s32 z;
    func_020f677c(0x1FF);
    tmp[2] = 0;
    z      = tmp[2];
    func_020fc5bc(z, 0x06800000, 0xA4000);
    func_020f6338();
    tmp[0] = 0xC0;
    z      = tmp[0];
    func_020fc5bc(z, 0x07000000, 0x400);
    tmp[1] = 0xC0;
    z      = tmp[1];
    func_020fc5bc(z, 0x07000400, 0x400);
    tmp[3] = 0;
    z      = tmp[3];
    func_020fc5bc(z, 0x05000000, 0x400);
    tmp[4] = 0;
    z      = tmp[4];
    func_020fc5bc(z, 0x05000400, 0x400);
}
