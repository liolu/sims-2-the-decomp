/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 a;
    u8 b;
    u8 c;
} W4;

typedef struct {
    u16 a;
    u8 b;
    u8 f0 : 1;
    u8 f1 : 1;
    u8 f2 : 1;
    u8 rest : 5;
} W4B;

void func_02048108();
s32 func_0204eca4();
void func_02050af0();
s32 func_02052258();
void func_02061aac();
s32 func_0207355c();
void func_020835f0();
void func_020d508c();
extern u8 *data_02139fa4;
extern u8 *data_0213e434;
extern u8 *data_0213e580;

void func_0207bb64(u8 *base) {
    s32 r6;
    u8 i;
    s32 found;
    s32 off;
    s32 k12;
    u16 *e;
    u16 v;
    W4 w1;
    W4B w2;
    u8 *o;
    s32 cnt;

    o   = *(u8 **) (data_02139fa4 + 0xDAC);
    cnt = o != 0 ? *(s32 *) (o + 4) : 0x32;
    if (cnt != 0xC) {
        return;
    }
    if (*(s32 *) (data_02139fa4 + 0xE10) != 0x32) {
        return;
    }
    i   = 0;
    r6  = 0;
    k12 = 12;
    do {
        off = i * k12;
        v   = *(u16 *) (base + off + 0xD00 + 0xC);
        if (v != 0) {
            e = (u16 *) (base + 0xD0C + off);
            if (v == 0x9EF && *(s32 *) (base + off + 0xD10) == 1) {
                if (func_0204eca4() == 0) {
                    func_020835f0(data_0213e434 + 0x18, *(s32 *) (data_0213e580 + 0xF8));
                    *(s8 *) (data_0213e434 + 0x50) = (s8) * (s32 *) (data_0213e580 + 0xF4);
                    func_020d508c();
                    o   = *(u8 **) (data_02139fa4 + 0xDA8);
                    cnt = o != 0 ? *(s32 *) (o + 4) : 0x32;
                    func_02048108(data_02139fa4, 0x26, 0, cnt, 0xC, 0);
                    func_02048108(data_02139fa4, 0x2B, 1, 0, 0x32, 0);
                    off   = 0;
                    found = 0x851;
                    do {
                        if (*(u8 *) (base + off * 0x4C + 0xA41) != 0 && *(s32 *) (base + off * 0x4C + 0xA38) == found) {
                            found = 1;
                            goto fnd;
                        }
                        off = (u8) (off + 1);
                    } while ((u32) off < 10);
                    found = 0;
                fnd:
                    if (found == 0) {
                        if (func_0207355c(data_0213e434 + 0x41F8, 2) != 0) {
                            func_02061aac(2);
                        }
                        if (func_0207355c(data_0213e434 + 0x41F8, 3) != 0) {
                            func_02061aac(3);
                        }
                        if (func_0207355c(data_0213e434 + 0x41F8, 5) != 0) {
                            func_02061aac(5);
                        }
                        if (func_0207355c(data_0213e434 + 0x41F8, 6) != 0) {
                            func_02061aac(6);
                        }
                        if (func_0207355c(data_0213e434 + 0x41F8, 9) != 0) {
                            func_02061aac(9);
                        }
                        if (func_0207355c(data_0213e434 + 0x41F8, 0xD) != 0) {
                            func_02061aac(0xD);
                        }
                        if (func_0207355c(data_0213e434 + 0x41F8, 0x11) != 0) {
                            func_02061aac(0x11);
                        }
                        if (func_0207355c(data_0213e434 + 0x41F8, 0x13) != 0) {
                            func_02061aac(0x13);
                        }
                        if (func_0207355c(data_0213e434 + 0x41F8, 0x18) != 0) {
                            func_02061aac(0x18);
                        }
                    }
                } else {
                    r6 = 1;
                }
            } else {
                func_02050af0(func_02052258(*(s32 *) (base + 0xD10 + i * k12) + 0x143), 1);
                func_02050af0(func_02052258(*(u8 *) (base + 0xD14 + i * k12) + 0x80), 2);
                w2.b  = 0x2D;
                w2.a  = 0x58;
                w2.f0 = 1;
                w2.f1 = 0;
                w2.f2 = 1;
                w1.a  = *e;
                w1.b  = 0;
                w1.c  = 0;
                func_02048108(data_02139fa4, 0xE, 1, *(s32 *) (data_0213e580 + 0xF8), *(s32 *) &w1, *(s32 *) &w2);
            }
            if (r6 == 0) {
                *e = 0;
            }
            return;
        }
        i = i + 1;
    } while (i < 10);
}
