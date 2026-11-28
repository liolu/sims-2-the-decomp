/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern volatile u8 data_02142018[];
extern volatile s32 data_02142368[];
extern void func_020d3ed8(s32);
extern void func_020d855c(s32);

s32 func_020d4b78(void) {
    s32 t;
    t = data_02142018[0xB] & 0x20;
    if (t != 0) {
        return t;
    }
    data_02142018[0xB] = (u8) (data_02142018[0xB] | 0x80);
    func_020d3ed8(4);
    {
        u8 x               = data_02142018[0xB];
        data_02142018[0xA] = 0x2A;
        data_02142018[0xB] = (u8) (x & ~1);
    }
    if (!(data_02142018[0xB] & 0x80)) {
        return (s32) data_02142018;
    }
    if (data_02142018[0xB] & 0x40) {
        t = data_02142368[3] & 0xC;
        if (t == 0) {
            func_020d855c(t);
        }
    }
    data_02142018[0xB] = (u8) (data_02142018[0xB] & ~0xC0);
    return (s32) data_02142018;
}
