/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" u8 *data_02139250;

extern "C" void func_020043a8(void) {
    u8 *self;
    u8 *obj;
    s32 flag;
    s32 idx;

    self = data_02139250;
    obj  = *(u8 **) (self + 0x34C);
    if (obj == NULL) {
        return;
    }
    flag = (*(u32 *) (obj + 4) & 0x400000) != 0;
    if (flag == 0) {
        return;
    }
    if (obj != NULL) {
        ((VA *) obj)->f1();
    }
    *(void **) (self + 0x34C) = NULL;
    idx                       = 1 - self[0x2F1];
    ((s32 *) (self + 0x2CC))[idx] -= (s16) ((self[0x2F5] + 1) * 5);
    self[0x2F0] = 1;
}
