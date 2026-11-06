/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 x;
    s32 y;
} Vec;

extern u8 data_ov000_0214e98c;
extern u32 data_027e110c;

void *func_0204688c(s32, s32, s32);
void *func_020170c4(void *, s32);
void func_02049b00(void *, s32);
void func_02016708(void *, void *);
void func_020168a4(void *, s32);
s32 func_0204ca70(s32);
s32 func_0204cbb4(s32, s32);
void func_ov000_0214aab8(u8 *, s32);

s32 func_ov000_0214b72c(u8 *arg0) {
    s32 fa[13];
    s32 fb[13];
    s32 i;
    u8 *e;
    u8 *q;
    void *o;
    s32 v;
    s32 w;

    q = arg0;
    for (i = 0; i < 8; i++) {
        if (*(s32 *) (q + 0x58) == 0) {
            e = arg0 + 0x58 + i * 0x18;
            o = func_0204688c(0x74, 0, 4);
            if (o != 0) {
                o = func_020170c4(o, 0);
            }
            *(void **) e = o;
            func_02049b00(*(void **) e, 0xa);
            func_02016708(*(void **) e, &data_ov000_0214e98c);
            *(u32 *) (*(u8 **) e + 4) |= 0x10;
            func_020168a4(*(void **) e, 2);
            v                   = func_0204ca70((u16) data_027e110c);
            ((Vec *) &fa[0])->x = v;
            ((Vec *) &fb[0])->x = v;
            *(s32 *) (e + 8)    = v;
            e[0x10]             = 1;
            v                   = 0;
            ((Vec *) &fa[1])->x = v;
            ((Vec *) &fb[1])->x = v;
            *(s32 *) (e + 0xc)  = v;
            v                   = func_0204cbb4(0x1000, 0x1800);
            ((Vec *) &fa[2])->x = v;
            ((Vec *) &fb[2])->x = v;
            *(s32 *) (e + 4)    = v;
            if (func_0204ca70(1) != 0) {
                v                            = func_0204cbb4(0, 0xc0) << 12;
                ((Vec *) &fa[3])->x          = v;
                ((Vec *) &fb[3])->x          = v;
                *(s32 *) (*(u8 **) e + 0x54) = v;
                v                            = func_0204cbb4(-16, 16) << 12;
                ((Vec *) &fa[4])->x          = v;
                ((Vec *) &fb[4])->x          = v;
                *(s32 *) (*(u8 **) e + 0x50) = v;
                w                            = 0;
                ((Vec *) &fa[5])->x          = w;
                ((Vec *) &fb[5])->x          = w;
                o                            = *(void **) e;
                if (*(s32 *) ((u8 *) o + 0x50) < ((Vec *) &fa[5])->x) {
                    v                          = 0x10000;
                    ((Vec *) &fa[6])->x        = v;
                    ((Vec *) &fb[6])->x        = v;
                    *(s32 *) ((u8 *) o + 0x50) = *(s32 *) ((u8 *) o + 0x50) - 0x10000;
                } else {
                    v                          = 0x110000;
                    ((Vec *) &fa[7])->x        = v;
                    ((Vec *) &fb[7])->x        = v;
                    *(s32 *) ((u8 *) o + 0x50) = *(s32 *) ((u8 *) o + 0x50) + 0x110000;
                }
            } else {
                v                            = func_0204cbb4(0, 0x100) << 12;
                ((Vec *) &fa[8])->x          = v;
                ((Vec *) &fb[8])->x          = v;
                *(s32 *) (*(u8 **) e + 0x50) = v;
                v                            = func_0204cbb4(-16, 16) << 12;
                ((Vec *) &fa[9])->x          = v;
                ((Vec *) &fb[9])->x          = v;
                *(s32 *) (*(u8 **) e + 0x54) = v;
                w                            = 0;
                ((Vec *) &fa[10])->x         = w;
                ((Vec *) &fb[10])->x         = w;
                o                            = *(void **) e;
                if (*(s32 *) ((u8 *) o + 0x54) < ((Vec *) &fa[10])->x) {
                    v                          = 0x10000;
                    ((Vec *) &fa[11])->x       = v;
                    ((Vec *) &fb[11])->x       = v;
                    *(s32 *) ((u8 *) o + 0x54) = *(s32 *) ((u8 *) o + 0x54) - 0x10000;
                } else {
                    v                          = 0xd0000;
                    ((Vec *) &fa[12])->x       = v;
                    ((Vec *) &fb[12])->x       = v;
                    *(s32 *) ((u8 *) o + 0x54) = *(s32 *) ((u8 *) o + 0x54) + 0xd0000;
                }
            }
            func_ov000_0214aab8(arg0, i);
            return i & 0xff;
        }
        q += 0x18;
    }
    return 8;
}
