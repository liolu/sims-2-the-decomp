/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u16 a;
    u8 b;
    u8 c;
} E4;
extern volatile u8 data_021424f8[];
extern u8 data_02142848[];
extern E4 data_02136c10[];
void func_020d8ff8(void);
void func_020d8a70(void);
void func_020d3c5c(s32, s32, s32, s32);
void func_020d498c(s32, s32, s32);
void func_020d8ea0(void);

void func_020d5268(u32 arg0) {
    u32 i = arg0;
    if (data_021424f8[0xb] & 0x20) {
        return;
    }
    if (i >= 0x2a) {
        i = 0;
    }
    if (data_021424f8[0] == 1) {
        data_021424f8[0xb] |= 0x80;
        func_020d8ff8();
        if (data_021424f8[0xb] & 0x80) {
            if (data_021424f8[0xb] & 0x40) {
                if (!(*(u32 *) (data_02142848 + 0xc) & 0xc)) {
                    func_020d8a70();
                }
            }
            data_021424f8[0xb] &= ~0xc0;
        }
    }
    func_020d3c5c(0, 0xff, 0x40, 4);
    func_020d498c(2, data_02136c10[i].a, data_02136c10[i].b);
    if (data_021424f8[0] != 1) {
        return;
    }
    data_021424f8[0xb] |= 0x80;
    func_020d8ea0();
    data_021424f8[0xb] &= ~0xc0;
}
