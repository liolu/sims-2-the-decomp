/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov000_0214ec80;
extern u8 data_021326f4;
extern s32 data_0213e558;
void func_020718a8(void *);
void func_0205334c(void *);

void *func_ov000_0214e8e8(void *arg0) {
    *(u8 **) arg0 = &data_ov000_0214ec80;
    func_020718a8(arg0);
    data_0213e558 = 0;
    *(s32 *) 0x04001000 &= ~0x6000;
    *(u8 **) arg0 = &data_021326f4;
    func_0205334c(arg0);
    return arg0;
}
