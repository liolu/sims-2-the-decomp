/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a, b, c, d;
} S16;
typedef struct {
    u8 a, b, c, d;
} B4;

extern s32 data_0213e2f4;

void func_020d512c(s32 a);
void func_020a7dc4(s32 a);
void func_020d5880(s32 a);

void func_0205deb4(u8 *arg0) {
    s32 i;
    s32 off;
    u8 *lr;
    u8 *ip;
    u8 *q;
    s32 t;

    if (arg0[0x18e] != 0) {
        *(s16 *) (arg0 + 2) = *(s16 *) (arg0 + 2) - 1;
        if (*(s16 *) (arg0 + 2) > 0) {
            return;
        }
        *(s16 *) (arg0 + 2) = 100;
        q                   = (u8 *) data_0213e2f4;
        if ((*(s32 *) q & 0x20) == 0) {
            if (arg0[0x195] < 4) {
                func_020d512c(arg0[0x195] + 0x19);
            } else {
                t = arg0[0x195] - 4;
                q = q + (t << 6);
                q = q + 0x4000;
                if (q[0x6eb] != 0) {
                    func_020a7dc4(t);
                    *(s16 *) (arg0 + 2) = 200;
                } else {
                    arg0[0x195] = 0;
                    func_020d512c(arg0[0x195] + 0x19);
                }
            }
        }
        arg0[0x194] = arg0[0x194] + 1;
        if (arg0[0x194] < 5) {
            return;
        }
        if (arg0[0x18e] != 0) {
            i = 0;
            while ((u32) i < 0xa) {
                off = i * 0x24;
                lr  = arg0 + off;
                if (lr[0x26] == 0) {
                    ip                        = arg0 + 8 + off;
                    *(s32 *) (arg0 + 8 + off) = *(s32 *) (arg0 + 0x170);
                    *(S16 *) (ip + 4)         = *(S16 *) (arg0 + 0x174);
                    *(B4 *) (ip + 0x14)       = *(B4 *) (arg0 + 0x184);
                    *(s32 *) (ip + 0x18)      = *(s32 *) (arg0 + 0x188);
                    *(u16 *) (ip + 0x1c)      = *(u16 *) ((arg0 + 0x100) + 0x8c);
                    ip[0x1e]                  = arg0[0x18e];
                    ip[0x1f]                  = arg0[0x18f];
                    *(s32 *) (ip + 0x20)      = *(s32 *) (arg0 + 0x190);
                    lr[0x27]                  = 0;
                    arg0[0]                   = 1;
                    arg0[0x194]               = 0;
                    break;
                }
                i = (u8) (i + 1);
            }
        }
        arg0[0x18e] = 0;
        return;
    }
    if (arg0[0] == 0) {
        return;
    }
    *(s16 *) (arg0 + 2) = *(s16 *) (arg0 + 2) - 1;
    if (*(s16 *) (arg0 + 2) > 0) {
        return;
    }
    *(s16 *) (arg0 + 2) = 0x19;
    arg0[0x194]         = arg0[0x194] + 1;
    q                   = (u8 *) data_0213e2f4;
    if ((*(s32 *) q & 0x20) == 0) {
        func_020d5880(0xc7);
    }
    if (arg0[0x194] >= 5) {
        arg0[0] = 0;
    }
}
