/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020b8a8c(void *);
M2C_UNK func_020bd2ac();
M2C_UNK func_02111b30(void *, M2C_UNK, M2C_UNK, M2C_UNK (*)(void *), M2C_UNK *);
extern M2C_UNK func_020b8a50;

void *func_020b96b8(void *arg0) {
    u8 *p = (u8 *) arg0;
    func_020bd2ac();
    *(s32 *) (p + 0x68) = 0;
    func_020b8a8c(p + 0x6C);
    func_020b8a8c(p + 0x74);
    func_020b8a8c(p + 0x7C);
    func_02111b30(p + 0x84, 4, 8, func_020b8a8c, &func_020b8a50);
    *(s32 *) (p + 0xA4) = 0;
    *(s32 *) (p + 0xA8) = 0x1000;
    *(u16 *) (p + 0xAE) = 0;
    *(u16 *) (p + 0xB0) = 0;
    *(u16 *) (p + 0xB2) = 0xFFFF;
    *(u8 *) (p + 0xBE)  = 0;
    *(u8 *) (p + 0xBF)  = 0;
    *(u16 *) (p + 0xAC) = 0;
    *(u16 *) (p + 0xAC) = *(u16 *) (p + 0xAC) | 0x40;
    return arg0;
}
