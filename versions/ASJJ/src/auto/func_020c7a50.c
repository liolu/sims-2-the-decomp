/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02134d30[];
extern u8 data_021350c4[];
extern u8 data_021355b0[];
extern u8 data_02135670[];
extern u8 data_02135698[];
extern u8 data_02135758[];
extern u8 data_02135760[];
extern u8 data_02135d8c[];
extern u8 data_02135dac[];
extern u8 data_02135dc0[];
extern u8 data_02135dd4[];
extern u8 data_02135df0[];
extern u8 data_02135e0c[];
extern u8 data_02135e20[];
extern u8 data_02135e38[];
extern s32 data_0213fcb8;
extern s32 data_0213fcc4;
extern s32 data_0213fcd4;
void func_020c7568();
void func_020c87d4();
void func_020c6bc4();
void func_020c6cdc();
s32 func_020c6d2c();
s32 func_020c7330();
void func_020c760c();
s32 func_020c87ac();
s32 func_021057c4();

void func_020c7a50(u8 *arg0) {
    s32 var_r0;
    s32 temp_r0;
    u16 temp_r1;
    void **tbl;
    void **tbl2;
    s32 h;
    s32 g;
    enum {
        N9 = 9
    } nine;

    func_020c87d4(data_02135dc0, data_021355b0, data_0213fcc4);
    temp_r1 = *(u16 *) (arg0 + 2);
    if (temp_r1 != 0) {
        if ((s32) temp_r1 >= 0 && (u32) temp_r1 < 0x17U) {
            tbl  = (void **) data_02135698;
            tbl2 = (void **) tbl[temp_r1];
        } else {
            tbl2 = (void **) data_02134d30;
        }
        func_020c87d4(data_02135dac, data_021355b0, tbl2);
        h = *(u16 *) (arg0 + 2);
        if (data_0213fcc4 != 9) {
            data_0213fcd4 = h;
        }
        func_020c87d4(data_02135758, ((void **) data_02135670)[data_0213fcc4]);
        nine          = N9;
        data_0213fcc4 = nine;
        func_020c87d4(data_02135760, ((void **) data_02135670)[nine]);
        return;
    }
    func_020c87d4(data_02135e38, data_021350c4, func_020c6d2c());
    data_0213fcb8 = 0x14;
    data_0213fcd4 = 0;
    func_020c6cdc(3);
    temp_r0 = func_021057c4(func_020c7568);
    if (temp_r0 == 0) {
        var_r0 = func_020c7330();
    } else if (temp_r0 != 2) {
        func_020c87d4(data_02135e20);
        func_020c87d4(data_02135e0c, data_021350c4, func_020c87ac(temp_r0));
        func_020c6bc4(temp_r0);
        var_r0 = 0;
    } else {
        func_020c760c(0x15);
        if (data_0213fcd4 == 0) {
            func_020c87d4(data_02135df0);
            var_r0 = func_020c7330();
        } else {
            func_020c87d4(data_02135dd4);
            var_r0 = 0;
        }
    }
    if (var_r0 != 0) {
        data_0213fcb8 = 0x13;
        return;
    }
    func_020c87d4(data_02135d8c);
    func_020c87d4(data_02135758, ((void **) data_02135670)[data_0213fcc4]);
    nine          = N9;
    data_0213fcc4 = nine;
    func_020c87d4(data_02135760, ((void **) data_02135670)[nine]);
}
