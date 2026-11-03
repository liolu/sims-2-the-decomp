/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e6d8;
extern u8 *data_0213e6dc;
extern u8 *data_0213e6e0;
extern u8 *data_0213e6d4;
extern u8 *data_0213e434;
extern u8 data_02124e0c;

void *func_0204688c(s32, s32, s32);
void *func_02046880(s32, s32, s32);
void func_02046384(void *, s32, s32);
void func_020bbcf0(u8 *, s32, void *, s32, s32, s32);
void *func_020445d8(s32);

void func_020a0e90(u8 *arg0) {
    volatile s32 st[8];

    data_0213e6d8 = func_0204688c(0x2C, 3, 4);
    func_02046384(data_0213e6d8, 0, 0x2C);
    data_0213e6dc = func_02046880(0x4000, 3, 4);
    func_02046384(data_0213e6dc, 0, 0x4000);
    data_0213e6e0          = func_02046880(0x1000, 3, 4);
    *(u8 **) data_0213e6d8 = arg0;
    func_020bbcf0(*(u8 **) data_0213e6d8 + 0x1A4, 1, &data_02124e0c, 8, 0, 0);
    data_0213e6d4                   = func_020445d8(0x9B8);
    *(s32 *) (data_0213e6d8 + 0x24) = *(s32 *) (data_0213e434 + 0x469C);
    *(s32 *) (data_0213e6d8 + 4)    = 0;
    st[0]                           = 0x30000;
    st[4]                           = 0x30000;
    *(s32 *) (data_0213e6d8 + 8)    = 0x30000;
    st[1]                           = 0x38000;
    st[5]                           = 0x38000;
    *(s32 *) (data_0213e6d8 + 0xC)  = 0x38000;
    st[2]                           = 0;
    st[6]                           = 0;
    *(s32 *) (data_0213e6d8 + 0x10) = 0;
    st[3]                           = 0;
    st[7]                           = 0;
    *(s32 *) (data_0213e6d8 + 0x14) = 0;
    *(s32 *) (data_0213e6d8 + 0x18) = 0;
    *(s32 *) (data_0213e6d8 + 0x1C) = 0;
    *(s32 *) (data_0213e6d8 + 0x20) = 0;
    *(s32 *) (data_0213e6d8 + 0x28) = -1;
}
