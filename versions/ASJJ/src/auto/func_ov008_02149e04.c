/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213d290;
extern u8 data_02139a84;
void func_0204811c(s32, s32, s32, s32, s32, s32);

void func_ov008_02149e04(void *a0, s32 arg1) {
    *(s32 *) ((u8 *) &data_0213d290 + 0xA4) = arg1;
    func_0204811c(*(s32 *) &data_02139a84, 46, 0, 0, 0, 0);
    func_0204811c(*(s32 *) &data_02139a84, 30, 1, 0, 0, arg1);
}
