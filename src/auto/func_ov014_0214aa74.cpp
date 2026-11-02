/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v;
} Wd;

struct VA2 {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(void *a, Wd b, Wd c);
};

extern "C" void func_020165bc(void *a, s32 b);

extern "C" void func_ov014_0214aa74(void *arg0) {
    VA2 *o = *(VA2 **) ((unsigned char *) arg0 + 0x74);
    s32 r  = o->f2(arg0, *(Wd *) ((unsigned char *) arg0 + 0x80), *(Wd *) ((unsigned char *) arg0 + 0x84));
    func_020165bc(arg0, r);
}
