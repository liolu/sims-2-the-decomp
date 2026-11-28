/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_0208272c(void *, s32, s32, s32);
M2C_UNK func_02079ce0();
typedef enum {
    HIV = 0x80000000
} HE;
typedef enum {
    KV = 0x47
} KE;
typedef enum {
    MV = -1
} ME;
typedef enum {
    ZV = 0
} ZE;
extern void *data_0213e2f4;

void func_02062f2c(s32 arg0) {
    u8 buf[0x4C];
    u8 *obj;
    u8 *elem;
    HE h = HIV;
    ZE z = ZV;
    KE k = KV;
    ME m = MV;

    *(s32 *) (buf + 0x28) = k;
    *(s32 *) (buf + 0x48) = m;
    *(s32 *) (buf + 0x00) = h;
    *(s32 *) (buf + 0x04) = h;
    *(s32 *) (buf + 0x08) = h;
    *(s32 *) (buf + 0x20) = z;
    *(u16 *) (buf + 0x24) = 0;
    *(u8 *) (buf + 0x26)  = 1;
    *(u8 *) (buf + 0x27)  = 0;
    *(s32 *) (buf + 0x0C) = z;
    *(s32 *) (buf + 0x10) = z;
    *(s32 *) (buf + 0x14) = z;
    *(s32 *) (buf + 0x18) = z;
    *(u8 *) (buf + 0x1D)  = 0;
    *(u8 *) (buf + 0x1C)  = 0;
    *(u8 *) (buf + 0x1E)  = 0;
    *(u8 *) (buf + 0x1F)  = 0;
    *(u8 *) (buf + 0x44)  = 0;
    *(u16 *) (buf + 0x3C) = 0;
    *(s32 *) (buf + 0x2C) = z;
    *(u16 *) (buf + 0x30) = 0;
    *(u16 *) (buf + 0x32) = 0;
    *(u8 *) (buf + 0x34)  = 0;
    *(u8 *) (buf + 0x35)  = 1;
    *(u8 *) (buf + 0x36)  = 0;
    *(s32 *) (buf + 0x38) = z;

    elem                  = (u8 *) data_0213e2f4 + 0x21DC + (s32) arg0 * 0x2C;
    *(s32 *) (buf + 0x00) = *(s32 *) ((u8 *) data_0213e2f4 + 0x480C) + 0xE10;
    *(u8 *) (buf + 0x36)  = 1;
    *(u8 *) (buf + 0x35)  = 1;
    *(s32 *) (buf + 0x2C) = 0x877;
    *(u8 *) (buf + 0x34)  = 1;
    *(u16 *) (buf + 0x32) = 9;
    *(u16 *) (buf + 0x30) = (u16) arg0;
    *(s32 *) (buf + 0x38) = 3;
    *(s32 *) (buf + 0x48) = 0x841;
    *(u16 *) (buf + 0x3C) = 4;
    *(s32 *) (buf + 0x28) = (s32) func_0208272c(elem, 7, 1, 4);
    *(s32 *) (buf + 0x20) = 0x91C;
    *(u16 *) (buf + 0x24) = (u16) arg0;
    obj                   = (u8 *) data_0213e2f4 + 0x21DC;
    func_02079ce0(obj, buf);
}
