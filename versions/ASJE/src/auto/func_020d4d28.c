/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020d70c8(s32 a, s32 b);
void func_020d8934(void);
extern u8 data_021423b8[];
extern u8 data_02142708[];

void func_020d4d28(s32 a, s32 b) {
    (((volatile u8 *) data_021423b8)[0xB]) = (((volatile u8 *) data_021423b8)[0xB]) | 0x80;
    func_020d70c8(a, b);
    if (((((volatile u8 *) data_021423b8)[0xB]) & 0x80) == 0) {
        return;
    }
    if ((((volatile u8 *) data_021423b8)[0xB]) & 0x40) {
        if ((*(s32 *) (data_02142708 + 0xC) & 0xC) == 0) {
            func_020d8934();
        }
    }
    (((volatile u8 *) data_021423b8)[0xB]) = (((volatile u8 *) data_021423b8)[0xB]) & ~0xC0;
}
