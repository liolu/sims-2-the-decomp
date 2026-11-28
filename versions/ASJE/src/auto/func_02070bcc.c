/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_02139e64;

void func_020d5880(s32);
void func_02048090(void *, s32, s32, s32, s32, s32);
void func_020586a4(void *, s32, s32, s32, s32, s32);
s32 func_0210221c(s32 *, s32 *);
void func_02102318(s32, s32);

void func_02070bcc(u8 *arg0) {
    s32 sp8;
    s32 spC;
    u8 *r2;
    void *r4;
    s32 r1;
    s32 n1;
    u8 flag;

    r2       = *(u8 **) (arg0 + 0x18);
    r4       = data_02139e64;
    r1       = r2[0x8C];
    r2[0x8C] = 0;
    if (r1 != 0) {
        func_020d5880(0x159);
        func_02048090(data_02139e64, 0x1A, 1, 0, 0, 0);
    }
    r2       = *(u8 **) (arg0 + 0x1C);
    r1       = r2[0x8C];
    r2[0x8C] = 0;
    if (r1 != 0) {
        func_020d5880(0x159);
        func_020586a4(r4, 0x41, -1, 2, 0, 1);
    }
    r2       = *(u8 **) (arg0 + 0x20);
    r1       = r2[0x8C];
    r2[0x8C] = 0;
    if (r1 != 0) {
        func_020d5880(0x159);
        if (func_0210221c(&sp8, &spC) != 2) {
            n1  = (sp8 == 0) ? 1 : 0;
            sp8 = n1;
            spC = (spC == 0) ? 1 : 0;
            func_02102318(0, n1);
            func_02102318(1, spC);
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
    func_02048090(data_02139e64, 0x18, 0, 0, 0, 0);
    func_02048090(data_02139e64, 0, 1, 0, 0, 0);
}
