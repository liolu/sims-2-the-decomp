/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020fbea0(void);
void func_020fbeb4(M2C_UNK);

extern s32 data_02146390;
extern s32 data_02146394;

void func_020fda14(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_020fbea0();
    if (data_02146394 == 0) {
        data_02146394 = arg0;
        data_02146390 = arg0;
    } else {
        *(M2C_UNK *) data_02146394 = arg0;
        data_02146394              = arg0;
    }
    *(M2C_UNK *) arg0 = 0;
    func_020fbeb4(temp_r0);
}
