/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VB {
    virtual void f0();
    virtual void f1();
    virtual void f2(s32 *out);
};
extern "C" void func_01ffb104(void *, void *, void *, s32);
extern "C" void *func_0200b8ac(void *);

extern "C" void func_02015050(void *arg0) {
    u8 *p = (u8 *) arg0;
    volatile s32 tmp[10];
    void *temp_r0;
    u8 *r1p;
    s32 a;
    s32 v;
    if (*(u8 *) (p + 0x72) != 0) {
        func_01ffb104(p + 0x68, arg0, p + 0x78, 0);
    }
    if (*(u8 *) (p + 0x28) == 0) {
        return;
    }
    temp_r0 = func_0200b8ac(p + 0x24);
    ((VB *) temp_r0)->f2((s32 *) (void *) &tmp[4]);
    a                               = *(s32 *) (p + 0x78);
    tmp[1]                          = a;
    *(s32 *) ((u8 *) temp_r0 + 4)   = a;
    r1p                             = p + 0x78;
    a                               = *(s32 *) (r1p + 4);
    tmp[2]                          = a;
    *(s32 *) ((u8 *) temp_r0 + 8)   = a;
    a                               = *(s32 *) (r1p + 8);
    tmp[3]                          = a;
    *(s32 *) ((u8 *) temp_r0 + 0xC) = a;
    v                               = tmp[7];
    tmp[0]                          = v;
    *(s32 *) ((u8 *) temp_r0 + 8)   = *(s32 *) ((u8 *) temp_r0 + 8) + v;
}
