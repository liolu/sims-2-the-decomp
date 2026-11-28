/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u16 a;
    u8 b;
    u8 c;
} E4;
extern volatile u8 data_021423b8[];
extern u8 data_02142708[];
extern E4 data_02136ad0[];
void func_020d8ebc(void);
void func_020d8934(void);
void func_020d3b20(s32, s32, s32, s32);
void func_020d4850(s32, s32, s32);
void func_020d8d64(void);

void func_020d512c(u32 arg0) {
    u32 i = arg0;
    if (data_021423b8[0xb] & 0x20) {
        return;
    }
    if (i >= 0x2a) {
        i = 0;
    }
    if (data_021423b8[0] == 1) {
        data_021423b8[0xb] |= 0x80;
        func_020d8ebc();
        if (data_021423b8[0xb] & 0x80) {
            if (data_021423b8[0xb] & 0x40) {
                if (!(*(u32 *) (data_02142708 + 0xc) & 0xc)) {
                    func_020d8934();
                }
            }
            data_021423b8[0xb] &= ~0xc0;
        }
    }
    func_020d3b20(0, 0xff, 0x40, 4);
    func_020d4850(2, data_02136ad0[i].a, data_02136ad0[i].b);
    if (data_021423b8[0] != 1) {
        return;
    }
    data_021423b8[0xb] |= 0x80;
    func_020d8d64();
    data_021423b8[0xb] &= ~0xc0;
}
