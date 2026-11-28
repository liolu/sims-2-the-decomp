/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} U16One;
typedef struct {
    u16 a, b;
} U16Pair;
typedef struct {
    u8 a, b, c, d;
} U8Quad;

extern s32 func_0203ba14(s32, void *);
extern s32 func_0203ba54(s32, void *);
extern s32 func_0203cf6c(s32);
extern s32 func_0203d054();
extern u16 func_0203d164(void *);
extern s32 func_0203d314(void *);
extern U16Pair func_0203ded0(U16One, void *, void *, void *, s32, s32, s32, U16Pair, U8Quad, s32);

U16Pair func_0203e270(void *arg0, void *arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5, U16Pair arg6, U8Quad arg7, s32 arg8) {
    s32 flags;
    s32 t;
    U16One one;
    U16Pair p;
    U16Pair q;
    volatile U16Pair r;

    flags = arg8;
    if (func_0203ba54(func_0203d054(), arg0) != 0) {
        flags |= 0x80;
    } else if (func_0203ba14(func_0203d054(), arg0) != 0) {
        flags |= 0x10;
    }
    if (func_0203d314(arg0) != 0) {
        flags |= 0x20;
        t = flags & 0x10;
        if (t == 0 && func_0203cf6c(t) != 0) {
            flags |= 0x40;
        }
    }
    one.v = func_0203d164(arg0);
    r     = func_0203ded0(one, arg1, arg2, arg0, arg3, arg4, arg5, arg6, arg7, flags);
    p     = r;
    q     = p;
    return q;
}
