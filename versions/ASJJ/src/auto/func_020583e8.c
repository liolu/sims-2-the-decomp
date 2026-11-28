/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} U16One;

void func_02001944(s32);                            /* extern */
void func_0203f220(void *, s32, s32);               /* extern */
u16 func_0203d164(s32);                             /* extern */
void func_0203d190(s32, U16One);                    /* extern */
void func_0203c3d8(s32, s32, s32);                  /* extern */
void func_0203d0ac(s32);                            /* extern */
void func_0203d0d8(s32);                            /* extern */
void *func_02045630(s32);                           /* extern */
void func_0205049c(void);                           /* extern */
void func_0205032c(void);                           /* extern */
void func_02001914(void);                           /* extern */
s32 func_0200fb30(s32, s32, s32);                   /* extern */
extern s32 data_027e0000;
extern u8 data_027e0014;
extern void *data_0213e0a8;

void func_020583e8(void *arg0) {
    u8 *p;
    u16 sp0;
    void *var_r0;
    void *obj;
    u8 *gp;
    s32 t;

    p = (u8 *) arg0;
    func_02001944(1);
    *(s32 *) (p + 0x8)  = 0;
    *(s32 *) (p + 0x1C) = 0;
    *(s32 *) (p + 0x20) = 0;
    *(s8 *) (p + 0x19)  = 1;
    if (p[0xDA5] != 0) {
        func_0203f220(p + 0xD58, *(s32 *) (p + 0xDA0) * 0x10, 0x10);
    }
    sp0 = func_0203d164(*(s32 *) (p + 0xD90));
    func_0203d190(0, *(U16One *) &sp0);
    func_0203c3d8(0, *(s32 *) (p + 0xD78), *(s32 *) (p + 0xD7C));
    func_0203d0ac(*(s32 *) (p + 0xD90));
    if (p[0x1A] != 0) {
        func_0203d0d8(0);
    } else {
        func_0203d0ac(0);
    }
    *(volatile s16 *) 0x04001010 = (s16) (*(s32 *) (p + 0xD78) >> 16);
    *(volatile s16 *) 0x04001012 = (s16) (*(s32 *) (p + 0xD7C) >> 16);
    if (p[0xDA4] != 0) {
        *(volatile s16 *) 0x04001050 = 0;
    }
    var_r0 = func_02045630((data_027e0000 * 0x34) + (s32) &data_027e0014);
    if (var_r0 != NULL) {
        do {
            obj                       = *(void **) var_r0;
            *(s32 *) ((u8 *) obj + 4) = *(s32 *) ((u8 *) obj + 4) & ~0x02000000;
            var_r0                    = *(void **) ((u8 *) var_r0 + 4);
        } while (var_r0 != NULL);
    }
    func_0205049c();
    func_0205032c();
    func_02001914();
    *(volatile u16 *) 0x04001048 = *(u16 *) (p + 0xD80);
    *(volatile u16 *) 0x0400104A = *(u16 *) (p + 0xD82);
    t                            = *(s32 *) ((u8 *) data_0213e0a8 + 0xF8);
    if (t != 0) {
        func_0200fb30(t, 0, 0);
    }
    if (p[0x18] != 0) {
        *(s32 *) (p + 0x8) = 5;
    }
}
