/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk02011394 {
    u8 unk0[0x20E];
    u8 busy;
    u8 done;
} Unk02011394;

s32 func_020f7c34(s32 *);

void func_02011394(Unk02011394 *obj) {
    s32 result;
    if (obj->busy) {
        while (func_020f7c34(&result) != 0) {
        }
        obj->busy = 0;
        if (result == 0) {
            obj->done = 1;
            return;
        }
    }
    obj->done = 0;
}
