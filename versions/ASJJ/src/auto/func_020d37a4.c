/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_02142000[];
extern u8 *data_02141ff4;
extern u8 data_02142368[];
extern u8 data_02142068[];

void func_020d0cb0();
void func_020d0260();
void func_020d0b2c();
void func_020d248c();
s32 func_020d26c8();

void func_020d37a4(s32 arg0) {
    u8 *p;
    s32 r4;
    u8 *c;
    u8 *e;
    u8 *t;
    u32 b;

    p = data_02142000[arg0];
    if (p == NULL) {
        return;
    }
    data_02141ff4 = p;
    if (p[0x28] != 1) {
        return;
    }
    r4 = data_02142368[0x10] - 1;
    while (r4 >= 0) {
        c = data_02141ff4;
        e = c + 0x93C + (r4 << 5);
        b = e[0xA];
        if (b != 0xFF && *(s32 *) (data_02142068 + r4 * 0x18) == 0 && c[0x3B] == data_02142368[r4 + 0x634]) {
            t = c + b * 0x24;
            if (r4 == t[0x44]) {
                t[0x44] = 0xFF;
            }
            e[0xA]                    = 0xFF;
            data_02142368[r4 + 0x634] = 3;
        }
        r4--;
    }
    if (data_02141ff4[0x37]-- == 0) {
        data_02141ff4[0x37] = 0;
        data_02141ff4[0x2A]--;
        if (data_02141ff4[0x2A] == 0) {
            data_02141ff4[0x2A] = data_02141ff4[0x2E];
            if (data_02141ff4[0x36]-- == 0) {
                data_02141ff4[0x36] = 0;
                if (((u16 *) (data_02141ff4 + 0x22))[0]-- == 0) {
                    if (func_020d26c8() == 1) {
                        return;
                    }
                    ((u16 *) (data_02141ff4 + 0x22))[0]--;
                }
                func_020d248c();
            }
            if (!(data_02141ff4[0x2F] & 0x10)) {
                func_020d0cb0();
            }
        } else {
            func_020d0cb0();
        }
    } else {
        func_020d0cb0();
    }
    func_020d0260();
    func_020d0b2c();
}
