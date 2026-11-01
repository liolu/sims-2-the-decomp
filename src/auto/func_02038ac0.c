/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void func_0201866c(void *);
extern void func_02018acc(void *);
extern void func_02046844(void *);
extern u8 data_021316a0;
u8 **func_02038ac0(u8 **arg0) {
    *arg0 = &data_021316a0;
    func_02018acc((u8 *) arg0 + 0x18);
    func_0201866c(arg0);
    func_02046844(arg0);
    return arg0;
}
