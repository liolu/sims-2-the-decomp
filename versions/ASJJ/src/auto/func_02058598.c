/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02001914(void);
void func_02001944(s32);
void func_0203d0d8(s32);
void func_020579f4(void *);
void func_020583e8(void *);

typedef volatile u16 vu16;

typedef struct {
    u8 pad0[8];
    s32 state;
    u8 pad1[0x1c - 0xc];
    s32 x1c;
    u8 pad2[0x30 - 0x20];
    s32 x30;
    u8 pad3[0x54c - 0x34];
    s32 x54c;
    u8 pad4[0xd84 - 0x550];
    u16 xd84;
    u16 xd86;
    u8 pad5[0xda4 - 0xd88];
    u8 xda4;
} Obj;

void func_02058598(Obj *o) {
    s32 st = o->state;
    if (st < 1) {
        return;
    }
    if (st == 5) {
        return;
    }
    if (st == 1 && o->x1c == 0) {
        return;
    }
    if (st == 4) {
        func_020583e8(o);
        return;
    }
    *(vu16 *) 0x04001048 = o->xd84;
    *(vu16 *) 0x0400104A = o->xd86;
    if (o->x30 != 0) {
        o->x30--;
    }
    func_02001944(1);
    func_020579f4(o);
    func_0203d0d8(0);
    if (o->xda4 != 0) {
        *(vu16 *) 0x04001054 = o->x54c;
    }
    func_02001914();
}
