/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02046aac(void *, s32, s32, s32, s32);
extern u8 data_02131858[];
extern u8 data_02136a3c[];
extern u8 data_02136a5c[];

void *func_020d03a8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *p = (u8 *) arg0;
    u8 *ip;
    s32 z;
    s32 j;

    func_02046aac(arg0, 0x30, arg1, arg2, arg3);
    *(u8 **) (p + 0x24) = data_02131858;
    *(u8 **) p          = data_02136a3c;
    *(u8 **) (p + 0x24) = data_02136a5c;
    z                   = 0;
    *(s32 *) (p + 0x2c) = z;
    ip                  = p + 0x40;
    do {
        j           = z;
        *(s32 *) ip = z;
        do {
            ((s32 *) ip)[j + 1] = z;
            j++;
        } while (j < 2);
        ip += 0xc;
    } while (ip != p + 0xa0);
    *(s32 *) (p + 0xa4) = z;
    *(s32 *) (p + 0xa8) = z;
    *(s32 *) (p + 0xac) = 2;
    *(s32 *) (p + 0xb0) = z;
    *(s32 *) (p + 0xb4) = z;
    *(s32 *) (p + 0xb8) = z;
    *(s32 *) (p + 0xc0) = -1;
    *(s32 *) (p + 0xc4) = z;
    *(s32 *) (p + 0x28) = arg1;
    *(s32 *) (p + 0xc0) = arg2;
    *(s32 *) (p + 0xc4) = arg3;
    *(s32 *) (p + 0x30) = z;
    *(s32 *) (p + 0x34) = z;
    return arg0;
}
