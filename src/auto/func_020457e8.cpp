/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
};

extern "C" void func_020457e8(VA *arg0, void *arg1) {
    u8 *p;
    u8 *node;
    u8 *head;
    s32 empty;

    p = (u8 *) arg0;
    if (*(u16 *) (p + 0x2A) >= *(u16 *) (p + 0x28)) {
        arg0->f11();
    }
    node                = *(u8 **) (p + 0x20);
    *(u8 **) (p + 0x20) = *(u8 **) (node + 4);
    if (*(u8 **) (p + 0x20) == 0) {
        *(u8 **) (p + 0x24) = 0;
    }
    *(void **) node = arg1;
    head            = *(u8 **) (p + 4);
    empty           = (head == 0);
    if (empty) {
        *(u8 **) (p + 8)    = node;
        *(u8 **) (p + 4)    = *(u8 **) (p + 8);
        *(u8 **) (node + 4) = 0;
        *(u8 **) (node + 8) = 0;
    }
    if (!empty) {
        *(u8 **) (node + 8) = 0;
        *(u8 **) (node + 4) = head;
        *(u8 **) (head + 8) = node;
        *(u8 **) (p + 4)    = node;
    }
    *(u16 *) (p + 0x2A) = (u16) (*(u16 *) (p + 0x2A) + 1);
}
