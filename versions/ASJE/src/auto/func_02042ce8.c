/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v;
} W;

void func_020431b8(void **, void *, void *);
u32 func_02043280(void *, W);
void func_02046424(s32);
void func_020467cc(void *);

void func_02042ce8(void *arg0, s32 arg1, ...) {
    u8 *sp0;
    W sp4;
    u8 *o;
    u8 *b;
    u8 *c;
    s32 t;

    func_020431b8((void **) &sp0, arg0, &arg1);
    o = sp0;
    if (((u32) (*(s32 *) (*(u8 **) (o + 0x10) + 8) << 9) >> 0x19) == 0) {
        return;
    }
    b                = o + 0xc;
    c                = *(u8 **) (b + 4);
    t                = *(s32 *) (c + 8);
    *(s32 *) (c + 8) = (t & ~0x7F0000) | (((((u32) (t << 9) >> 0x19) - 1) & 0x7F) << 0x10);
    if (((u32) (*(s32 *) (*(u8 **) (b + 4) + 8) << 9) >> 0x19) != 0) {
        return;
    }
    func_02046424(**(s32 **) (o + 0x10));
    func_020467cc(*(u8 **) (o + 0x10));
    sp4.v = (s32) o;
    func_02043280(arg0, sp4);
}
