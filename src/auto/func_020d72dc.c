/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_020d64d0(u32 h);
typedef struct {
    s32 p;
    u8 pad4[2];
    s8 vol;
    u8 pad7;
    u16 id;
    u8 padA;
    u8 b0 : 1;
    u8 state : 6;
    u8 b7 : 1;
    u8 rest[0x38];
} Ent;
extern Ent data_021428f4[];
static inline s32 valid(u32 h) {
    Ent *e;
    if (h != 0xFFFFFFFF) {
        e = &data_021428f4[h & 0xFF];
        if ((h & 0xFF) < 0x10 && e->p != 0 && e->id == (h >> 8) && e->state <= 1) {
            return 1;
        }
    }
    return 0;
}
void func_020d72dc(u32 arg0, s32 arg1) {
    if (arg1 > 0x40) {
        arg1 = 0x40;
    }
    if (arg1 < 0) {
        arg1 = 0;
    }
    if (!valid(arg0)) {
        return;
    }
    data_021428f4[arg0 & 0xFF].vol = arg1;
    func_020d64d0(arg0);
}
