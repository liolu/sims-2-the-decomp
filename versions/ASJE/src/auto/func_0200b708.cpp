/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a, s32 b, s32 c);
    virtual void f4(s32 a);
};

extern "C" VA *func_0200b9d0(void *a, s32 b, s32 c);

extern "C" void *func_0200b708(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    VA *o;

    switch (arg2) {
        case 0:
            o = func_0200b9d0(arg0, arg2, arg1);
            o->f3(arg2, arg4, arg5);
            break;
        case 4:
            o = func_0200b9d0(arg0, arg2, arg1);
            o->f3(arg2, arg4, arg5);
            break;
        case 5:
            o = func_0200b9d0(arg0, arg2, arg1);
            o->f3(arg2, arg4, arg5);
            break;
        case 3:
            o = func_0200b9d0(arg0, arg2, arg1);
            o->f3(arg2, arg4, arg5);
            break;
    }
    o->f4(arg4);
    *(u8 *) ((u8 *) o + 0x16) = (u8) arg3;
    if (*(u8 *) ((u8 *) o + 0x14) == 0) {
        if (*(void **) ((u8 *) arg0 + 0xC) == 0) {
            *(VA **) ((u8 *) arg0 + 0xC) = o;
        }
    }
    return o;
}
