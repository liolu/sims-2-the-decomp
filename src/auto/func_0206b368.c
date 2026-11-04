/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02067698(s32, u16, u16);
void func_02069d28(void *);
void func_0206a0b4(void *);
void func_0206a288(void *);
void func_0206a448(void *);
void func_0206a564(void *);
void func_0206b118(void *, s32, s32);
extern void *data_02139fa4;

void func_0206b368(void *arg0) {
    u8 flag;
    void *g;
    void *p;
    void *t;
    void *r;
    void *(*fn)(void *);
    s32 (*fn2)(void *);

    if (*((u8 *) arg0 + 0x31D) != 0) {
        *((u8 *) arg0 + 0x31D) = 0;
        g                      = data_02139fa4;
        if (*(s32 *) ((u8 *) g + 8) == 0) {
            p = *(void **) ((u8 *) arg0 + 0x300);
            if (p == NULL || (t = *(void **) (*(u8 **) p + 0x130)) == NULL || *(s32 *) ((u8 *) p + 4) == 2) {
                func_02067698(*(s32 *) ((u8 *) arg0 + 0xC), 0xFFFF, 0xFFFF);
            } else {
                fn = *(void *(**) (void *) )(*(u8 **) t + 0x1C);
                r  = fn(t);
                func_02067698(*(s32 *) ((u8 *) arg0 + 0xC), *(u16 *) ((u8 *) r + 0xA), *(u16 *) ((u8 *) r + 0xC));
            }
            func_0206a288(arg0);
            func_0206a448(arg0);
        } else {
            *((u8 *) arg0 + 0x31D) = 1;
        }
    }
    g                  = data_02139fa4;
    flag               = *((u8 *) g + 0x19);
    *((u8 *) g + 0x19) = 0;
    if (flag != 0) {
        t = *(void **) ((u8 *) g + 0x14);
        if (t != NULL) {
            p = *(void **) ((u8 *) arg0 + 0x300);
            if (p != NULL && *(void **) (*(u8 **) p + 0x130) == t && *(s32 *) ((u8 *) p + 4) != 2) {
                fn2 = *(s32(**)(void *))(*(u8 **) t + 0x18);
                func_0206b118(arg0, fn2(t), 0);
            }
        }
    }
    func_02069d28(arg0);
    func_0206a564(arg0);
    p = *(void **) ((u8 *) arg0 + 0x300);
    if (*(void **) ((u8 *) arg0 + 0x304) != p) {
        g = data_02139fa4;
        if (*(s32 *) ((u8 *) g + 8) == 0) {
            if (p == NULL || (t = *(void **) (*(u8 **) p + 0x130)) == NULL || *(s32 *) ((u8 *) p + 4) == 2) {
                func_02067698(*(s32 *) ((u8 *) arg0 + 0xC), 0xFFFF, 0xFFFF);
            } else {
                fn = *(void *(**) (void *) )(*(u8 **) t + 0x1C);
                r  = fn(t);
                func_02067698(*(s32 *) ((u8 *) arg0 + 0xC), *(u16 *) ((u8 *) r + 0xA), *(u16 *) ((u8 *) r + 0xC));
            }
            func_0206a288(arg0);
            func_0206a448(arg0);
        } else {
            *((u8 *) arg0 + 0x31D) = 1;
        }
    }
    func_0206a0b4(arg0);
}
