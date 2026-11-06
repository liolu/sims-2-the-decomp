/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020d7204(s32 a, s32 b);
void func_020d8a70(void);
extern u8 data_021424f8[];
extern u8 data_02142848[];

void func_020d4e64(s32 a, s32 b) {
    (((volatile u8 *) data_021424f8)[0xB]) = (((volatile u8 *) data_021424f8)[0xB]) | 0x80;
    func_020d7204(a, b);
    if (((((volatile u8 *) data_021424f8)[0xB]) & 0x80) == 0) {
        return;
    }
    if ((((volatile u8 *) data_021424f8)[0xB]) & 0x40) {
        if ((*(s32 *) (data_02142848 + 0xC) & 0xC) == 0) {
            func_020d8a70();
        }
    }
    (((volatile u8 *) data_021424f8)[0xB]) = (((volatile u8 *) data_021424f8)[0xB]) & ~0xC0;
}
