/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad[0x1F8];
    u16 f0 : 1;
} Obj;
typedef struct {
    u8 pad[4];
    Obj *obj;
    u8 pad2[0x32];
    u8 state;
    u8 idx;
} Self;
s32 func_01ffaf28(void *, s32, s32);
s32 func_0200aac4(Obj *, s32);
void func_02011090(Obj *, s32, s32, s32, s32);
void func_020847fc(void *, s32);
extern u8 *data_0213e440;

void func_02027fd8(Self *arg0) {
    switch (arg0->state) {
        case 1:
            if (func_01ffaf28((u8 *) arg0->obj + 0xE0, 0x1B, 0) == 0 && arg0->idx != 0xFF) {
                func_020847fc(*(void **) (data_0213e440 + 0xFC), arg0->idx);
                arg0->idx = 0xFF;
                func_02011090(arg0->obj, func_0200aac4(arg0->obj, 1), 1, 1, 0);
            }
            break;
        case 2:
            break;
        case 3:
            if (arg0->obj->f0 == 1) {
                func_02011090(arg0->obj, func_0200aac4(arg0->obj, 1), 1, 1, 0);
            }
            break;
    }
}
