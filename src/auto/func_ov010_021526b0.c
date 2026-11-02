/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov010_02152e28;
extern u8 data_0212fff8;
void func_02017640(void *);

u8 *func_ov010_021526b0(u8 *obj) {
    *(void **) obj = (void *) &data_ov010_02152e28;
    *(void **) obj = (void *) &data_0212fff8;
    func_02017640(obj);
    return obj;
}
