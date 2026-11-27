/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef enum {
    K2 = 2
} E2;
typedef enum {
    K9 = 9
} E9;

typedef struct {
    s32 p;
    u16 f4;
    u16 f6;
    u16 f8;
    u16 fa;
    u16 fc;
} Q;

void func_020c8cec();
s32 func_02105474(void);
u16 func_02105284(void);
s32 func_0210588c();
void func_020c4798(void);
void func_020c5674(void);
extern s32 data_0214019c;
extern u8 data_02135c94[];
extern u8 data_02135260[];
extern s32 data_02135b84[];
extern u8 data_02135c6c[];
extern u8 data_02135c74[];
extern u16 data_02140170;
extern s32 data_021401a0;
extern Q data_021401e0;
extern u16 data_02140174;
extern u8 data_02136414[];
extern u8 data_02135434[];
extern s32 data_02135bac[];
extern u8 data_02136400[];
extern s32 data_021401ac;
extern u8 data_021363ec[];
extern u8 data_021402e0[];
extern u8 data_02135244[];
extern u8 data_021363d8[];

s32 func_020c53dc(u16 *arg0, u16 arg1) {
    s32 r4;
    u32 r3;
    E2 k2;
    E9 k9;
    s32 r2;
    s32 ret;
    s32 res;
    u16 r1h;

    func_020c8cec(data_02135c94, data_02135260, data_0214019c);
    func_020c8cec(data_02135c6c, data_02135b84[data_0214019c], data_0214019c);
    k2            = K2;
    data_0214019c = k2;
    func_020c8cec(data_02135c74, data_02135b84[k2], &data_0214019c);
    data_02140170    = arg1;
    data_021401a0    = (s32) func_020c4798;
    data_021401e0.f4 = 0;
    data_02140174    = 0;
    data_021401e0.fc = arg0[2];
    data_021401e0.fa = arg0[1];
    data_021401e0.f8 = arg0[0];
    func_020c8cec(data_02136414, data_02135434, data_0214019c);

    res = func_02105474();
    if (res == 0x8000) {
        func_020c8cec(data_02136400, data_02135434, data_02135bac[3]);
        if (data_0214019c != 9) {
            data_021401ac = 3;
        }
        ret = 0;
    } else if (res == 0) {
        func_020c8cec(data_021363ec, data_02135434, data_02135bac[0x58 / 4]);
        if (data_0214019c != 9) {
            data_021401ac = 0x16;
        }
        ret = 0;
    } else {
        r1h = data_02140170;
        if (r1h == 0) {
            r3 = data_021401e0.f4;
            do {
                r3 = (u16) (r3 + 1);
                if (r3 > 0x10) {
                    r3 = 1;
                }
            } while ((res & (1 << (r3 - 1))) == 0);
            data_021401e0.f4 = r3;
        } else {
            data_021401e0.f4 = r1h;
        }
        data_021401e0.f6 = func_02105284();
        data_021401e0.p  = (s32) data_021402e0;
        r4               = func_0210588c(func_020c5674, &data_021401e0);
        if (r4 != 2) {
            if (r4 >= 0 && (u32) r4 < 0x17) {
                r2 = data_02135bac[r4];
            } else {
                r2 = (s32) data_02135244;
            }
            func_020c8cec(data_021363d8, data_02135434, r2);
            if (data_0214019c != 9) {
                data_021401ac = r4;
            }
            ret = 0;
        } else {
            ret = 1;
        }
    }

    if (ret != 0) {
        return 1;
    }
    func_020c8cec(data_02135c6c, data_02135b84[data_0214019c], data_0214019c);
    k9            = K9;
    data_0214019c = k9;
    func_020c8cec(data_02135c74, data_02135b84[k9], &data_0214019c);
    return 0;
}
