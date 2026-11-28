/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020d6e74(s32 a, s32 b);
void func_020d855c(void);
extern u8 data_02142018[];
extern u8 data_02142368[];

void func_020d4a50(s32 a, s32 b) {
    (((volatile u8 *) data_02142018)[0xB]) = (((volatile u8 *) data_02142018)[0xB]) | 0x80;
    func_020d6e74(a, b);
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
