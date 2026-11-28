/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0202755c(void *);
void func_020117e8(void *, s32, void *, s32);
void *func_02014ea4(void *, void *);
void func_0201a48c(void *);
void func_0201d10c(void *);
void func_02019ccc(void *);
void func_02018ac4(void *);
extern void *data_0213e0a8;
extern void *data_0213df5c;

void func_02091400(void *arg0, s32 arg1) {
    u8 fr[0x100];
    void *r4;
    void *p;
    u8 *q;
    s32 *pp;
    s32 a;
    u32 *w;

    r4 = *(void **) ((u8 *) data_0213e0a8 + 0xF8);
    func_0202755c(fr + 0x2C);
    *(s32 *) (fr + 0x4C) = 0;
    *(s32 *) (fr + 0x40) = 0;
    *(s32 *) (fr + 0x44) = 0;
    *(s32 *) (fr + 0x3C) = 2;
    *(s32 *) (fr + 0x54) = 1;
    *(s32 *) (fr + 0x50) = 0xC;
    *(s32 *) (fr + 0x58) = 4;
    if (arg1 == 0xD) {
        *(s32 *) (fr + 0x4C) = 2;
    }
    *(s32 *) (fr + 0x48) = arg1;
    func_020117e8(r4, 0x37, fr + 0x2C, 0);
    func_0201a48c(fr + 0x64);
    *(s32 *) (fr + 0x00) = 0x3000;
    *(s32 *) (fr + 0x04) = 0x3000;
    *(s32 *) (fr + 0x80) = 0x3000;
    p                    = func_02014ea4(*(void **) ((u8 *) arg0 + 4), (u8 *) r4 + 0x78);
    if (p != NULL) {
        pp                   = (s32 *) p;
        a                    = pp[1];
        *(s32 *) (fr + 0x08) = a;
        *(s32 *) (fr + 0x74) = a;
        a                    = pp[2];
        *(s32 *) (fr + 0x0C) = a;
        *(s32 *) (fr + 0x78) = a;
        a                    = pp[3];
        *(s32 *) (fr + 0x10) = a;
        *(s32 *) (fr + 0x7C) = a;
    } else {
        q                    = (u8 *) *(void **) ((u8 *) arg0 + 4) + 0x78;
        a                    = *(s32 *) q;
        *(s32 *) (fr + 0x14) = a;
        *(s32 *) (fr + 0x74) = a;
        a                    = *(s32 *) (q + 4);
        *(s32 *) (fr + 0x18) = a;
        *(s32 *) (fr + 0x78) = a;
        a                    = *(s32 *) (q + 8);
        *(s32 *) (fr + 0x1C) = a;
        *(s32 *) (fr + 0x7C) = a;
    }
    func_020117e8(r4, 6, fr + 0x64, 0);
    func_0201d10c(fr + 0x90);
    *(u16 *) (fr + 0xC0) = 0x87;
    *(s32 *) (fr + 0xB0) = *(s32 *) ((u8 *) arg0 + 4);
    *(s32 *) (fr + 0xA0) = 0x4F;
    *(u8 *) (fr + 0xC3)  = 0;
    func_020117e8(r4, 3, fr + 0x90, 0);
    func_02019ccc(fr + 0xCC);
    p                    = *(void **) ((u8 *) arg0 + 4);
    q                    = (u8 *) p + 0x78;
    a                    = *(s32 *) q;
    *(s32 *) (fr + 0x20) = a;
    *(s32 *) (fr + 0xDC) = a;
    a                    = *(s32 *) (q + 4);
    *(s32 *) (fr + 0x24) = a;
    *(s32 *) (fr + 0xE0) = a;
    a                    = *(s32 *) (q + 8);
    *(s32 *) (fr + 0x28) = a;
    *(s32 *) (fr + 0xE4) = a;
    func_020117e8(r4, 0x10, fr + 0xCC, 0);
    w  = (u32 *) data_0213df5c;
    *w = *w | 0x80000;
    func_02018ac4(fr + 0xCC);
    func_02018ac4(fr + 0x90);
    func_02018ac4(fr + 0x64);
    func_02018ac4(fr + 0x2C);
}
