/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c8cec(void *, void *, s32);
s32 func_021059d8(void *);
void func_020c6710(void);
extern s32 data_0214019c;
extern s32 data_021401ac;
extern s32 data_02140190;
extern s32 data_02135b84[];
extern s32 data_02135bac[];
extern u8 data_021360f0;
extern u8 data_02135900;
extern u8 data_02135c6c;
extern u8 data_02135c74;
extern u8 data_02135244;
extern u8 data_021360dc;
extern u8 data_02136118;
extern u8 data_02135530;
extern u8 data_02136104;
extern u16 data_0214016c;
extern u16 data_0214017c;

void func_020c652c(void *arg0) {
    s32 idx;
    s32 r2;
    s32 skip;
    s32 t;
    s32 r4;
    enum {
        NINE = 9
    } nine;

    func_020c8cec(&data_021360f0, &data_02135900, data_0214019c);
    if (*(u16 *) ((u8 *) arg0 + 2) != 0) {
        func_020c8cec(&data_02135c6c, (void *) data_02135b84[data_0214019c], data_0214019c);
        nine          = NINE;
        data_0214019c = nine;
        func_020c8cec(&data_02135c74, (void *) data_02135b84[nine], (s32) &data_0214019c);
        idx = *(u16 *) ((u8 *) arg0 + 2);
        if (idx >= 0 && (u32) idx < 0x17) {
            r2 = data_02135bac[idx];
        } else {
            r2 = (s32) &data_02135244;
        }
        func_020c8cec(&data_021360dc, &data_02135900, r2);
        t = *(u16 *) ((u8 *) arg0 + 2);
        if (data_0214019c != 9) {
            data_021401ac = t;
        }
        return;
    }
    func_020c8cec(&data_02136118, &data_02135530, data_0214019c);
    data_02140190 = 0x28;
    if ((u32) (data_0214019c - 4) <= 2) {
        skip = 1;
    } else {
        r4 = func_021059d8((void *) func_020c6710);
        if (r4 != 2) {
            if (r4 >= 0 && (u32) r4 < 0x17) {
                r2 = data_02135bac[r4];
            } else {
                r2 = (s32) &data_02135244;
            }
            func_020c8cec(&data_02136104, &data_02135530, r2);
            if (data_0214019c != 9) {
                data_021401ac = r4;
            }
            skip = 0;
        } else {
            data_0214016c = 0;
            data_0214017c = 1;
            skip          = 1;
        }
    }
    if (skip == 0) {
        func_020c8cec(&data_02135c6c, (void *) data_02135b84[data_0214019c], data_0214019c);
        nine          = NINE;
        data_0214019c = nine;
        func_020c8cec(&data_02135c74, (void *) data_02135b84[nine], (s32) &data_0214019c);
    }
    data_02140190 = 0x21;
}
