/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e434;
extern u8 data_ov004_0214a7a0[];
extern u8 data_ov004_0214a7a8[];

void func_0203cdd4(s32);
void func_02051a50(s32, s32, s32);
u8 *func_02052258(s32);
s32 func_02051338(s32, s32, s32, u8 *, s32);
u8 func_02052288(void);
void *func_020733f0(u8 *);
void func_020509e8(void *, s32);
s32 func_0207355c(u8 *, s32);
s32 func_02064644(u8 *, s32);
s32 func_02077ef4(u8 *, s32);

void func_ov004_02149c54(u8 *arg0, s32 *arg1) {
    u8 i;
    s32 st;
    u8 id;
    u8 *name;

    func_0203cdd4(1);
    func_02051a50(3, 0, 0);
    if (arg0[0x26] == 0) {
        name  = func_02052258(arg0[0x25] + 0x143);
        *arg1 = func_02051338(*arg1, 0x80, 8, name, 1);
    } else {
        name  = func_02052258(0xA11);
        *arg1 = func_02051338(*arg1, 8, 8, name, 0);
        if (func_02052288() == 5) {
            name  = func_02052258(0x7E0);
            *arg1 = func_02051338(*arg1, 0xBE, 8, name, 0);
        } else if (func_02052288() == 3) {
            name  = func_02052258(0x7E0);
            *arg1 = func_02051338(*arg1, 0xA7, 8, name, 0);
        } else {
            name  = func_02052258(0x7E0);
            *arg1 = func_02051338(*arg1, 0xAA, 8, name, 0);
        }
        func_02051a50(3, 0, -1);
        func_020509e8(func_020733f0(data_0213e434 + 0x41F8), 0);
        name  = func_02052258(0x95C);
        *arg1 = func_02051338(*arg1, 0xEA, 0x16, name, 1);
        func_02051a50(3, 0, 0);
    }
    i = 0;
    do {
        st = 3;
        if (func_0207355c(data_0213e434 + 0x41F8, id = data_ov004_0214a7a0[i]) != 0) {
            if (id != 0x14 || func_02064644(data_0213e434, 0x15) != 0) {
                if (arg0[0x26] == 0) {
                    if (func_02077ef4(data_0213e434 + 0x21DC, id) != 0) {
                        st = 0;
                    } else {
                        st = 3;
                    }
                } else if (func_02077ef4(data_0213e434 + 0x21DC, id) != 0) {
                    st = 0;
                } else if (func_0207355c(data_0213e434 + 0x41F8, id) != 0) {
                    st = 3;
                }
            }
        }
        func_02051a50(3, st, 0);
        name  = func_02052258(id + 0x43);
        *arg1 = func_02051338(*arg1, 0x2D, data_ov004_0214a7a8[i] + 8, name, 0);
        i++;
    } while (i < 5);
    arg0[0x24] = 0;
}
