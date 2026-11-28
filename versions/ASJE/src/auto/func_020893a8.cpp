/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct V {
    virtual void f0();
    virtual void f1();
};

extern "C" void func_02089294(void *arg0, u8 *arg1);

extern "C" void func_020893a8(u8 *p, volatile u8 *s) {
    u32 c;

    while (p[0xBC] != 0) {
        if (p[0xBC] != 0) {
            p[0xBC]--;
            if (*(V **) (p + p[0xBC] * 4 + 0x18) != 0) {
                (*(V **) (p + p[0xBC] * 4 + 0x18))->f1();
            }
            *(V **) (p + p[0xBC] * 4 + 0x18) = 0;
            *(s16 *) (p + 0x72) -= (p + p[0xBC])[0xAC];
            (p + p[0xBC])[0x5C] = 0;
        }
    }
    while (*s != 0) {
        c = *s;
        func_02089294(p, (u8 *) &c);
        s++;
    }
}
