/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" {
void func_ov009_0214b90c(void *);
void func_02046844(void *);
extern u8 data_0212f9c4;
extern u8 data_ov009_0214c124;
}

extern "C" void *func_ov009_0214a438(void *arg0) {
    s32 i;
    VA **tbl = (VA **) arg0;

    *(u8 **) arg0 = &data_ov009_0214c124;
    func_ov009_0214b90c((u8 *) arg0 + 0x3C);
    if (tbl[0x64 / 4] != NULL) {
        if (tbl[0x64 / 4] != NULL) {
            tbl[0x64 / 4]->f1();
        }
    }
    i = 0;
    do {
        if (tbl[i + 0x68 / 4] != NULL) {
            tbl[i + 0x68 / 4]->f1();
        }
        if (tbl[i + 0x78 / 4] != NULL) {
            tbl[i + 0x78 / 4]->f1();
        }
        i += 1;
    } while (i < 4);
    *(u8 **) arg0 = &data_0212f9c4;
    func_02046844(arg0);
    return arg0;
}
