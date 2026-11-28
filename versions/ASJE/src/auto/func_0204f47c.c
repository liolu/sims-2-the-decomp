/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} S16;
typedef struct {
    s32 a, b;
} P2;
typedef enum {
    Z0 = 0
} ZE;

void *func_02053384(void *, s32, s32);
extern u8 data_021318d0[];
extern P2 data_02131884;
extern s32 data_027e0000;

void *func_0204f47c(u8 *arg0, S16 arg1, s32 arg2, s32 arg3, u8 arg4, s32 arg5, s32 arg6) {
    volatile s32 t[3];
    ZE z;
    s32 w;
    s32 v0;
    s32 v1;
    s32 z2;

    func_02053384(arg0, 1, 0);
    *(u8 **) arg0          = data_021318d0;
    *(u16 *) (arg0 + 0x10) = arg1.v;
    *(s32 *) (arg0 + 0x20) = arg2;
    *(u8 *) (arg0 + 0x24)  = arg3;
    *(u8 *) (arg0 + 0x25)  = arg4;
    *(s32 *) (arg0 + 0x38) = arg5;
    *(s32 *) (arg0 + 0x3c) = arg6;
    z                      = Z0;
    *(s32 *) (arg0 + 0x60) = z;
    *(s32 *) (arg0 + 0x64) = z;
    *(s32 *) (arg0 + 0x68) = z;
    *(s32 *) (arg0 + 0x6c) = z;
    *(s32 *) (arg0 + 0x70) = z;
    *(s32 *) (arg0 + 0x74) = z;
    *(s32 *) (arg0 + 0x78) = z;
    *(s32 *) (arg0 + 0x7c) = z;
    *(s32 *) (arg0 + 0x80) = z;
    *(s32 *) (arg0 + 0x84) = z;
    *(u8 *) (arg0 + 0x94)  = 1;
    if (arg3 != 0) {
        v0 = 0x20;
    } else {
        v0 = 0x40;
    }
    *(u8 *) (arg0 + 0x95) = z;
    *(s32 *) (arg0 + 8)   = v0;
    if (arg3 != 0) {
        v1 = 1;
    } else {
        v1 = 2;
    }
    *(s32 *) (arg0 + 0xc)  = v1;
    *(P2 *) (arg0 + 0x40)  = data_02131884;
    z2                     = 0;
    t[0]                   = z2;
    t[1]                   = z2;
    *(s32 *) (arg0 + 0x60) = z2;
    w                      = t[1];
    t[2]                   = w;
    *(s32 *) (arg0 + 0x64) = w;
    *(s32 *) (arg0 + 0x50) = z2;
    *(s32 *) (arg0 + 0x54) = z2;
    *(s32 *) (arg0 + 0x8c) = z2;
    *(s32 *) (arg0 + 0x14) = (data_027e0000 << 21) + 0x6000000 + (((u32) (arg1.v << 19) >> 27) << 11);
    if (arg3 != 0) {
        *(s32 *) (arg0 + 0x1c) = 0x4000028 + ((arg2 - 2) << 3) + (data_027e0000 << 12);
        *(s32 *) (arg0 + 0x38) = *(s32 *) (arg0 + 0x38) | (*(s32 *) (arg0 + 0x38) << 8);
    } else {
        *(s32 *) (arg0 + 0x18) = 0x4000010 + (arg2 << 2) + (data_027e0000 << 12);
    }
    return arg0;
}
