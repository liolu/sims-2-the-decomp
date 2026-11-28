/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02124550[];
extern u8 data_02124560[];
extern u8 data_02124520[];
extern u8 data_0212452c[];
extern u8 data_02124538[];

void func_02016700(void *a, void *b);
M2C_UNK func_020d54a8(M2C_UNK a);

void func_0209d208(u8 *arg0, s32 arg1) {
    u8 *e;
    s32 w;
    s32 ip;
    s32 idx;

    e                   = *(u8 **) (arg0 + *(s32 *) (arg0 + 0x30) * 4 + 0xc70);
    ip                  = *(u16 *) (e + 0xa);
    w                   = *(s32 *) (e + 0x14);
    *(s32 *) (e + 0x14) = (w & ~0xf000) | ((data_02124550[ip] & 0xf) << 12);
    func_02016700(e, data_02124560 + *(u16 *) (e + 0xa) * 16);

    e                   = *(u8 **) (arg0 + arg1 * 4 + 0xc70);
    ip                  = *(u16 *) (e + 0xa);
    w                   = *(s32 *) (e + 0x14);
    *(s32 *) (e + 0x14) = (w & ~0xf000) | (((data_02124550[ip] + 1) & 0xf) << 12);
    func_02016700(e, data_02124560 + (*(u16 *) (e + 0xa) * 2 + 1) * 8);

    idx = *(s32 *) (arg0 + 0x30);
    if (arg1 != idx) {
        func_020d54a8(0x16a);
    }
    *(s32 *) (arg0 + 0x30) = arg1;
    switch (arg1) {
        case 0:
        case 1:
        case 2:
            *(s32 *) (arg0 + 0x34) = 0;
            break;
        case 3:
        case 4:
        case 5:
            *(s32 *) (arg0 + 0x34) = 1;
            break;
        case 6:
            *(s32 *) (arg0 + 0x34) = 3;
            break;
        case 7:
            *(s32 *) (arg0 + 0x34) = 2;
            break;
        case 8:
            *(s32 *) (arg0 + 0x34) = 4;
            break;
        case 9:
            *(s32 *) (arg0 + 0x34) = 5;
            break;
    }
    switch (arg1) {
        case 0:
        case 3:
            *(s32 *) (arg0 + 0x40) = 0;
            *(u8 **) (arg0 + 0x44) = data_02124520;
            break;
        case 1:
        case 4:
            *(s32 *) (arg0 + 0x40) = 1;
            *(u8 **) (arg0 + 0x44) = data_0212452c;
            break;
        case 2:
        case 5:
            *(s32 *) (arg0 + 0x40) = 2;
            *(u8 **) (arg0 + 0x44) = data_02124538;
            break;
    }
}
