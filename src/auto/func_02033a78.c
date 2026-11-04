/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020276c8(void *);                         /* extern */
void func_020117e8(s32, s32, void *, void *);      /* extern */
void func_02026be8(void *);                         /* extern */
void func_0201d124(void *);                         /* extern */
void func_02019cdc(void *);                         /* extern */
void func_0201ca08(void *);                         /* extern */
void *func_02014eac(void *, s32);                   /* extern */
void func_02018acc(void *);                         /* extern */

s32 func_02033a78(void *arg0, void *arg1) {
    u8 fr[0x104];
    void *r;
    s32 t;
    u8 *q;

    func_020276c8(fr + 0x2C);
    *(void **) (fr + 0x3C) = arg1;
    *(u16 *) (fr + 0x40)   = 0;
    func_020117e8(*(s32 *) ((u8 *) arg0 + 4), 0x21, fr + 0x2C, arg0);
    func_02026be8(fr + 0x48);
    *(s32 *) (fr + 0x58) = 0;
    func_020117e8(*(s32 *) ((u8 *) arg0 + 4), 0x26, fr + 0x48, arg0);
    func_0201d124(fr + 0x64);
    *(u16 *) (fr + 0x94) = 0x52;
    func_020117e8(*(s32 *) ((u8 *) arg0 + 4), 3, fr + 0x64, arg0);
    func_02019cdc(fr + 0xA0);
    q                    = (u8 *) arg1 + 0x78;
    t                    = *(s32 *) q;
    *(s32 *) (fr + 0x8)  = t;
    *(s32 *) (fr + 0xB0) = t;
    t                    = *(s32 *) (q + 4);
    *(s32 *) (fr + 0xC)  = t;
    *(s32 *) (fr + 0xB4) = t;
    t                    = *(s32 *) (q + 8);
    *(s32 *) (fr + 0x10) = t;
    *(s32 *) (fr + 0xB8) = t;
    *(u16 *) (fr + 0xBC) = 7;
    func_020117e8(*(s32 *) ((u8 *) arg0 + 4), 0x10, fr + 0xA0, 0);
    func_0201ca08(fr + 0xD0);
    r = func_02014eac(arg1, *(s32 *) ((u8 *) arg0 + 4) + 0x78);
    if (r != NULL) {
        t                    = *(s32 *) ((u8 *) r + 4);
        *(s32 *) (fr + 0x14) = t;
        *(s32 *) (fr + 0xE0) = t;
        t                    = *(s32 *) ((u8 *) r + 8);
        *(s32 *) (fr + 0x18) = t;
        *(s32 *) (fr + 0xE4) = t;
        t                    = *(s32 *) ((u8 *) r + 0xC);
        *(s32 *) (fr + 0x1C) = t;
        *(s32 *) (fr + 0xE8) = t;
    } else {
        q                    = (u8 *) arg1 + 0x78;
        t                    = *(s32 *) q;
        *(s32 *) (fr + 0x20) = t;
        *(s32 *) (fr + 0xE0) = t;
        t                    = *(s32 *) (q + 4);
        *(s32 *) (fr + 0x24) = t;
        *(s32 *) (fr + 0xE4) = t;
        t                    = *(s32 *) (q + 8);
        *(s32 *) (fr + 0x28) = t;
        *(s32 *) (fr + 0xE8) = t;
    }
    *(s32 *) (fr + 0x0)  = 0xA000;
    *(s32 *) (fr + 0x4)  = 0xA000;
    *(s32 *) (fr + 0xF4) = 0xA000;
    func_020117e8(*(s32 *) ((u8 *) arg0 + 4), 0x1B, fr + 0xD0, 0);
    func_02018acc(fr + 0xD0);
    func_02018acc(fr + 0xA0);
    func_02018acc(fr + 0x64);
    func_02018acc(fr + 0x48);
    func_02018acc(fr + 0x2C);
    return 2;
}
