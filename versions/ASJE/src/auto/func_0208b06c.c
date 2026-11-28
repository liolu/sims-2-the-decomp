/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213341c[];
extern u8 data_02139e64[];

void func_02067908(void *, ...);

void *func_0208b06c(void *arg0) {
    s32 kind;
    u8 *self = (u8 *) arg0;
    u8 *obj;
    u8 *g;
    u8 *p;

    *(u8 **) self = data_0213341c;
    obj           = *(u8 **) (self + 4);
    g             = *(u8 **) data_02139e64;
    if (obj != 0) {
        p = *(u8 **) (g + 0xdac);
        if (p != 0) {
            kind = *(s32 *) (p + 4);
        } else {
            kind = 0x32;
        }
        if (kind == 0xc) {
            func_02067908(p, obj);
        }
    }
    if (*(u8 **) (self + 4) != 0) {
        *(u32 *) (*(u8 **) (self + 4) + 0x130) = 0;
    }
    return self;
}
