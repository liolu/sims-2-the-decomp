/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02130a1c;
void func_020d50f0(s32);
void func_02018ac4(void *);
void func_02018664(void *);
void func_02046858(void *);

void *func_0202c5d4(u8 *arg0) {
    *(u8 **) arg0 = &data_02130a1c;
    if (*(s32 *) (arg0 + 0x28) != -1) {
        func_020d50f0(*(s32 *) (arg0 + 0x28));
    }
    func_02018ac4(arg0 + 0x18);
    func_02018664(arg0);
    func_02046858(arg0);
    return arg0;
}
