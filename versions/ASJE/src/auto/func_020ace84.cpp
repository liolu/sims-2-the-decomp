/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" void func_020467a4(void *);

extern "C" void func_020ace84(u8 *arg0) {
    s32 i;
    u8 *obj;

    for (i = 0; i < 4; i++) {
        obj = (*(u8 ***) (arg0 + 0xFC))[i];
        if (obj != NULL) {
            ((VA *) obj)->f1();
        }
    }
    for (i = 0; i < 3; i++) {
        obj = (*(u8 ***) (arg0 + 0x100))[i];
        if (obj != NULL) {
            ((VA *) obj)->f1();
        }
    }
    func_020467a4(*(void **) (arg0 + 0xFC));
    func_020467a4(*(void **) (arg0 + 0x100));
    if (*(void **) (arg0 + 0x138) != NULL) {
        func_020467a4(*(void **) (arg0 + 0x138));
    }
}
