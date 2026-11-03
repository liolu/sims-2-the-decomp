/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v[4];
} Q4;

s32 func_0200e944(s32 p);
void func_0203efec(u16 a, s32 b, s32 c);
extern Q4 data_ov003_02150a3c;
extern Q4 data_ov003_02150a5c;
extern Q4 data_ov003_02150a44;
extern Q4 data_ov003_02150a64;
extern Q4 data_ov003_02150a54;
extern Q4 data_ov003_02150a4c;

void func_ov003_0214bf24(u8 *arg0) {
    Q4 tb[6];
    u16 *pt[6];
    u16 **var;
    u8 *p;
    s32 idx;

    tb[0] = data_ov003_02150a3c;
    tb[1] = data_ov003_02150a5c;
    tb[2] = data_ov003_02150a44;
    tb[3] = data_ov003_02150a64;
    tb[4] = data_ov003_02150a54;
    tb[5] = data_ov003_02150a4c;
    pt[0] = tb[0].v;
    pt[1] = tb[1].v;
    pt[2] = tb[2].v;
    pt[3] = tb[3].v;
    pt[4] = tb[4].v;
    pt[5] = tb[5].v;

    p   = *(u8 **) (arg0 + 4);
    idx = func_0200e944(*(s32 *) (p + *(u16 *) (p + 0x76) * 4 + 0x48));
    p   = *(u8 **) (arg0 + 4);
    var = pt;
    if (*(u16 *) (p + 0x76) == 1) {
        var = &pt[3];
    }
    func_0203efec(var[0][idx], 0x10, 0x10);
    func_0203efec(var[1][idx], 0x20, 0x10);
    func_0203efec(var[2][idx], 0x30, 0x10);
}
