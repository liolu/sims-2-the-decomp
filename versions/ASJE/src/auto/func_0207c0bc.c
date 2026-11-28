/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e440;
extern u8 *data_02139e64;
extern u8 *data_0213e2f4;
void func_0201e6fc(u8 *p);
void func_020117d8(s32 a, s32 b, u8 *c, s32 d);
void func_02001944(s32 p);
void func_02084c80(s32 p);
void func_02071dcc(s32 a, s32 b, s32 c);
void func_02001914(void);
void func_02018acc(u8 *p);

void func_0207c0bc(u8 *arg0) {
    u8 buf[0x20];
    u8 i;
    s32 t2;
    u8 *g;
    s32 obj;
    s32 v;
    s32 t1;
    u8 *rec;
    u8 *p;
    u8 *q;

    for (i = 0; i < 10; i++) {
        rec = arg0 + i * 0x4c;
        if (rec[0xa41] == 0) {
            continue;
        }
        if (*(u16 *) (rec + 0xa3e) != *(s32 *) (data_0213e440 + 0xf4)) {
            continue;
        }
        if (*(s32 *) (rec + 0xa44) != 3) {
            continue;
        }
        if (*(u16 *) (rec + 0xa48) != 0) {
            continue;
        }
        rec[0xa41]  = 0;
        arg0[0xd08] = 1;
        obj         = *(s32 *) (arg0 + *(u16 *) (rec + 0xa3c) * 0x2c + 0x24);
        func_0201e6fc(buf);
        if (obj != 0) {
            func_020117d8(obj, 5, buf, 0);
        }
        t1 = *(s32 *) (data_02139e64 + 0xda8);
        func_02001944(0);
        t2 = t1 + 0x24;
        func_02084c80(*(s32 *) (data_0213e440 + 0xfc));
        v = *(s32 *) (rec + 0xa38);
        if (v == 0x862) {
            func_02071dcc(t2, 0x966, 0x973);
            g = data_0213e2f4;
            p = g + 0x2f60;
            g += 0x2000;
            *(s32 *) (g + 0xf60) += 0x12c;
            v = *(s32 *) (g + 0xf60);
            if (v > 0xf423f) {
                *(s32 *) p = 0xf423f;
            } else if (v < 0) {
                *(s32 *) p = 0;
            }
            p[0xc] = 1;
            *(s32 *) (p + 4) += 0x12c;
            v = *(s32 *) (p + 4);
            if (v > 0xf423f || v < 0) {
                *(s32 *) (p + 4) = 0xf423f;
            }
        } else if (v != 0x851) {
            func_02071dcc(t2, 0x965, 0x973);
            g = data_0213e2f4;
            p = g + 0x2f60;
            g += 0x2000;
            *(s32 *) (g + 0xf60) += 0x12c;
            v = *(s32 *) (g + 0xf60);
            if (v > 0xf423f) {
                *(s32 *) p = 0xf423f;
            } else if (v < 0) {
                *(s32 *) p = 0;
            }
            p[0xc] = 1;
            *(s32 *) (p + 4) += 0x12c;
            v = *(s32 *) (p + 4);
            if (v > 0xf423f || v < 0) {
                *(s32 *) (p + 4) = 0xf423f;
            }
        }
        func_02001914();
        func_02018acc(buf);
    }
}
