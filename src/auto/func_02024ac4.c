/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_01ffac40(void *, void *);
extern void func_020117e8(void *, s32, void *, void *);
extern void func_02026be8(void *);
extern void func_0201a49c(void *);
extern void *func_02014eac(void *, void *);
extern void func_020276c8(void *);
extern void func_0201d124(void *);
extern void func_02019cdc(void *);
extern void func_02018acc(void *);

typedef struct {
    s32 a, b, c;
} T78;

s32 func_02024ac4(void *arg0, void *arg1) {
    T78 *p;
    u8 fr[0x10c];
    void *r;
    void *tp;
    s32 w;
    s32 r2v;
    s32 r3v;
    s32 r5v;
    u8 *r5p;

    if (*(u8 *) ((u8 *) arg0 + 0x46) == 0) {
        *(u8 *) ((u8 *) arg0 + 0x36) = 1;
        func_01ffac40((u8 *) *(void **) ((u8 *) arg0 + 4) + 0xE0, arg0);
        *(u8 *) ((u8 *) arg0 + 0x44) = 1;
        func_02026be8(fr + 0x20);
        *(s32 *) (fr + 0x30) = 0;
        func_020117e8(arg1, 0x26, fr + 0x20, arg0);
        func_0201a49c(fr + 0x3c);
        *(s32 *) (fr + 0x0)  = 0x3000;
        *(s32 *) (fr + 0x4)  = 0x3000;
        *(s32 *) (fr + 0x58) = 0x3000;
        r                    = func_02014eac(*(void **) ((u8 *) arg0 + 4), (u8 *) arg1 + 0x78);
        if (r != NULL) {
            w                    = *(s32 *) ((u8 *) r + 4);
            *(s32 *) (fr + 0x8)  = w;
            *(s32 *) (fr + 0x4C) = w;
            w                    = *(s32 *) ((u8 *) r + 8);
            *(s32 *) (fr + 0xC)  = w;
            *(s32 *) (fr + 0x50) = w;
            w                    = *(s32 *) ((u8 *) r + 0xC);
            *(s32 *) (fr + 0x10) = w;
            *(s32 *) (fr + 0x54) = w;
            if (*(s16 *) ((u8 *) r + 0x10) == 2) {
                *(u8 *) ((u8 *) arg0 + 0x44) = 0;
            }
        }
        func_020276c8(fr + 0x68);
        *(void **) (fr + 0x78) = *(void **) ((u8 *) arg0 + 4);
        *(u16 *) (fr + 0x7C)   = 0x5B;
        func_020117e8(arg1, 0x21, fr + 0x68, 0);
        func_0201d124(fr + 0x84);
        *(u16 *) (fr + 0xB4) = 0x15;
        *(s32 *) (fr + 0xA4) = 0;
        func_020117e8(arg1, 3, fr + 0x84, 0);
        func_02019cdc(fr + 0xC0);
        tp                   = *(void **) ((u8 *) arg0 + 4);
        p                    = (T78 *) ((u8 *) tp + 0x78);
        r2v                  = p->a;
        *(s32 *) (fr + 0x14) = r2v;
        *(s32 *) (fr + 0xD0) = r2v;
        r3v                  = p->b;
        *(s32 *) (fr + 0x18) = r3v;
        *(s32 *) (fr + 0xD4) = r3v;
        r5v                  = p->c;
        *(s32 *) (fr + 0x1C) = r5v;
        *(s32 *) (fr + 0xD8) = r5v;
        func_020117e8(arg1, 0x10, fr + 0xC0, 0);
        func_020117e8(arg1, 6, fr + 0x3C, 0);
        func_02018acc(fr + 0xC0);
        func_02018acc(fr + 0x84);
        func_02018acc(fr + 0x68);
        func_02018acc(fr + 0x3C);
        func_02018acc(fr + 0x20);
    } else {
        func_02026be8(fr + 0xF0);
        *(s32 *) (fr + 0x100) = 0;
        func_020117e8(arg1, 0x26, fr + 0xF0, arg0);
        func_02018acc(fr + 0xF0);
    }
    return 0;
}
