/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void func_02018664(void *);
extern void func_02018ac4(void *);
extern void func_02046858(void *);
extern u8 data_0212fd18;
u8 **func_02019500(u8 **arg0) {
    *arg0 = &data_0212fd18;
    func_02018ac4((u8 *) arg0 + 0x18);
    func_02018664(arg0);
    func_02046858(arg0);
    return arg0;
}
