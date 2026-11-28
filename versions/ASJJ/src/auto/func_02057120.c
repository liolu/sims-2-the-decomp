/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213df5c[];
extern u8 data_02131830[];
extern u8 data_0211e360[];

typedef struct {
    s32 v;
} W;
typedef enum {
    K1 = 0x10000
} E1;
typedef enum {
    K2 = 0x72000
} E2;
typedef enum {
    K3 = 0xd4000
} E3;
typedef enum {
    K4 = 0x54000
} E4;

void *func_020468a0(s32, s32, s32);
void func_020181b8(void *, s32);
void func_02016700(void *, void *);
void func_020165b4(void *, s32);
void func_02017378(void *, W, W, W, s32);
void func_02017e60(void *, s32, W, W, s32, s32);
void func_02017d90(void *, W);

void func_02057120(u8 *arg0) {
    s32 p[4];
    s32 q[4];
    u8 *r4;
    u8 *r6;
    u32 x;
    E1 a;
    E3 b;
    E2 c;
    E4 d;
    s32 nb;

    r4 = (u8 *) func_020468a0(0xb4, 0, 4);
    if (r4 != 0) {
        r6 = *(u8 **) data_0213df5c + 0x2f7c;
        func_020181b8(r4, 0);
        *(u8 **) r4          = data_02131830;
        *(u8 **) (r4 + 0xac) = r6;
        r4[0xb0]             = 0;
        x                    = *(u32 *) (r4 + 0x14);
        x                    = (x & ~0xf000) | 0x3000;
        *(u32 *) (r4 + 0x14) = x;
        x                    = *(u32 *) (r4 + 0x14);
        x                    = (x & ~0xc00) | 0x400;
        *(u32 *) (r4 + 0x14) = x;
        x                    = *(u32 *) (r4 + 0x10);
        x                    = x & ~0xc00;
        *(u32 *) (r4 + 0x10) = x;
        func_02016700(r4, data_0211e360);
        *(u16 *) (r4 + 0x24) = 0xffff;
        x                    = *(u32 *) (r4 + 4);
        *(u32 *) (r4 + 4)    = x | 1;
        func_020165b4(r4, 0);
        a    = K1;
        nb   = -a;
        q[3] = a;
        q[2] = a;
        q[1] = nb;
        q[0] = nb;
        func_02017378(r4, *(W *) &q[0], *(W *) &q[1], *(W *) &q[2], a);
    }
    *(u8 **) (arg0 + 0xc) = r4;
    c                     = K2;
    b                     = K3;
    d                     = K4;
    p[3]                  = c;
    p[1]                  = c;
    p[2]                  = b;
    p[0]                  = d;
    func_02017e60(*(u8 **) (arg0 + 0xc), 0, *(W *) &p[0], *(W *) &p[1], b, p[3]);
    func_02017d90(*(u8 **) (arg0 + 0xc), *(W *) (*(u8 **) data_0213df5c + 0x2f7c));
    x                                  = *(u32 *) (*(u8 **) (arg0 + 8) + 4);
    *(u32 *) (*(u8 **) (arg0 + 8) + 4) = x | 1;
}
