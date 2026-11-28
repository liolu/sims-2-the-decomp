/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov003_0215054c[];
extern u8 data_ov003_021504ec[];
void func_02046a6c(void *arg0);
void func_02046858(void *arg0);

u8 *func_ov003_0214b93c(u8 *arg0) {
    *(u8 **) arg0 = data_ov003_0215054c;
    *(u8 **) arg0 = data_ov003_021504ec;
    func_02046a6c(arg0 + 8);
    func_02046858(arg0);
    return arg0;
}
