/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void func_02018664(void *);
extern void func_02018ac4(void *);
extern void func_02046858(void *);
extern u8 data_02131020;
u8 **func_020363f0(u8 **arg0) {
    *arg0 = &data_02131020;
    func_02018ac4((u8 *) arg0 + 0x18);
    func_02018664(arg0);
    func_02046858(arg0);
    return arg0;
}
