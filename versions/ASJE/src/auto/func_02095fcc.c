/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020521e0(s32);
M2C_UNK func_020829c4(s32, s32, void *, s32);
M2C_UNK func_0205095c(s32);
extern s32 data_0213e2f4;
void func_02095fcc(u8 *arg0, s32 arg1) {
    u8 *p;
    u8 t;
    s32 tmp;
    s32 base;
    u16 idx;
    p = arg0 + 0x10 + arg1;
    t = *p;
    if (t == 3) {
        idx  = *(u16 *) (*(u8 **) (arg0 + 4) + 0xA);
        base = *(s32 *) &data_0213e2f4;
        func_020521e0(*(u8 *) (base + idx * 0x2C + 0x2000 + 0x1F6) + 0x79B);
        return;
    }
    if (t == 7) {
        idx  = *(u16 *) (*(u8 **) (arg0 + 4) + 0xA);
        base = *(s32 *) &data_0213e2f4;
        func_020829c4(base + 0x2FA4, idx, &tmp, 0);
        func_0205095c(tmp);
    }
    func_020521e0(*p + 0x735);
}
