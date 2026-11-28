/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e2f4;
extern u8 data_ov004_0214a660[];
extern u8 data_ov004_0214a668[];

void func_0203cd5c(s32);
void func_020519d8(s32, s32, s32);
u8 *func_020521e0(s32);
s32 func_020512c0(s32, s32, s32, u8 *, s32);
u8 func_02052210(void);
void *func_02073378(u8 *);
void func_02050970(void *, s32);
s32 func_020734e4(u8 *, s32);
s32 func_020645cc(u8 *, s32);
s32 func_02077e7c(u8 *, s32);

void func_ov004_02149b14(u8 *arg0, s32 *arg1) {
    u8 i;
    s32 st;
    u8 id;
    u8 *name;

    func_0203cd5c(1);
    func_020519d8(3, 0, 0);
    if (arg0[0x26] == 0) {
        name  = func_020521e0(arg0[0x25] + 0x143);
        *arg1 = func_020512c0(*arg1, 0x80, 8, name, 1);
    } else {
        name  = func_020521e0(0xA11);
        *arg1 = func_020512c0(*arg1, 8, 8, name, 0);
        if (func_02052210() == 5) {
            name  = func_020521e0(0x7E0);
            *arg1 = func_020512c0(*arg1, 0xBE, 8, name, 0);
        } else if (func_02052210() == 3) {
            name  = func_020521e0(0x7E0);
            *arg1 = func_020512c0(*arg1, 0xA7, 8, name, 0);
        } else {
            name  = func_020521e0(0x7E0);
            *arg1 = func_020512c0(*arg1, 0xAA, 8, name, 0);
        }
        func_020519d8(3, 0, -1);
        func_02050970(func_02073378(data_0213e2f4 + 0x41F8), 0);
        name  = func_020521e0(0x95C);
        *arg1 = func_020512c0(*arg1, 0xEA, 0x16, name, 1);
        func_020519d8(3, 0, 0);
    }
    i = 0;
    do {
        st = 3;
        if (func_020734e4(data_0213e2f4 + 0x41F8, id = data_ov004_0214a660[i]) != 0) {
            if (id != 0x14 || func_020645cc(data_0213e2f4, 0x15) != 0) {
                if (arg0[0x26] == 0) {
                    if (func_02077e7c(data_0213e2f4 + 0x21DC, id) != 0) {
                        st = 0;
                    } else {
                        st = 3;
                    }
                } else if (func_02077e7c(data_0213e2f4 + 0x21DC, id) != 0) {
                    st = 0;
                } else if (func_020734e4(data_0213e2f4 + 0x41F8, id) != 0) {
                    st = 3;
                }
            }
        }
        func_020519d8(3, st, 0);
        name  = func_020521e0(id + 0x43);
        *arg1 = func_020512c0(*arg1, 0x2D, data_ov004_0214a668[i] + 8, name, 0);
        i++;
    } while (i < 5);
    arg0[0x24] = 0;
}
