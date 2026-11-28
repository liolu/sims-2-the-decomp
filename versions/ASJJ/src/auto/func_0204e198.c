/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_0211e214;
typedef struct {
    s32 a;
    s32 b[5];
} S;
s32 func_0204e198(s32 a0, s32 idx, s32 flag) {
    if (flag != 0) {
        return *(s32 *) ((u8 *) &data_0211e214 + idx * 0x18) - 0x14;
    }
    return *(s32 *) ((u8 *) &data_0211e214 + idx * 0x18);
}
