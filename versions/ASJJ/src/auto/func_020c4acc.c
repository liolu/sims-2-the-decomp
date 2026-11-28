/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c87d4();
s32 func_02106664();
s32 func_021069ac();

extern u8 func_020c4e20;
extern u8 data_02136260;
extern u8 data_0213528c;
extern u8 data_0213624c;
extern u8 data_02134d30;
extern u8 data_02135698;
extern u8 data_021361bc;
extern u8 data_02136288;
extern u8 data_02135590;
extern u8 data_02135758;
extern u8 data_02135670;
extern u8 data_02135760;
extern u8 data_02136274;
extern u8 data_02136224;
extern u8 data_021361dc;
extern u8 data_02136210;
extern u8 data_021400c0;
extern u8 data_0213fd60;
extern u8 data_0213fc88;
extern s32 data_0213fcb8;
extern s32 data_0213fcc4;
extern s32 data_0213fcd0;
extern s32 data_0213fcd4;

void func_020c4acc(u8 *arg0) {
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

    func_020c87d4(&data_02136260, &data_0213528c, data_0213fcc4);
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
            r2 = ((u8 **) &data_02135698)[h];
        } else {
            r2 = &data_02134d30;
        }
        func_020c87d4(&data_0213624c, &data_0213528c, r2);
        h2 = *(u16 *) (arg0 + 2);
        if (data_0213fcc4 != 9) {
            data_0213fcd4 = h2;
        }
        return;
    }
    h4 = *(u16 *) (arg0 + 4);
    k  = h4 - 0xA;
    switch (k) {
        case 0:
            if (data_0213fcd0 == 3) {
                cur = data_0213fcc4;
                if (cur == 6) {
                    return;
                }
                if (cur == 4) {
                    func_020c87d4(&data_02136288, &data_02135590, cur);
                    data_0213fcb8 = 0x26;
                    if (data_0213fcc4 == 6) {
                        var_r0 = 1;
                    } else if (data_0213fcc4 != 4) {
                        var_r0 = 0;
                    } else {
                        func_020c87d4(&data_02135758, ((u8 **) &data_02135670)[data_0213fcc4]);
                        f6            = 6;
                        data_0213fcc4 = f6;
                        func_020c87d4(&data_02135760, ((u8 **) &data_02135670)[f6]);
                        t = func_021069ac(&func_020c4e20, &data_0213fd60);
                        if (t != 2) {
                            if ((t >= 0) && ((u32) t < 0x17)) {
                                r2 = ((u8 **) &data_02135698)[t];
                            } else {
                                r2 = &data_02134d30;
                            }
                            func_020c87d4(&data_02136274, &data_02135590, r2);
                            if (data_0213fcc4 != 9) {
                                data_0213fcd4 = t;
                            }
                            var_r0 = 0;
                        } else {
                            var_r0 = 1;
                        }
                    }
                    if (var_r0 != 0) {
                        return;
                    }
                    func_020c87d4(&data_02136224);
                    return;
                }
                goto set4;
            }
            if (data_0213fcd0 == 5) {
                t = func_02106664(&data_021400c0, 0xD, 0xF, 0x7C, (s32) data_0213fc88);
                if (t != 0) {
                    if ((t >= 0) && ((u32) t < 0x17)) {
                        r2 = ((u8 **) &data_02135698)[t];
                    } else {
                        r2 = &data_02134d30;
                    }
                    func_020c87d4(&data_02136210, &data_0213528c, r2);
                    if (data_0213fcc4 != 9) {
                        data_0213fcd4 = t;
                    }
                    return;
                }
                func_020c87d4(&data_021361dc);
                func_020c87d4(&data_02135758, ((u8 **) &data_02135670)[data_0213fcc4]);
                f5            = 5;
                data_0213fcc4 = f5;
                func_020c87d4(&data_02135760, ((u8 **) &data_02135670)[f5]);
                return;
            }
        set4:
            func_020c87d4(&data_02135758, ((u8 **) &data_02135670)[data_0213fcc4]);
            f4            = 4;
            data_0213fcc4 = f4;
            func_020c87d4(&data_02135760, ((u8 **) &data_02135670)[f4]);
            return;
        default:
        case 1:
            func_020c87d4(&data_021361bc, h4);
        case 2:
        case 3:
            return;
    }
}
