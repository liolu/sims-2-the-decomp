/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u16 a;
    u8 b;
    u8 c;
} E4;
extern volatile u8 data_02142018[];
extern u8 data_02142368[];
extern E4 data_021366fc[];
void func_020d8ae4(void);
void func_020d855c(void);
void func_020d3748(s32, s32, s32, s32);
void func_020d4478(s32, s32, s32);
void func_020d898c(void);

void func_020d4d54(u32 arg0) {
    u32 i = arg0;
    if (data_02142018[0xb] & 0x20) {
        return;
    }
    if (i >= 0x2a) {
        i = 0;
    }
    if (data_02142018[0] == 1) {
        data_02142018[0xb] |= 0x80;
        func_020d8ae4();
        if (data_02142018[0xb] & 0x80) {
            if (data_02142018[0xb] & 0x40) {
                if (!(*(u32 *) (data_02142368 + 0xc) & 0xc)) {
                    func_020d855c();
                }
            }
            data_02142018[0xb] &= ~0xc0;
        }
    }
    func_020d3748(0, 0xff, 0x40, 4);
    func_020d4478(2, data_021366fc[i].a, data_021366fc[i].b);
    if (data_02142018[0] != 1) {
        return;
    }
    data_02142018[0xb] |= 0x80;
    func_020d898c();
    data_02142018[0xb] &= ~0xc0;
}
