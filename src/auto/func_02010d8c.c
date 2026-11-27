/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02117e04;
extern u8 data_02117de4;
extern u8 data_0212fcc8;
extern u8 *volatile data_0213e580;

void *_ZN12ValueManager7GetByIdEl(void *, s32);
s32 func_020d5604(s32);
s32 func_020d5680(s32, void *);
s32 func_0209b380(void *, s32);
s32 func_0209b3e0(void *, s32, s32);
s32 func_0209b0ec(s32, s32);

void func_02010d8c(u8 *arg0) {
    s32 i;
    u8 *ent;
    s32 sp4;
    s32 sp8;
    s32 one;
    s32 sp0c;
    s32 sp10;
    s32 sp14;
    s32 r6;
    s32 r8;
    s32 cnt;
    s32 k;
    s32 idx;
    s32 ten;
    s32 e;
    s32 tb;
    s32 f4;

    i = 0;
    if ((s32) arg0[0x29] <= 0) {
        return;
    }
    sp4  = 0x2A0;
    sp0c = 0;
    sp8  = 0;
    sp10 = 0;
    one  = 1;
    ten  = 0x10;
    sp14 = -1;
    do {
        ent = (u8 *) _ZN12ValueManager7GetByIdEl(arg0 + 0x24, i);
        if (ent[0x15] != 0) {
            r6 = sp4;
            switch (ent[0x15]) {
                case 1:
                case 0x1E:
                    func_020d5604(*(s32 *) (arg0 + 0x144));
                    r8  = sp8;
                    cnt = func_0209b380(data_0213e580, ten);
                    if (cnt > 0) {
                        k = sp0c;
                        if (cnt > 0) {
                            do {
                                if (func_0209b0ec(func_0209b3e0(data_0213e580, ten, k & 0xFF),
                                                  *(s32 *) (data_0213e580 + 0xF8) + 0x78) != 0) {
                                    r8 = one;
                                    break;
                                }
                                k++;
                            } while (k < cnt);
                        }
                    }
                    e   = ent[0x15];
                    f4  = *(s32 *) (data_0213e580 + 0xF4);
                    tb  = *(u8 *) (&data_02117e04 + f4 * 2 + r8);
                    idx = (e != 1) ? one : sp10;
                    r6  = *(u16 *) (&data_02117de4 + tb * 4 + idx * 2);
                    break;
                case 2:
                    func_020d5604(*(s32 *) (arg0 + 0x144));
                    *(s32 *) (arg0 + 0x144) = sp14;
                    break;
                default:
                    r6 = *(u16 *) (&data_0212fcc8 + ent[0x15] * 2);
                    break;
            }
            if (r6 != 0x2A0) {
                *(s32 *) (arg0 + 0x144) = func_020d5680(r6, arg0 + 0x78);
            }
        }
    } while (++i < (s32) arg0[0x29]);
}
