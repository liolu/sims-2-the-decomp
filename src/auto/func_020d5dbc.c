/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020d87f0(s32 a);
void func_020d8a70(void);
extern u8 data_021424f8[];
extern u8 data_02142848[];

void func_020d5dbc(s32 a) {
    (((volatile u8 *) data_021424f8)[0xB]) = (((volatile u8 *) data_021424f8)[0xB]) | 0x80;
    func_020d87f0(a);
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
