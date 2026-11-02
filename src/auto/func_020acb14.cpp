/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" void func_020acb14(void);
extern "C" void func_0204e3dc(s32, s32, s32, s32, s32, s32);
extern "C" void func_020586fc(void);
extern u8 data_02139fa4;
extern u8 data_0213d868;
extern u8 data_0213d7b0;
extern "C" void func_020acb14(void) {
    u8 *o;
    s32 s;
    o = *(u8 **) (*(u8 **) &data_02139fa4 + 0xdac);
    s = *(u8 *) (o + 0x28);
    if (s != 0xff) {
        *(u8 *) (o + 0x28) = 0xff;
        func_0204e3dc(*(s32 *) &data_0213d868, 3, *(s32 *) (&data_0213d7b0 + 0xa4), s, *(s32 *) (o + 0x138),
                      (s32) func_020acb14);
    } else {
        func_020586fc();
    }
}
