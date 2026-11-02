/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 v;
} Fx;
struct VB {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(void *a, Fx b, Fx c);
};
extern "C" void func_020165bc(void *a, s32 b);
extern "C" void func_0209e610(u8 *arg0) {
    s32 r;
    Fx *pb;
    Fx *pc;
    pb = (Fx *) (arg0 + 0x80);
    pc = (Fx *) (arg0 + 0x84);
    r  = ((VB *) *(void **) (arg0 + 0x74))->f2(arg0, *pb, *pc);
    func_020165bc(arg0, r);
}
