/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_02139fa4;

void func_020d59bc(s32);
void func_02048108(void *, s32, s32, s32, s32, s32);
void func_0205871c(void *, s32, s32, s32, s32, s32);
s32 func_02102358(s32 *, s32 *);
void func_02102454(s32, s32);

void func_02070c44(u8 *arg0) {
    s32 sp8;
    s32 spC;
    u8 *r2;
    void *r4;
    s32 r1;
    s32 n1;
    u8 flag;

    r2       = *(u8 **) (arg0 + 0x18);
    r4       = data_02139fa4;
    r1       = r2[0x8C];
    r2[0x8C] = 0;
    if (r1 != 0) {
        func_020d59bc(0x159);
        func_02048108(data_02139fa4, 0x1A, 1, 0, 0, 0);
    }
    r2       = *(u8 **) (arg0 + 0x1C);
    r1       = r2[0x8C];
    r2[0x8C] = 0;
    if (r1 != 0) {
        func_020d59bc(0x159);
        func_0205871c(r4, 0x41, -1, 2, 0, 1);
    }
    r2       = *(u8 **) (arg0 + 0x20);
    r1       = r2[0x8C];
    r2[0x8C] = 0;
    if (r1 != 0) {
        func_020d59bc(0x159);
        if (func_02102358(&sp8, &spC) != 2) {
            n1  = (sp8 == 0) ? 1 : 0;
            sp8 = n1;
            spC = (spC == 0) ? 1 : 0;
            func_02102454(0, n1);
            func_02102454(1, spC);
        }
    }
    flag              = ((u8 *) r4)[0x19];
    ((u8 *) r4)[0x19] = 0;
    if (flag == 0) {
        return;
    }
    if (*(s32 *) ((u8 *) r4 + 0xC) != 1) {
        return;
    }
    func_02048108(data_02139fa4, 0x18, 0, 0, 0, 0);
    func_02048108(data_02139fa4, 0, 1, 0, 0, 0);
}
