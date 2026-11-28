/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" {
void func_020165bc(void *, s32);
void func_020d5880(s32);
void func_0206fd18(void *);
}

struct FX {
    s32 v;
};

struct VA {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(void *a, FX b, FX c);
};

extern "C" void func_0206fb90(u8 *arg0) {
    s32 r;
    s32 v;
    s32 r1;
    u8 *obj;
    s32 cnt;
    u16 sel;
    FX *pb;
    FX *pc;

    obj = *(u8 **) (arg0 + 0x74);
    pb  = (FX *) (arg0 + 0x80);
    pc  = (FX *) (arg0 + 0x84);
    r   = ((VA *) obj)->f2(arg0, *pb, *pc);
    if (r != 0) {
        func_020165bc(arg0, 1);
        r1                     = *(s32 *) (arg0 + 0x94);
        *(s32 *) (arg0 + 0x94) = r1 - 1;
        if (r1 != 0) {
            return;
        }
        func_020d5880(0x161);
        obj = *(u8 **) (arg0 + 0x90);
        sel = *(u16 *) (arg0 + 0xA);
        cnt = *(s32 *) (obj + 0x1C);
        if (cnt != 0) {
            if (sel == 0) {
                *(s32 *) (obj + 0x24) -= 1;
            } else {
                *(s32 *) (obj + 0x24) += 1;
            }
            v = *(s32 *) (obj + 0x24);
            if (v < 0) {
                *(s32 *) (obj + 0x24) = 0;
            } else if (v >= *(s32 *) (obj + 0x1C)) {
                *(s32 *) (obj + 0x24) = *(s32 *) (obj + 0x1C) - 1;
            } else {
                func_0206fd18(obj);
            }
        }
        *(s32 *) (arg0 + 0x94) = 4;
    } else {
        func_020165bc(arg0, 0);
        *(s32 *) (arg0 + 0x94) = 0;
    }
}
