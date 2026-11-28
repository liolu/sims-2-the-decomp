/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
} V2;

void func_02017e60(void *arg0, u8 arg1, V2 a0, V2 b0) {
    u8 *o = (u8 *) arg0;
    s32 t;
    s32 bx;
    s32 ax;
    volatile V2 l1;
    volatile V2 l2;
    volatile V2 l3;
    volatile V2 l4;

    *(volatile u8 *) (o + 0xA8) = arg1;
    if (*(volatile u8 *) (o + 0xA8) & 1) {
        if (((volatile V2 *) &a0)->y < ((volatile V2 *) &b0)->y) {
            t                   = ((volatile V2 *) &a0)->x;
            l1.x                = t;
            *(s32 *) (o + 0x94) = t;
            *(s32 *) (o + 0x98) = ((volatile V2 *) &b0)->x;
            t                   = ((volatile V2 *) &a0)->y;
            l1.y                = t;
            *(s32 *) (o + 0x9C) = t;
            *(s32 *) (o + 0xA0) = ((volatile V2 *) &b0)->y;
            return;
        } else {
            *(s32 *) (o + 0x94) = ((volatile V2 *) &b0)->x;
            t                   = ((volatile V2 *) &a0)->x;
            l2.x                = t;
            *(s32 *) (o + 0x98) = t;
            *(s32 *) (o + 0x9C) = ((volatile V2 *) &b0)->y;
            t                   = ((volatile V2 *) &a0)->y;
            l2.y                = t;
            *(s32 *) (o + 0xA0) = t;
            return;
        }
    }
    ax = ((volatile V2 *) &a0)->x;
    bx = ((volatile V2 *) &b0)->x;
    if (ax < bx) {
        t                   = ((volatile V2 *) &a0)->x;
        l3.x                = t;
        *(s32 *) (o + 0x94) = t;
        *(s32 *) (o + 0x98) = ((volatile V2 *) &b0)->x;
        t                   = ((volatile V2 *) &a0)->y;
        l3.y                = t;
        *(s32 *) (o + 0x9C) = t;
        *(s32 *) (o + 0xA0) = ((volatile V2 *) &b0)->y;
        return;
    }
    *(s32 *) (o + 0x94) = bx;
    t                   = ((volatile V2 *) &a0)->x;
    l4.x                = t;
    *(s32 *) (o + 0x98) = t;
    *(s32 *) (o + 0x9C) = ((volatile V2 *) &b0)->y;
    t                   = ((volatile V2 *) &a0)->y;
    l4.y                = t;
    *(s32 *) (o + 0xA0) = t;
}
