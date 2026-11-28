/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov000_0214e7a0;
extern u8 data_021321e4;
extern s32 data_0213e080;
void func_02071898(void *);
void func_0205355c(void *);
void func_02046858(void *);

void *func_ov000_0214babc(void *arg0) {
    *(u8 **) arg0 = &data_ov000_0214e7a0;
    func_02071898(arg0);
    data_0213e080 = 0;
    *(s32 *) 0x04001000 &= ~0x6000;
    *(u8 **) arg0 = &data_021321e4;
    func_0205355c(arg0);
    func_02046858(arg0);
    return arg0;
}
