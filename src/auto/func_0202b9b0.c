/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02130dec;
void func_020d5604(s32);
void func_02018acc(void *);
void func_0201866c(void *);
void func_02046844(void *);

void *func_0202b9b0(u8 *arg0) {
    *(u8 **) arg0 = &data_02130dec;
    if (*(s32 *) (arg0 + 0x28) != -1) {
        func_020d5604(*(s32 *) (arg0 + 0x28));
    }
    func_02018acc(arg0 + 0x18);
    func_0201866c(arg0);
    func_02046844(arg0);
    return arg0;
}
