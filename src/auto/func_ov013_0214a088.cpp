/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct W1 {
    s32 v;
};
struct VA {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(void *a, W1 b, W1 c);
};

extern "C" void func_ov013_02149f1c(void *);

extern "C" void func_ov013_0214a088(void *arg0) {
    u8 *p   = (u8 *) arg0;
    VA *obj = *(VA **) (p + 0x74);
    s32 r;
    s32 a;
    s32 b;
    volatile s32 t[3];

    r = obj->f2(arg0, *(W1 *) (p + 0x80), *(W1 *) (p + 0x84));
    if (r != 0 && *(s32 *) (p + 0x4A0) == 1) {
        func_ov013_02149f1c(arg0);
    }
    a                   = *(s32 *) (p + 0x80);
    t[0]                = a;
    t[1]                = *(s32 *) (p + 0x84);
    *(s32 *) (p + 0x90) = a;
    b                   = t[1];
    t[2]                = b;
    *(s32 *) (p + 0x94) = b;
}
