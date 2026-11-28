/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Sounds02010a80 {
    s32 ids[2];
} Sounds02010a80;

extern Sounds02010a80 data_0212fb08;
s32 func_0204cb3c(s32, s32);
void func_020d5544(s32, void *);

void func_02010a80(u8 *obj) {
    s32 sound;
    u16 id = *(u16 *) (obj + 0xA);
    if (id == 5) {
        sound = 0xD2;
    } else if (id == 6) {
        sound = 0xD3;
    } else if (id == 0x17) {
        sound = 0x268;
    } else if (id == 0x1D) {
        sound = 0xCB;
    } else if (id == 0x16) {
        sound = 0x4D;
    } else {
        Sounds02010a80 choices = data_0212fb08;
        sound                  = choices.ids[func_0204cb3c(0, 1000) % 2];
    }
    func_020d5544(sound, obj + 0x78);
}
