/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02048108();
extern void *data_02139e8c;
extern s32 data_02139fa4;

s32 func_ov007_02149be4(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) - 1);
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        temp_r0 = M2C_FIELD(data_02139e8c, u16 *, 2) & 0x2FFF;
        if (temp_r0 == 0) {
            return temp_r0;
        }
    }
    func_02048108(data_02139fa4, 0x18, 0, 0, 0, 0);
    return func_02048108(data_02139fa4, 0x2E, 1, 0, 0, 0);
}
