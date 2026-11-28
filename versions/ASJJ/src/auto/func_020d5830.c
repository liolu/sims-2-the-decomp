/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020d82c0(s32 a);
void func_020d855c(void);
extern u8 data_02142018[];
extern u8 data_02142368[];

void func_020d5830(s32 a) {
    (((volatile u8 *) data_02142018)[0xB]) = (((volatile u8 *) data_02142018)[0xB]) | 0x80;
    func_020d82c0(a);
    if (((((volatile u8 *) data_02142018)[0xB]) & 0x80) == 0) {
        return;
    }
    if ((((volatile u8 *) data_02142018)[0xB]) & 0x40) {
        if ((*(s32 *) (data_02142368 + 0xC) & 0xC) == 0) {
            func_020d855c();
        }
    }
    (((volatile u8 *) data_02142018)[0xB]) = (((volatile u8 *) data_02142018)[0xB]) & ~0xC0;
}
