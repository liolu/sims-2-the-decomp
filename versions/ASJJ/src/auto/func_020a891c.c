/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 x, y;
} P2;
typedef struct {
    P2 p[16];
} T32;

void func_020d3cd0(s32 a, u8 b);

void func_020a891c(u8 *arg0, s32 arg1) {
    u8 *p;

    if (arg1 != 0) {
        *(s32 *) (arg0 + 0x950) = *(s32 *) (arg0 + 0x94C);
        *(s32 *) (arg0 + 0x958) = *(s32 *) (arg0 + 0x954);
        if (*(u16 *) (arg0 + 0xA4C) != 0) {
            *(u16 *) (arg0 + 0x8E0) = *(u16 *) (arg0 + 0x90E);
            *(u8 *) (arg0 + 0x8E2)  = *(u8 *) (arg0 + 0x910);
            *(P2 *) (arg0 + 0x8E3)  = *(P2 *) (arg0 + 0x911);
            *(u8 *) (arg0 + 0x8E5)  = *(u8 *) (arg0 + 0x913);
            *(s8 *) (arg0 + 0x8E6)  = *(s8 *) (arg0 + 0x914);
            *(u8 *) (arg0 + 0x8E7)  = *(u8 *) (arg0 + 0x915);
            *(u8 *) (arg0 + 0x8E8)  = *(u8 *) (arg0 + 0x916);
            *(u8 *) (arg0 + 0x8E9)  = *(u8 *) (arg0 + 0x917);
            *(u8 *) (arg0 + 0x8EA)  = *(u8 *) (arg0 + 0x918);
            *(u8 *) (arg0 + 0x8EB)  = *(u8 *) (arg0 + 0x919);
            *(u8 *) (arg0 + 0x8EC)  = *(u8 *) (arg0 + 0x91A);
            *(u8 *) (arg0 + 0x8ED)  = *(u8 *) (arg0 + 0x91B);
            *(T32 *) (arg0 + 0x8EE) = *(T32 *) (arg0 + 0x91C);
            func_020d3cd0(0, *(u8 *) (arg0 + 0x8EC));
        }
        if (*(s32 *) (arg0 + 8) == 1) {
            p                   = *(u8 **) (arg0 + 0x99C);
            *(s32 *) (p + 0x14) = *(s32 *) (*(u8 **) (arg0 + 0x9A8) + 0x10);
        } else {
            p                   = *(u8 **) (arg0 + 0x99C);
            *(s32 *) (p + 0x14) = ((s32 *) *(u8 **) (arg0 + 0x9A8))[*(u8 *) (arg0 + 0x8ED) << 1];
        }
        p                       = *(u8 *volatile *) (arg0 + 0x99C);
        *(u16 *) (arg0 + 0x8E0) = (u16) (**(u8 **) (p + 0x14) + 1);
        p                       = *(u8 *volatile *) (arg0 + 0x99C);
        *(u16 *) (p + 0x22)     = 0x100;
        p                       = *(u8 *volatile *) (arg0 + 0x99C);
        *(u8 **) (p + 0x14)     = *(u8 **) (p + 0x14) + 1;
        *(u8 *) (arg0 + 0xA52)  = *(u8 *) (arg0 + 0xA52) | 0x40;
    }
    *(u8 *) (arg0 + 0xA52) = *(u8 *) (arg0 + 0xA52) | 0x10;
}
