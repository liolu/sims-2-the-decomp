/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c8c24();
s32 func_02106a3c();
s32 func_02106d84();

extern u8 func_020c5270;
extern u8 data_02136634;
extern u8 data_02135660;
extern u8 data_02136620;
extern u8 data_02135104;
extern u8 data_02135a6c;
extern u8 data_02136590;
extern u8 data_0213665c;
extern u8 data_02135964;
extern u8 data_02135b2c;
extern u8 data_02135a44;
extern u8 data_02135b34;
extern u8 data_02136648;
extern u8 data_021365f8;
extern u8 data_021365b0;
extern u8 data_021365e4;
extern u8 data_02140460;
extern u8 data_02140100;
extern u8 data_02140020;
extern s32 data_02140050;
extern s32 data_0214005c;
extern s32 data_02140068;
extern s32 data_0214006c;

void func_020c4f1c(u8 *arg0) {
    u8 *r2;
    s32 t;
    s32 k;
    s32 var_r0;
    u32 h;
    u32 h4;
    s32 cur;
    u32 h2;
    enum {
        F4 = 4
    } f4;
    enum {
        F5 = 5
    } f5;
    enum {
        F6 = 6
    } f6;

    func_020c8c24(&data_02136634, &data_02135660, data_0214005c);
    h = *(u16 *) (arg0 + 2);
    if (h != 0) {
        if (h == 0xF) {
            return;
        }
        if (h == 9) {
            return;
        }
        if (h == 0xD) {
            return;
        }
        if (((s32) h >= 0) && (h < 0x17)) {
            r2 = ((u8 **) &data_02135a6c)[h];
        } else {
            r2 = &data_02135104;
        }
        func_020c8c24(&data_02136620, &data_02135660, r2);
        h2 = *(u16 *) (arg0 + 2);
        if (data_0214005c != 9) {
            data_0214006c = h2;
        }
        return;
    }
    h4 = *(u16 *) (arg0 + 4);
    k  = h4 - 0xA;
    switch (k) {
        case 0:
            if (data_02140068 == 3) {
                cur = data_0214005c;
                if (cur == 6) {
                    return;
                }
                if (cur == 4) {
                    func_020c8c24(&data_0213665c, &data_02135964, cur);
                    data_02140050 = 0x26;
                    if (data_0214005c == 6) {
                        var_r0 = 1;
                    } else if (data_0214005c != 4) {
                        var_r0 = 0;
                    } else {
                        func_020c8c24(&data_02135b2c, ((u8 **) &data_02135a44)[data_0214005c]);
                        f6            = 6;
                        data_0214005c = f6;
                        func_020c8c24(&data_02135b34, ((u8 **) &data_02135a44)[f6]);
                        t = func_02106d84(&func_020c5270, &data_02140100);
                        if (t != 2) {
                            if ((t >= 0) && ((u32) t < 0x17)) {
                                r2 = ((u8 **) &data_02135a6c)[t];
                            } else {
                                r2 = &data_02135104;
                            }
                            func_020c8c24(&data_02136648, &data_02135964, r2);
                            if (data_0214005c != 9) {
                                data_0214006c = t;
                            }
                            var_r0 = 0;
                        } else {
                            var_r0 = 1;
                        }
                    }
                    if (var_r0 != 0) {
                        return;
                    }
                    func_020c8c24(&data_021365f8);
                    return;
                }
                goto set4;
            }
            if (data_02140068 == 5) {
                t = func_02106a3c(&data_02140460, 0xD, 0xF, 0x7C, (s32) data_02140020);
                if (t != 0) {
                    if ((t >= 0) && ((u32) t < 0x17)) {
                        r2 = ((u8 **) &data_02135a6c)[t];
                    } else {
                        r2 = &data_02135104;
                    }
                    func_020c8c24(&data_021365e4, &data_02135660, r2);
                    if (data_0214005c != 9) {
                        data_0214006c = t;
                    }
                    return;
                }
                func_020c8c24(&data_021365b0);
                func_020c8c24(&data_02135b2c, ((u8 **) &data_02135a44)[data_0214005c]);
                f5            = 5;
                data_0214005c = f5;
                func_020c8c24(&data_02135b34, ((u8 **) &data_02135a44)[f5]);
                return;
            }
        set4:
            func_020c8c24(&data_02135b2c, ((u8 **) &data_02135a44)[data_0214005c]);
            f4            = 4;
            data_0214005c = f4;
            func_020c8c24(&data_02135b34, ((u8 **) &data_02135a44)[f4]);
            return;
        default:
        case 1:
            func_020c8c24(&data_02136590, h4);
        case 2:
        case 3:
            return;
    }
}
