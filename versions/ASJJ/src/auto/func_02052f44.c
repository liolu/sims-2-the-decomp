/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_021224d8[];

void func_020429b0(s32, s32, s32);

void func_02052f44(u8 *arg0) {
    s32 base;
    u8 *p;
    u8 *tbl;
    u8 *str;
    u32 idx;
    u8 cnt;
    s32 acc;
    u8 k;
    u8 sym;

    p = *(u8 **) (arg0 + 4);
    if (*(u16 *) (p + 0x1A) != 0 && *(u8 *) (p + 0x22) != 1) {
        idx = 0xFFFF;
        if (*(u8 *) (p + 0x22) == 0) {
            *(u8 *) (p + 0x22) = 1;
            idx                = 0;
        }
        if (idx < *(u16 *) (p + 0x1A)) {
            tbl  = *(u8 **) (p + 8);
            base = *(s32 *) p;
            str  = *(u8 **) (tbl + idx * 8);
            cnt  = *str;
            acc  = *(s32 *) (tbl + idx * 8 + 4);
            str  = str + 1;
            k    = 0;
            if (k < cnt) {
                do {
                    sym = *str;
                    str = str + 1;
                    func_020429b0(sym, base, acc);
                    acc += data_021224d8[sym];
                    k++;
                } while (k < cnt);
            }
        }
    }
    p = *(u8 **) (arg0 + 4) + 0x24;
    if (*(u16 *) (p + 0x1A) != 0 && *(u8 *) (p + 0x22) != 1) {
        idx = 0xFFFF;
        if (*(u8 *) (p + 0x22) == 0) {
            *(u8 *) (p + 0x22) = 1;
            idx                = 0;
        }
        if (idx < *(u16 *) (p + 0x1A)) {
            tbl  = *(u8 **) (p + 8);
            base = *(s32 *) p;
            str  = *(u8 **) (tbl + idx * 8);
            cnt  = *str;
            acc  = *(s32 *) (tbl + idx * 8 + 4);
            str  = str + 1;
            k    = 0;
            if (k < cnt) {
                do {
                    sym = *str;
                    str = str + 1;
                    func_020429b0(sym, base, acc);
                    acc += data_021224d8[sym];
                    k++;
                } while (k < cnt);
            }
        }
    }
}
