/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct V2 {
    s32 x;
    s32 y;
} V2;
void func_0203cb90(s32, s32);
u8 *func_0208af70(s32);
u8 *func_020521e0(s32);
void func_020512c0(s32, s32, s32, u8 *, s32);
extern s32 data_02122810[];
void func_02089134(u8 *o) {
    volatile V2 t;
    u8 *p;
    u16 idx;
    V2 *src;
    V2 *dst;
    s32 v;
    idx = *(u16 *) (o + 0xa);
    p   = *(u8 **) (o + 0x90);
    func_0203cb90(2, 0);
    func_020512c0(1, 0x6b, 0x13, func_020521e0(*(u16 *) (func_0208af70(data_02122810[idx]) + 8)), 1);
    *(s32 *) (p + 0x6c) = idx;
    src                 = (V2 *) (*(u8 **) (p + 0x24 + idx * 4) + 0x50);
    dst                 = (V2 *) (*(u8 **) (p + 0x60) + 0x50);
    v                   = src->x;
    t.x                 = v;
    dst->x              = v;
    v                   = src->y;
    t.y                 = v;
    dst->y              = v;
}
