/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c8cec();
s32 func_02106b78();
s32 func_02106ec0();

extern u8 func_020c5338;
extern u8 data_02136774;
extern u8 data_021357a0;
extern u8 data_02136760;
extern u8 data_02135244;
extern u8 data_02135bac;
extern u8 data_021366d0;
extern u8 data_0213679c;
extern u8 data_02135aa4;
extern u8 data_02135c6c;
extern u8 data_02135b84;
extern u8 data_02135c74;
extern u8 data_02136788;
extern u8 data_02136738;
extern u8 data_021366f0;
extern u8 data_02136724;
extern u8 data_021405a0;
extern u8 data_02140240;
extern u8 data_02140160;
extern s32 data_02140190;
extern s32 data_0214019c;
extern s32 data_021401a8;
extern s32 data_021401ac;

void func_020c4fe4(u8 *arg0) {
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

    func_020c8cec(&data_02136774, &data_021357a0, data_0214019c);
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
            r2 = ((u8 **) &data_02135bac)[h];
        } else {
            r2 = &data_02135244;
        }
        func_020c8cec(&data_02136760, &data_021357a0, r2);
        h2 = *(u16 *) (arg0 + 2);
        if (data_0214019c != 9) {
            data_021401ac = h2;
        }
        return;
    }
    h4 = *(u16 *) (arg0 + 4);
    k  = h4 - 0xA;
    switch (k) {
        case 0:
            if (data_021401a8 == 3) {
                cur = data_0214019c;
                if (cur == 6) {
                    return;
                }
                if (cur == 4) {
                    func_020c8cec(&data_0213679c, &data_02135aa4, cur);
                    data_02140190 = 0x26;
                    if (data_0214019c == 6) {
                        var_r0 = 1;
                    } else if (data_0214019c != 4) {
                        var_r0 = 0;
                    } else {
                        func_020c8cec(&data_02135c6c, ((u8 **) &data_02135b84)[data_0214019c]);
                        f6            = 6;
                        data_0214019c = f6;
                        func_020c8cec(&data_02135c74, ((u8 **) &data_02135b84)[f6]);
                        t = func_02106ec0(&func_020c5338, &data_02140240);
                        if (t != 2) {
                            if ((t >= 0) && ((u32) t < 0x17)) {
                                r2 = ((u8 **) &data_02135bac)[t];
                            } else {
                                r2 = &data_02135244;
                            }
                            func_020c8cec(&data_02136788, &data_02135aa4, r2);
                            if (data_0214019c != 9) {
                                data_021401ac = t;
                            }
                            var_r0 = 0;
                        } else {
                            var_r0 = 1;
                        }
                    }
                    if (var_r0 != 0) {
                        return;
                    }
                    func_020c8cec(&data_02136738);
                    return;
                }
                goto set4;
            }
            if (data_021401a8 == 5) {
                t = func_02106b78(&data_021405a0, 0xD, 0xF, 0x7C, (s32) data_02140160);
                if (t != 0) {
                    if ((t >= 0) && ((u32) t < 0x17)) {
                        r2 = ((u8 **) &data_02135bac)[t];
                    } else {
                        r2 = &data_02135244;
                    }
                    func_020c8cec(&data_02136724, &data_021357a0, r2);
                    if (data_0214019c != 9) {
                        data_021401ac = t;
                    }
                    return;
                }
                func_020c8cec(&data_021366f0);
                func_020c8cec(&data_02135c6c, ((u8 **) &data_02135b84)[data_0214019c]);
                f5            = 5;
                data_0214019c = f5;
                func_020c8cec(&data_02135c74, ((u8 **) &data_02135b84)[f5]);
                return;
            }
        set4:
            func_020c8cec(&data_02135c6c, ((u8 **) &data_02135b84)[data_0214019c]);
            f4            = 4;
            data_0214019c = f4;
            func_020c8cec(&data_02135c74, ((u8 **) &data_02135b84)[f4]);
            return;
        default:
        case 1:
            func_020c8cec(&data_021366d0, h4);
        case 2:
        case 3:
            return;
    }
}
