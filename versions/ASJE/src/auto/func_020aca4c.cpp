/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" void func_020aca4c(void);
extern "C" void func_0204e364(s32, s32, s32, s32, s32, s32);
extern "C" void func_02058684(void);
extern u8 data_02139e64;
extern u8 data_0213d728;
extern u8 data_0213d670;
extern "C" void func_020aca4c(void) {
    u8 *o;
    s32 s;
    o = *(u8 **) (*(u8 **) &data_02139e64 + 0xdac);
    s = *(u8 *) (o + 0x28);
    if (s != 0xff) {
        *(u8 *) (o + 0x28) = 0xff;
        func_0204e364(*(s32 *) &data_0213d728, 3, *(s32 *) (&data_0213d670 + 0xa4), s, *(s32 *) (o + 0x138),
                      (s32) func_020aca4c);
    } else {
        func_02058684();
    }
}
