/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern volatile u8 data_021423b8[];
extern volatile s32 data_02142708[];
extern void func_020d42b0(s32);
extern void func_020d8934(s32);

s32 func_020d4f50(void) {
    s32 t;
    t = data_021423b8[0xB] & 0x20;
    if (t != 0) {
        return t;
    }
    data_021423b8[0xB] = (u8) (data_021423b8[0xB] | 0x80);
    func_020d42b0(4);
    {
        u8 x               = data_021423b8[0xB];
        data_021423b8[0xA] = 0x2A;
        data_021423b8[0xB] = (u8) (x & ~1);
    }
    if (!(data_021423b8[0xB] & 0x80)) {
        return (s32) data_021423b8;
    }
    if (data_021423b8[0xB] & 0x40) {
        t = data_02142708[3] & 0xC;
        if (t == 0) {
            func_020d8934(t);
        }
    }
    data_021423b8[0xB] = (u8) (data_021423b8[0xB] & ~0xC0);
    return (s32) data_021423b8;
}
