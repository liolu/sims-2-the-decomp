/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0204811c();
extern void *data_0213996c;
extern s32 data_02139a84;

s32 func_ov007_02149704(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) - 1);
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        temp_r0 = M2C_FIELD(data_0213996c, u16 *, 2) & 0x2FFF;
        if (temp_r0 == 0) {
            return temp_r0;
        }
    }
    func_0204811c(data_02139a84, 0x18, 0, 0, 0, 0);
    return func_0204811c(data_02139a84, 0x2E, 1, 0, 0, 0);
}
