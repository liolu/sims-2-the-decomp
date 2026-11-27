/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    u32 flags;
};
struct Node {
    Obj *o;
    Node *n4;
    Node *n8;
};

extern "C" {
void func_0200fc08(s32);
void func_02010058(s32);
void func_02010380(s32, void *);
Node *func_02045614(s32);
Node *func_0204561c(s32);
void func_020492a0();
extern s32 data_02139280[];
extern u8 data_021392fc[];
extern u8 data_027e0014[];
extern s32 data_027e0000;
extern u32 data_027e0004;

s32 func_02010650(s32 arg0, s32 arg1) {
    Node *n;
    s32 r4;
    s32 i;
    Node *x;
    Obj *o;
    u32 f;
    i                = data_027e0000;
    r4               = 0;
    data_02139280[i] = 0;
    n                = func_0204561c(arg0);
    if (n != 0) {
        do {
            o = n->o;
            if ((o->flags & 0x82) == 0x82) {
                x = n->n8;
                if (x == 0) {
                    r4 = 1;
                } else {
                    n = x;
                    if (o != 0) {
                        o->v1();
                    }
                }
            }
            n = n->n4;
        } while (n != 0);
    }
    if (r4 != 0) {
        o = func_0204561c(arg0)->o;
        if (o != 0) {
            o->v1();
        }
    }
    n = func_02045614(arg0);
    if (n != 0) {
        do {
            x = n->n8;
            o = n->o;
            if ((o->flags & 0x2000000) != 0x2000000) {
                o->v2();
            }
            n = x;
        } while (x != 0);
    }
    if (!(data_027e0004 & (0x4000 << data_027e0000))) {
        s32 t = data_02139280[data_027e0000];
        if (t != 0 && arg0 == (s32) (data_027e0000 * 0x34 + (s32) data_027e0014)) {
            func_02010380(t, data_021392fc + (data_027e0000 << 7));
        }
    }
    if (arg1 == 0) {
        return 0;
    }
    func_02010058(arg0);
    n = func_0204561c(arg0);
    if (n != 0) {
        do {
            x = n->n4;
            o = n->o;
            f = o->flags;
            if ((f & 0x10008000) != 0) {
                if ((f & 1) != 0) {
                    if ((f & 2) == 0) {
                        o->v3();
                    }
                }
            }
            n = x;
        } while (x != 0);
    }
    func_0200fc08(arg0);
    if (arg1 == 1) {
        func_020492a0();
    }
    return 0;
}
}
