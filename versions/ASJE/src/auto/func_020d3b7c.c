/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_021423a0[];
extern u8 *data_02142394;
extern u8 data_02142708[];
extern u8 data_02142408[];

void func_020d1088();
void func_020d0638();
void func_020d0f04();
void func_020d2864();
s32 func_020d2aa0();

void func_020d3b7c(s32 arg0) {
    u8 *p;
    s32 r4;
    u8 *c;
    u8 *e;
    u8 *t;
    u32 b;

    p = data_021423a0[arg0];
    if (p == NULL) {
        return;
    }
    data_02142394 = p;
    if (p[0x28] != 1) {
        return;
    }
    r4 = data_02142708[0x10] - 1;
    while (r4 >= 0) {
        c = data_02142394;
        e = c + 0x93C + (r4 << 5);
        b = e[0xA];
        if (b != 0xFF && *(s32 *) (data_02142408 + r4 * 0x18) == 0 && c[0x3B] == data_02142708[r4 + 0x634]) {
            t = c + b * 0x24;
            if (r4 == t[0x44]) {
                t[0x44] = 0xFF;
            }
            e[0xA]                    = 0xFF;
            data_02142708[r4 + 0x634] = 3;
        }
        r4--;
    }
    if (data_02142394[0x37]-- == 0) {
        data_02142394[0x37] = 0;
        data_02142394[0x2A]--;
        if (data_02142394[0x2A] == 0) {
            data_02142394[0x2A] = data_02142394[0x2E];
            if (data_02142394[0x36]-- == 0) {
                data_02142394[0x36] = 0;
                if (((u16 *) (data_02142394 + 0x22))[0]-- == 0) {
                    if (func_020d2aa0() == 1) {
                        return;
                    }
                    ((u16 *) (data_02142394 + 0x22))[0]--;
                }
                func_020d2864();
            }
            if (!(data_02142394[0x2F] & 0x10)) {
                func_020d1088();
            }
        } else {
            func_020d1088();
        }
    } else {
        func_020d1088();
    }
    func_020d0638();
    func_020d0f04();
}
