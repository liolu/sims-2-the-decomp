/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VB {
    virtual void f0();
    virtual void f1();
};

extern "C" void func_0203d078(s32);

extern "C" void func_0206d914(void *arg0) {
    s32 i;
    void *obj;
    void **slots;

    slots = (void **) arg0;
    i     = 3;
    do {
        obj = slots[0x2B + i];
        if (obj != NULL) {
            ((VB *) obj)->f1();
        }
        obj = slots[0x27 + i];
        if (obj != NULL) {
            ((VB *) obj)->f1();
        }
        i -= 1;
    } while (i >= 0);
    i = 0;
    if (*(s32 *) ((u8 *) arg0 + 0x70) > 0) {
        do {
            obj = slots[0x10 + i];
            if (obj != NULL) {
                ((VB *) obj)->f1();
            }
            i += 1;
        } while (i < *(s32 *) ((u8 *) arg0 + 0x70));
    }
    i = 0;
    do {
        obj = slots[6 + i];
        if (obj != NULL) {
            ((VB *) obj)->f1();
        }
        i += 1;
    } while (i < 6);
    i = 0;
    do {
        obj = slots[12 + i];
        if (obj != NULL) {
            ((VB *) obj)->f1();
        }
        i += 1;
    } while (i < 4);
    i = 0;
    do {
        obj = slots[0x35 + i];
        if (obj != NULL) {
            ((VB *) obj)->f1();
        }
        i += 1;
    } while (i < 3);
    func_0203d078(3);
}
