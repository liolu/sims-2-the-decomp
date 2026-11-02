/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213d7b0;
extern u8 data_02139fa4;
void func_02048108(s32, s32, s32, s32, s32, s32);

void func_ov008_0214a2e4(void *a0, s32 arg1) {
    *(s32 *) ((u8 *) &data_0213d7b0 + 0xA4) = arg1;
    func_02048108(*(s32 *) &data_02139fa4, 46, 0, 0, 0, 0);
    func_02048108(*(s32 *) &data_02139fa4, 30, 1, 0, 0, arg1);
}
