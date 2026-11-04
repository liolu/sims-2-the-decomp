/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020109c4(void *);
M2C_UNK func_02011090(void *, u16, M2C_UNK, M2C_UNK, s32);
M2C_UNK func_020112b0(void *);
M2C_UNK func_02011394(void *);
void func_020113f8(void *);
void func_02011734(void *);
extern s32 data_027e1124;

void func_02010b18(void *arg0) {
    volatile s32 sp4;
    volatile s32 sp8;
    s32 var;
    s32 *p;
    u8 st;
    u16 w;

    func_020113f8(arg0);
    func_02011734(arg0);
    st = *((u8 *) arg0 + 0x211);
    if (st == 1 || st == 3) {
        if (((u32) (*(u16 *) ((u8 *) arg0 + 0x1F8) << 31) >> 31) == 1) {
            sp4 = 0;
            sp8 = 0;
            p   = *(s32 **) ((u8 *) arg0 + 0x1B8);
            if (p != NULL) {
                var = *p;
            } else {
                var = data_027e1124;
            }
            if (var != sp8) {
                *((u8 *) arg0 + 0x211) = 2;
                *((u8 *) arg0 + 0x212) = 0x1E;
            } else {
                *((u8 *) arg0 + 0x211) = 0;
                func_020109c4(arg0);
            }
        }
    } else {
        if (*((u8 *) arg0 + 0x212) != 0) {
            *((u8 *) arg0 + 0x212) = *((u8 *) arg0 + 0x212) - 1;
            if (*((u8 *) arg0 + 0x212) == 0) {
                w                              = *(u16 *) ((u8 *) arg0 + 0x1F8);
                *(u16 *) ((u8 *) arg0 + 0x1F8) = w | 8;
                func_02011090(arg0, 0x87, 0, 0, 1);
                *((u8 *) arg0 + 0x211) = 1;
                func_020109c4(arg0);
            }
        }
    }
    func_02011394(arg0);
    func_020112b0(arg0);
}
