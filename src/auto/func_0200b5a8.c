/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0212fa64;
extern u8 data_0213e434;
extern u8 data_02118310;
extern u8 *data_0213e580;

void func_02011c20(void);
void func_020887ec(void *p);
void func_02045604(void *p, s32 v);
void func_0201180c(void *o, s32 a, u16 b, void *c);
void func_0200b9d0(void *p, s32 a, s32 b);
u8 *func_0200b8ac(void *p);
void func_0200ad3c(void *p);

void *func_0200b5a8(u8 *arg0, s32 arg1) {
    volatile s32 sp[7];
    s32 r1;
    u8 *t;

    func_02011c20();
    *(u8 **) arg0 = &data_0212fa64;
    func_020887ec(arg0 + 0x214);
    func_02045604(arg0 + 0xE0, 0xA);
    *(u16 *) (arg0 + 0xE) = 4;
    r1                    = 2;
    if ((arg1 >= 0x39) && (arg1 <= 0x3E)) {
        r1 = 1;
    } else {
        *(u8 **) (((arg1 * 0x2C) + *(s32 *) &data_0213e434) + 0x2200) = arg0;
    }
    func_0201180c(arg0, r1, (u16) arg1, &data_02118310 + (arg1 * 8));
    if ((arg1 != 0x35) && (arg1 != 0x36)) {
        func_0200b9d0(arg0 + 0x24, 3, -1);
        t = func_0200b8ac(arg0 + 0x24);
        if ((arg1 == 0x34) || ((arg1 == 0x17) && ((u32) (*(s32 *) (*(u8 **) &data_0213e580 + 0xF4) - 0x16) <= 1U))) {
            sp[0]               = 0x6000;
            sp[3]               = 0x6000;
            *(s32 *) (t + 0x1C) = 0x6000;
            *(s32 *) (arg0 + 4) = *(s32 *) (arg0 + 4) | 0x40000;
        } else {
            sp[1]               = 0x2000;
            sp[4]               = 0x2000;
            *(s32 *) (t + 0x1C) = 0x2000;
        }
        sp[2]               = 0x4000;
        sp[5]               = 0x4000;
        *(s32 *) (t + 0x18) = 0x4000;
        *(u8 *) (t + 0x14)  = 0;
        *(u8 *) (t + 0x16)  = 0x40;
    }
    if (arg1 == 0x37) {
        *(s32 *) (arg0 + 4) = *(s32 *) (arg0 + 4) | 0x40100;
    }
    func_0200ad3c(arg0);
    return arg0;
}
