/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fbd64(void);
void func_020fbd78(M2C_UNK);

extern s32 data_02146250;
extern s32 data_02146254;

void func_020fd8d8(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_020fbd64();
    if (data_02146254 == 0) {
        data_02146254 = arg0;
        data_02146250 = arg0;
    } else {
        *(M2C_UNK *) data_02146254 = arg0;
        data_02146254              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    func_020fbd78(temp_r0);
}
