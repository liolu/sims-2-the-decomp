/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_ov000_0214eb40;
extern u8 data_021325b4;
extern s32 data_0213e418;
void func_02071830(void *);
void func_020532d4(void *);
void func_020467cc(void *);

void *func_ov000_0214be5c(void *arg0) {
    *(u8 **) arg0 = &data_ov000_0214eb40;
    func_02071830(arg0);
    data_0213e418 = 0;
    *(s32 *) 0x04001000 &= ~0x6000;
    *(u8 **) arg0 = &data_021325b4;
    func_020532d4(arg0);
    func_020467cc(arg0);
    return arg0;
}
