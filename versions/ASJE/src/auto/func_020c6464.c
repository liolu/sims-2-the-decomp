/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c8c24(void *, void *, s32);
s32 func_0210589c(void *);
void func_020c6648(void);
extern s32 data_0214005c;
extern s32 data_0214006c;
extern s32 data_02140050;
extern s32 data_02135a44[];
extern s32 data_02135a6c[];
extern u8 data_02135fb0;
extern u8 data_021357c0;
extern u8 data_02135b2c;
extern u8 data_02135b34;
extern u8 data_02135104;
extern u8 data_02135f9c;
extern u8 data_02135fd8;
extern u8 data_021353f0;
extern u8 data_02135fc4;
extern u16 data_0214002c;
extern u16 data_0214003c;

void func_020c6464(void *arg0) {
    s32 idx;
    s32 r2;
    s32 skip;
    s32 t;
    s32 r4;
    enum {
        NINE = 9
    } nine;

    func_020c8c24(&data_02135fb0, &data_021357c0, data_0214005c);
    if (*(u16 *) ((u8 *) arg0 + 2) != 0) {
        func_020c8c24(&data_02135b2c, (void *) data_02135a44[data_0214005c], data_0214005c);
        nine          = NINE;
        data_0214005c = nine;
        func_020c8c24(&data_02135b34, (void *) data_02135a44[nine], (s32) &data_0214005c);
        idx = *(u16 *) ((u8 *) arg0 + 2);
        if (idx >= 0 && (u32) idx < 0x17) {
            r2 = data_02135a6c[idx];
        } else {
            r2 = (s32) &data_02135104;
        }
        func_020c8c24(&data_02135f9c, &data_021357c0, r2);
        t = *(u16 *) ((u8 *) arg0 + 2);
        if (data_0214005c != 9) {
            data_0214006c = t;
        }
        return;
    }
    func_020c8c24(&data_02135fd8, &data_021353f0, data_0214005c);
    data_02140050 = 0x28;
    if ((u32) (data_0214005c - 4) <= 2) {
        skip = 1;
    } else {
        r4 = func_0210589c((void *) func_020c6648);
        if (r4 != 2) {
            if (r4 >= 0 && (u32) r4 < 0x17) {
                r2 = data_02135a6c[r4];
            } else {
                r2 = (s32) &data_02135104;
            }
            func_020c8c24(&data_02135fc4, &data_021353f0, r2);
            if (data_0214005c != 9) {
                data_0214006c = r4;
            }
            skip = 0;
        } else {
            data_0214002c = 0;
            data_0214003c = 1;
            skip          = 1;
        }
    }
    if (skip == 0) {
        func_020c8c24(&data_02135b2c, (void *) data_02135a44[data_0214005c], data_0214005c);
        nine          = NINE;
        data_0214005c = nine;
        func_020c8c24(&data_02135b34, (void *) data_02135a44[nine], (s32) &data_0214005c);
    }
    data_02140050 = 0x21;
}
