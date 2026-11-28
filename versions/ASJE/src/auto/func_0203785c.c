/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void func_0201866c(void *);
extern void func_02018acc(void *);
extern void func_020467cc(void *);
extern u8 data_0213147c;
u8 **func_0203785c(u8 **arg0) {
    *arg0 = &data_0213147c;
    func_02018acc((u8 *) arg0 + 0x18);
    func_0201866c(arg0);
    func_020467cc(arg0);
    return arg0;
}
