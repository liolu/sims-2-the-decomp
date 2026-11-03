/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0212fa64;
extern u8 *data_0213e434;
extern u8 *data_0213e580;
extern u8 data_02118310;

void func_02011c20(u8 *);
void func_020887ec(u8 *);
void func_02045604(u8 *, s32);
void func_0201180c(u8 *, s32, s32, void *);
void func_0200b9d0(u8 *, s32, s32);
u8 *func_0200b8ac(u8 *);
void func_0200ad3c(u8 *);

u8 *func_0200b448(u8 *arg0, s32 arg1) {
    volatile s32 st[6];
    s32 mode;
    u8 *p;

    func_02011c20(arg0);
    *(u8 **) arg0 = &data_0212fa64;
    func_020887ec(arg0 + 0x214);
    func_02045604(arg0 + 0xE0, 0xA);
    *(u16 *) (arg0 + 0xE) = 4;
    mode                  = 2;
    if (arg1 >= 0x39 && arg1 <= 0x3E) {
        mode = 1;
    } else {
        *(u8 **) (data_0213e434 + arg1 * 0x2C + 0x2200) = arg0;
    }
    func_0201180c(arg0, mode, (u16) arg1, &data_02118310 + (arg1 << 3));
    if (arg1 != 0x35 && arg1 != 0x36) {
        func_0200b9d0(arg0 + 0x24, 3, -1);
        p = func_0200b8ac(arg0 + 0x24);
        if (arg1 == 0x34 || (arg1 == 0x17 && (u32) (*(s32 *) (data_0213e580 + 0xF4) - 0x16) <= 1)) {
            st[0]               = 0x6000;
            st[3]               = 0x6000;
            *(s32 *) (p + 0x1C) = 0x6000;
            *(s32 *) (arg0 + 4) = *(s32 *) (arg0 + 4) | 0x40000;
        } else {
            st[1]               = 0x2000;
            st[4]               = 0x2000;
            *(s32 *) (p + 0x1C) = 0x2000;
        }
        st[2]               = 0x4000;
        st[5]               = 0x4000;
        *(s32 *) (p + 0x18) = 0x4000;
        *(u8 *) (p + 0x14)  = 0;
        *(u8 *) (p + 0x16)  = 0x40;
    }
    if (arg1 == 0x37) {
        *(s32 *) (arg0 + 4) = *(s32 *) (arg0 + 4) | 0x40100;
    }
    func_0200ad3c(arg0);
    return arg0;
}
