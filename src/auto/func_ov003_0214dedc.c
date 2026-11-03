/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov003_02150b9c[];
extern u8 data_ov003_021509cc[];
void func_02046a58(void *arg0);
void func_02046844(void *arg0);

u8 *func_ov003_0214dedc(u8 *arg0) {
    *(u8 **) arg0 = data_ov003_02150b9c;
    *(u8 **) arg0 = data_ov003_021509cc;
    func_02046a58(arg0 + 8);
    func_02046844(arg0);
    return arg0;
}
