/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov016_0214abb8;
extern u8 data_0212f9c4;
void func_02046844(void *);

u8 *func_ov016_02149b5c(u8 *obj) {
    *(void **) obj = (void *) &data_ov016_0214abb8;
    *(void **) obj = (void *) &data_0212f9c4;
    func_02046844(obj);
    return obj;
}
