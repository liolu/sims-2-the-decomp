/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_02052258(s32);
M2C_UNK func_02082a3c(s32, s32, void *, s32);
M2C_UNK func_020509d4(s32);
extern s32 data_0213e434;
void func_02096094(u8 *arg0, s32 arg1) {
    u8 *p;
    u8 t;
    s32 tmp;
    s32 base;
    u16 idx;
    p = arg0 + 0x10 + arg1;
    t = *p;
    if (t == 3) {
        idx  = *(u16 *) (*(u8 **) (arg0 + 4) + 0xA);
        base = *(s32 *) &data_0213e434;
        func_02052258(*(u8 *) (base + idx * 0x2C + 0x2000 + 0x1F6) + 0x79B);
        return;
    }
    if (t == 7) {
        idx  = *(u16 *) (*(u8 **) (arg0 + 4) + 0xA);
        base = *(s32 *) &data_0213e434;
        func_02082a3c(base + 0x2FA4, idx, &tmp, 0);
        func_020509d4(tmp);
    }
    func_02052258(*p + 0x735);
}
