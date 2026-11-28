/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02135104[];
extern u8 data_02135498[];
extern u8 data_02135984[];
extern u8 data_02135a44[];
extern u8 data_02135a6c[];
extern u8 data_02135b2c[];
extern u8 data_02135b34[];
extern u8 data_02136160[];
extern u8 data_02136180[];
extern u8 data_02136194[];
extern u8 data_021361a8[];
extern u8 data_021361c4[];
extern u8 data_021361e0[];
extern u8 data_021361f4[];
extern u8 data_0213620c[];
extern s32 data_02140050;
extern s32 data_0214005c;
extern s32 data_0214006c;
void func_020c79b8();
void func_020c8c24();
void func_020c7014();
void func_020c712c();
s32 func_020c717c();
s32 func_020c7780();
void func_020c7a5c();
s32 func_020c8bfc();
s32 func_02105b9c();

void func_020c7ea0(u8 *arg0) {
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

    func_020c8c24(data_02136194, data_02135984, data_0214005c);
    temp_r1 = *(u16 *) (arg0 + 2);
    if (temp_r1 != 0) {
        if ((s32) temp_r1 >= 0 && (u32) temp_r1 < 0x17U) {
            tbl  = (void **) data_02135a6c;
            tbl2 = (void **) tbl[temp_r1];
        } else {
            tbl2 = (void **) data_02135104;
        }
        func_020c8c24(data_02136180, data_02135984, tbl2);
        h = *(u16 *) (arg0 + 2);
        if (data_0214005c != 9) {
            data_0214006c = h;
        }
        func_020c8c24(data_02135b2c, ((void **) data_02135a44)[data_0214005c]);
        nine          = N9;
        data_0214005c = nine;
        func_020c8c24(data_02135b34, ((void **) data_02135a44)[nine]);
        return;
    }
    func_020c8c24(data_0213620c, data_02135498, func_020c717c());
    data_02140050 = 0x14;
    data_0214006c = 0;
    func_020c712c(3);
    temp_r0 = func_02105b9c(func_020c79b8);
    if (temp_r0 == 0) {
        var_r0 = func_020c7780();
    } else if (temp_r0 != 2) {
        func_020c8c24(data_021361f4);
        func_020c8c24(data_021361e0, data_02135498, func_020c8bfc(temp_r0));
        func_020c7014(temp_r0);
        var_r0 = 0;
    } else {
        func_020c7a5c(0x15);
        if (data_0214006c == 0) {
            func_020c8c24(data_021361c4);
            var_r0 = func_020c7780();
        } else {
            func_020c8c24(data_021361a8);
            var_r0 = 0;
        }
    }
    if (var_r0 != 0) {
        data_02140050 = 0x13;
        return;
    }
    func_020c8c24(data_02136160);
    func_020c8c24(data_02135b2c, ((void **) data_02135a44)[data_0214005c]);
    nine          = N9;
    data_0214005c = nine;
    func_020c8c24(data_02135b34, ((void **) data_02135a44)[nine]);
}
