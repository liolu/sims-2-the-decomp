/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_0213e434;
extern u8 *data_02139fa4;

void func_0203d514(void *p, u32 a, s32 b);
void func_020462cc(void *dst, void *src, s32 n);
void func_02048108(void *a, s32 b, s32 c, s32 d, void *e, s32 f);
void func_0205871c(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_0206466c(s32 a, s32 b, s32 c);

void func_020acd78(u8 *arg0, u8 arg1) {
    u32 i;
    u8 *tbl;
    s32 saved;
    u8 *q;
    u8 *dst;

    q          = *(u8 **) (*(u8 **) (arg0 + 0x104) + 0xf4);
    i          = 0;
    saved      = *(s32 *) q;
    *(s32 *) q = 0;
    tbl        = arg0 + 0x88;
    while (i < 6 && tbl[i] != 0) {
        func_0203d514(*(void **) (*(u8 **) (arg0 + 0x104) + 0xf4), tbl[i], 8);
        i += 1;
    }
    if ((s32) i < 0xf) {
        do {
            func_0203d514(*(void **) (*(u8 **) (arg0 + 0x104) + 0xf4), 0, 8);
            i += 1;
        } while ((s32) i < 0xf);
    }
    *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 0x104) + 0xf4)) = 0x78;
    func_0203d514(*(void **) (*(u8 **) (arg0 + 0x104) + 0xf4), 1, 8);
    *(s32 *) (*(u8 **) (*(u8 **) (arg0 + 0x104) + 0xf4)) = saved;
    switch (*(s32 *) (arg0 + 8)) {
        case 0:
            func_0206466c(data_0213e434, 0x51, 1);
            func_020462cc((u8 *) data_0213e434 + 0x46AC + (arg1 << 4),
                          *(void **) (*(u8 **) (*(u8 **) (arg0 + 0x104) + 0xf4) + 8), 0x10);
            dst = arg0;
            if (arg0 != 0) {
                dst = arg0 + 0x24;
            }
            *(u8 **) (data_02139fa4 + 0x28) = dst;
            func_0205871c(data_02139fa4, 0x97B, 0x97A, 3, 0, 1);
            arg0[0x28] = arg1;
            break;
        case 1:
            func_020462cc((u8 *) data_0213e434 + 0x46DC + (arg1 << 6),
                          *(void **) (*(u8 **) (*(u8 **) (arg0 + 0x104) + 0xf4) + 8), 0x40);
            func_02048108(data_02139fa4, 0x12, 1, 2, *(void **) (arg0 + 0x104), 0);
            break;
    }
}
