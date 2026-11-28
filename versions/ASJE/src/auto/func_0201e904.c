/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e434[];

void func_0201c990(void *);
void func_0201d0ac(void *);
void func_02019cdc(void *);
void func_020117e8(void *, s32, void *, void *);
s32 func_0200aac4(void *, s32);
void func_02011090(void *, s32, s32, s32, s32);
void func_02018acc(void *);

void func_0201e904(u8 *arg0) {
    u8 buf[0xc4];
    u8 *q;
    u8 *ip;
    s32 x;
    s32 v;
    s32 w;
    s32 t;
    u32 c;
    s32 *pp;

    func_0201c990(buf + 0x20);
    q                     = *(u8 **) (arg0 + 0x44);
    x                     = *(s32 *) (q + 0x78);
    ip                    = q + 0x78;
    *(s32 *) (buf + 0x8)  = x;
    *(s32 *) (buf + 0x30) = x;
    v                     = *(s32 *) (ip + 0x4);
    *(s32 *) (buf + 0xc)  = v;
    *(s32 *) (buf + 0x34) = v;
    c                     = 0xa000;
    w                     = *(s32 *) (ip + 0x8);
    *(s32 *) (buf + 0x10) = w;
    *(s32 *) (buf + 0x38) = w;
    *(u32 *) (buf + 0x0)  = c;
    *(u32 *) (buf + 0x4)  = c;
    *(u32 *) (buf + 0x44) = c;
    func_0201d0ac(buf + 0x54);
    func_02019cdc(buf + 0x90);

    q                     = *(u8 **) (arg0 + 0x44);
    pp                    = (s32 *) (q + 0x78);
    x                     = *(s32 *) (q + 0x78);
    *(s32 *) (buf + 0x14) = x;
    *(s32 *) (buf + 0xa0) = x;
    v                     = pp[1];
    *(s32 *) (buf + 0x18) = v;
    *(s32 *) (buf + 0xa4) = v;
    w                     = pp[2];
    *(s32 *) (buf + 0x1c) = w;
    *(s32 *) (buf + 0xa8) = w;
    *(u16 *) (buf + 0x84) = 0x56;
    func_020117e8(*(void **) (arg0 + 0x4), 3, buf + 0x54, arg0);
    func_020117e8(*(void **) (arg0 + 0x4), 0x10, buf + 0x90, arg0);
    func_020117e8(*(void **) (arg0 + 0x4), 0x1b, buf + 0x20, arg0);
    t = func_0200aac4(*(void **) (arg0 + 0x4), 0);
    func_02011090(*(void **) (arg0 + 0x4), t, 0, 1, 0);
    func_02018acc(buf + 0x90);
    func_02018acc(buf + 0x54);
    func_02018acc(buf + 0x20);
}
