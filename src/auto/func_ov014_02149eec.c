/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02050448(void);
M2C_UNK func_02051a50(s32, s32, s32);
s32 func_02052258(s32);
s32 func_02051338(s32, s32, s32, s32, s32);
M2C_UNK func_02050390(void);

s32 func_ov014_02149eec(s32 arg0, s32 arg1) {
    s32 r9 = arg1;
    s32 i;
    s32 v;

    func_02050448();
    func_02051a50(3, 0, -1);
    for (i = 0; i < 5; i++) {
        v  = func_02052258(i + 0x95F);
        r9 = func_02051338(r9, 0x37, 0x17 + i * 0x20, v, 0);
    }
    func_02050390();
    return r9;
}
