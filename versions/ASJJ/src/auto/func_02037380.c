/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0211df50;
extern u8 data_0211df78;
extern u8 data_0213e0a8;
extern void func_0201d10c(void *p);
extern void func_020117e8(u8 *o, s32 a, void *p, s32 b);
extern void func_020117d0(u8 *o, s32 a);
extern void func_0201dcd8(void *p);
extern void func_020269fc(void *p);
extern u8 *func_020468a0(s32 size, s32 zero, s32 align);
extern u8 *func_02014c28(u8 *o, s32 a);
extern s32 func_0200e1ac(s32 a, s32 b);
extern void func_02001944(s32 a);
extern void func_02001914(void);
extern void func_02018ac4(void *p);

void func_02037380(u8 *arg0) {
    u8 fr[0xc4];
    u8 *r4;
    u8 *obj;
    u8 *o2;
    s32 ne;
    s32 t;
    s32 v;

    func_0201d10c(fr + 0x18);
    *(u16 *) (fr + 0x48) = *(u16 *) (&data_0211df50 + (*(s32 *) (arg0 + 0x28) << 1));
    t                    = *(s32 *) (&data_0211df78 + (*(s32 *) (arg0 + 0x28) << 2));
    if (t != 0) {
        *(s32 *) (fr + 0x28) = func_0200e1ac(*(s32 *) (*(u8 **) &data_0213e0a8 + 0xf8), t);
    }
    if (*(u16 *) (fr + 0x48) != 0x135) {
        func_020117e8(*(u8 **) (arg0 + 0x4), 3, fr + 0x18, 0);
    }
    if (*(u16 *) (fr + 0x48) == 0x67) {
        func_02001944(0);
        func_0201dcd8(fr + 0x54);
        func_020269fc(fr + 0x78);
        r4 = func_020468a0(0x214, 0, 4);
        if (r4 != 0) {
            r4 = func_02014c28(r4, 0x101);
        }
        *(u8 *) (fr + 0x74)  = 1;
        *(s32 *) (fr + 0x70) = 8;
        *(u16 *) (fr + 0x94) = 0x1e;
        obj                  = *(u8 **) (arg0 + 0x4);
        o2                   = obj + 0x78;
        v                    = *(s32 *) (r4 + 0x78);
        *(s32 *) (fr + 0x0)  = v;
        if (*(s32 *) (obj + 0x78) != v) {
            goto L1;
        }
        v                   = *(s32 *) (r4 + 0x7c);
        *(s32 *) (fr + 0x4) = v;
        if (*(s32 *) (o2 + 4) != v) {
            goto L1;
        }
        v                   = *(s32 *) (r4 + 0x80);
        *(s32 *) (fr + 0x8) = v;
        if (*(s32 *) (o2 + 8) == v) {
            goto L3;
        }
    L1:
        ne = 1;
        goto L2;
    L3:
        ne = 0;
    L2:
        if (ne != 0) {
            v                    = *(s32 *) o2;
            *(s32 *) (fr + 0xc)  = v;
            *(s32 *) (r4 + 0x78) = v;
            v                    = *(s32 *) (o2 + 4);
            *(s32 *) (fr + 0x10) = v;
            *(s32 *) (r4 + 0x7c) = v;
            v                    = *(s32 *) (o2 + 8);
            *(s32 *) (fr + 0x14) = v;
            *(s32 *) (r4 + 0x80) = v;
            *(u8 *) (r4 + 0xdc)  = 1;
        }
        *(u32 *) (r4 + 0x4) = *(u32 *) (r4 + 0x4) & ~1;
        func_020117d0(r4, 1);
        func_020117e8(r4, 0x46, fr + 0x54, 0);
        func_020117e8(r4, 8, fr + 0x78, 0);
        func_02001914();
        func_02018ac4(fr + 0x78);
        func_02018ac4(fr + 0x54);
    }
    func_02018ac4(fr + 0x18);
}
