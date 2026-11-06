/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" {
void func_02016708(void *, s32);
void func_0201716c(void *, s32);
void func_02046384(void *, s32, s32);
void *func_0204688c(s32, s32, s32);
void func_02049b00(void *, s32);
extern u8 data_ov010_02152c4c[];
extern u8 data_ov010_02152e74[];

void *func_ov010_0214a1bc(void *arg0, u8 arg1) {
    volatile s32 tmp[4];
    u8 *o;
    s32 x;
    s32 y;

    o = (u8 *) func_0204688c(0xA4, 3, 4);
    if (o != NULL) {
        func_0201716c(o, 3);
        *(void **) o          = (void *) data_ov010_02152e74;
        *(s32 *) (o + 0x74)   = 0;
        *(s32 *) (o + 0x78)   = 0;
        *(s32 *) (o + 0x7C)   = 0;
        *(s32 *) (o + 0x88)   = 0;
        *(s32 *) (o + 0x8C)   = 0;
        *(void **) (o + 0x90) = arg0;
        *(u8 *) (o + 0x9C)    = 0;
        *(u8 *) (o + 0x9D)    = 0;
        *(u8 *) (o + 0x9E)    = 0;
        *(u8 *) (o + 0x9F)    = 0;
        *(u8 *) (o + 0xA0)    = 0;
        *(u8 *) (o + 0xA1)    = 0;
        *(u8 *) (o + 0xA2)    = 0;
        *(u8 *) (o + 0xA3)    = 0;
        func_02046384(o + 0x80, 0, 8);
        *(s32 *) (o + 4)   = *(s32 *) (o + 4) & ~1;
        *(s16 *) (o + 0xC) = 0x12;
    }
    *(u8 *) (o + 0x87)  = arg1;
    *(s32 *) (o + 0x14) = *(s32 *) (o + 0x14) & ~0xC00;
    if (*(u8 *) (o + 0x87) == 0) {
        func_02049b00(o, 8);
    } else {
        func_02049b00(o, 7);
    }
    y                   = ((*(s32 *) ((u8 *) arg0 + 0x1CC) + 1) * 8 + 2) << 12;
    tmp[1]              = y;
    tmp[3]              = y;
    x                   = (*(s32 *) ((u8 *) arg0 + 0x1C8) + 1) << 15;
    tmp[0]              = x;
    tmp[2]              = x;
    *(s32 *) (o + 0x50) = x;
    *(s32 *) (o + 0x54) = tmp[3];
    func_02016708(o, *(s32 *) (data_ov010_02152c4c + arg1 * 4));
    *(s32 *) (o + 4) = *(s32 *) (o + 4) | 0x200001;
    return o;
}
}
