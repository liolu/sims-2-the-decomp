/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02139e64;
extern u8 data_0213e2f4;
extern u8 data_0213e440;
extern u8 data_ov010_02152da0;
extern u8 data_027e0000;
extern u8 data_027e0014;

void func_02084c80(void *a);
void func_02046424(void *a);
void func_0200fb30(void *a, s32 b, s32 c);
void func_0203ee5c(void);
void func_0203c4c8(void);
void func_020105d0(void *a);

void func_ov010_0214fe3c(u8 *arg0) {
    s32 *pt;
    s32 x;
    u8 *t;
    s32 v;

    t = *(u8 **) &data_02139e64;
    t = *(u8 **) (t + 0xda8);
    v = (t != 0) ? *(s32 *) (t + 4) : 0x32;
    if (v == 2) {
        pt = (s32 *) (*(u8 **) &data_0213e2f4 + 0x2f60);
        x  = *(s16 *) (arg0 + 0x1f2);
        pt[0] += x;
        if (pt[0] > 0xf423f) {
            pt[0] = 0xf423f;
        } else if (pt[0] < 0) {
            pt[0] = 0;
        }
        if (x > 0) {
            ((u8 *) pt)[0xc] = 1;
            pt[1] += x;
            if (pt[1] > 0xf423f || pt[1] < 0) {
                pt[1] = 0xf423f;
            }
        } else {
            pt[2] -= x;
            if (pt[2] > 0xf423f || pt[2] < 0) {
                pt[2] = 0xf423f;
            }
        }
    }
    t = *(u8 **) &data_02139e64;
    t = *(u8 **) (t + 0xda8);
    v = (t != 0) ? *(s32 *) (t + 4) : 0x32;
    if (v == 2) {
        func_02084c80(*(void **) (*(u8 **) &data_0213e440 + 0xfc));
    }
    if (*(void **) (arg0 + 0x1c4) != 0) {
        func_02046424(*(void **) (arg0 + 0x1c4));
        *(void **) (arg0 + 0x1c4) = 0;
    }
    if (data_ov010_02152da0 == 0) {
        func_0200fb30(*(void **) (*(u8 **) &data_0213e440 + 0xf8), 0, 0);
    }
    func_0203ee5c();
    func_0203c4c8();
    func_020105d0((u8 *) &data_027e0014 + *(s32 *) &data_027e0000 * 0x34);
}
