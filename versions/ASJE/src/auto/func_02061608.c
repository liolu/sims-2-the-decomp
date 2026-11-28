/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02079ce0(void *, s32 *);               /* extern */
extern void *data_0213e2f4;

void func_02061608(void) {
    u8 *obj;
    u8 buf[0x4C];

    *(s32 *) (buf + 0x0)  = 0x80000000;
    *(s32 *) (buf + 0x4)  = 0x80000000;
    *(s32 *) (buf + 0x8)  = 0x80000000;
    *(s32 *) (buf + 0x20) = 0;
    *(s16 *) (buf + 0x24) = 0;
    *(u8 *) (buf + 0x26)  = 1;
    *(u8 *) (buf + 0x27)  = 0;
    obj                   = data_0213e2f4;
    *(s32 *) (buf + 0xC)  = 0;
    *(s32 *) (buf + 0x10) = 0;
    *(s32 *) (buf + 0x14) = 0;
    *(s32 *) (buf + 0x18) = 0;
    *(u8 *) (buf + 0x1D)  = 0;
    *(u8 *) (buf + 0x1C)  = 0;
    *(u8 *) (buf + 0x1E)  = 0;
    *(u8 *) (buf + 0x1F)  = 0;
    *(u8 *) (buf + 0x44)  = 0;
    *(s16 *) (buf + 0x3C) = 0;
    *(s32 *) (buf + 0x2C) = 0;
    *(s16 *) (buf + 0x30) = 0;
    *(s16 *) (buf + 0x32) = 0;
    *(u8 *) (buf + 0x34)  = 0;
    *(u8 *) (buf + 0x35)  = 1;
    *(u8 *) (buf + 0x36)  = 0;
    *(s32 *) (buf + 0x38) = 0;
    *(s32 *) (buf + 0x28) = 0x47;
    *(s32 *) (buf + 0x48) = -1;
    *(s32 *) (buf + 0x0)  = *(s32 *) (obj + 0x480C) + 0xE10;
    *(u8 *) (buf + 0x35)  = 1;
    *(s32 *) (buf + 0x2C) = 0x865;
    *(s16 *) (buf + 0x32) = 0x1A;
    func_02079ce0(obj + 0x21DC, (s32 *) buf);
}
