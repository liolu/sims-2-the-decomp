/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c87d4(void *, void *, s32);
s32 func_021054c4(void *);
void func_020c61f8(void);
extern s32 data_0213fcc4;
extern s32 data_0213fcd4;
extern s32 data_0213fcb8;
extern s32 data_02135670[];
extern s32 data_02135698[];
extern u8 data_02135bdc;
extern u8 data_021353ec;
extern u8 data_02135758;
extern u8 data_02135760;
extern u8 data_02134d30;
extern u8 data_02135bc8;
extern u8 data_02135c04;
extern u8 data_0213501c;
extern u8 data_02135bf0;
extern u16 data_0213fc94;
extern u16 data_0213fca4;

void func_020c6014(void *arg0) {
    s32 idx;
    s32 r2;
    s32 skip;
    s32 t;
    s32 r4;
    enum {
        NINE = 9
    } nine;

    func_020c87d4(&data_02135bdc, &data_021353ec, data_0213fcc4);
    if (*(u16 *) ((u8 *) arg0 + 2) != 0) {
        func_020c87d4(&data_02135758, (void *) data_02135670[data_0213fcc4], data_0213fcc4);
        nine          = NINE;
        data_0213fcc4 = nine;
        func_020c87d4(&data_02135760, (void *) data_02135670[nine], (s32) &data_0213fcc4);
        idx = *(u16 *) ((u8 *) arg0 + 2);
        if (idx >= 0 && (u32) idx < 0x17) {
            r2 = data_02135698[idx];
        } else {
            r2 = (s32) &data_02134d30;
        }
        func_020c87d4(&data_02135bc8, &data_021353ec, r2);
        t = *(u16 *) ((u8 *) arg0 + 2);
        if (data_0213fcc4 != 9) {
            data_0213fcd4 = t;
        }
        return;
    }
    func_020c87d4(&data_02135c04, &data_0213501c, data_0213fcc4);
    data_0213fcb8 = 0x28;
    if ((u32) (data_0213fcc4 - 4) <= 2) {
        skip = 1;
    } else {
        r4 = func_021054c4((void *) func_020c61f8);
        if (r4 != 2) {
            if (r4 >= 0 && (u32) r4 < 0x17) {
                r2 = data_02135698[r4];
            } else {
                r2 = (s32) &data_02134d30;
            }
            func_020c87d4(&data_02135bf0, &data_0213501c, r2);
            if (data_0213fcc4 != 9) {
                data_0213fcd4 = r4;
            }
            skip = 0;
        } else {
            data_0213fc94 = 0;
            data_0213fca4 = 1;
            skip          = 1;
        }
    }
    if (skip == 0) {
        func_020c87d4(&data_02135758, (void *) data_02135670[data_0213fcc4], data_0213fcc4);
        nine          = NINE;
        data_0213fcc4 = nine;
        func_020c87d4(&data_02135760, (void *) data_02135670[nine], (s32) &data_0213fcc4);
    }
    data_0213fcb8 = 0x21;
}
