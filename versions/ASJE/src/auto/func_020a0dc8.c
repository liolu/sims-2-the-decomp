/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e598;
extern u8 *data_0213e59c;
extern u8 *data_0213e5a0;
extern u8 *data_0213e594;
extern u8 *data_0213e2f4;
extern u8 data_02124cd0;

void *func_02046814(s32, s32, s32);
void *func_02046808(s32, s32, s32);
void func_0204630c(void *, s32, s32);
void func_020bbc28(u8 *, s32, void *, s32, s32, s32);
void *func_02044560(s32);

void func_020a0dc8(u8 *arg0) {
    volatile s32 st[8];

    data_0213e598 = func_02046814(0x2C, 3, 4);
    func_0204630c(data_0213e598, 0, 0x2C);
    data_0213e59c = func_02046808(0x4000, 3, 4);
    func_0204630c(data_0213e59c, 0, 0x4000);
    data_0213e5a0          = func_02046808(0x1000, 3, 4);
    *(u8 **) data_0213e598 = arg0;
    func_020bbc28(*(u8 **) data_0213e598 + 0x1A4, 1, &data_02124cd0, 8, 0, 0);
    data_0213e594                   = func_02044560(0x9B8);
    *(s32 *) (data_0213e598 + 0x24) = *(s32 *) (data_0213e2f4 + 0x469C);
    *(s32 *) (data_0213e598 + 4)    = 0;
    st[0]                           = 0x30000;
    st[4]                           = 0x30000;
    *(s32 *) (data_0213e598 + 8)    = 0x30000;
    st[1]                           = 0x38000;
    st[5]                           = 0x38000;
    *(s32 *) (data_0213e598 + 0xC)  = 0x38000;
    st[2]                           = 0;
    st[6]                           = 0;
    *(s32 *) (data_0213e598 + 0x10) = 0;
    st[3]                           = 0;
    st[7]                           = 0;
    *(s32 *) (data_0213e598 + 0x14) = 0;
    *(s32 *) (data_0213e598 + 0x18) = 0;
    *(s32 *) (data_0213e598 + 0x1C) = 0;
    *(s32 *) (data_0213e598 + 0x20) = 0;
    *(s32 *) (data_0213e598 + 0x28) = -1;
}
