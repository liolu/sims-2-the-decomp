/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02005198(void *a, void *b);

extern u8 data_02139250;
extern u8 data_021176bc;

void func_02004824(void) {
    u8 *obj;
    s32 f4;
    s32 f1;
    s32 idx;
    void (*fn)(void);

    obj = *(u8 **) &data_02139250;
    f4  = obj[0x2F4];
    if (f4 == 0) {
        if (obj[0x2F1] == 0) {
            func_02005198(obj, obj + 0xC0);
            return;
        }
        idx = obj[0x2F2];
        fn  = ((void (**)(void)) &data_021176bc)[idx];
        fn();
        return;
    }
    f1 = obj[0x2F1];
    if (f1 == 0 && f4 == 1) {
        func_02005198(obj, obj + 0xC0);
        return;
    }
    if (f1 != 1) {
        return;
    }
    if (*(volatile u8 *) (obj + 0x2F4) != 2) {
        return;
    }
    func_02005198(obj, obj + 0x188);
}
