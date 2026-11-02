/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 *data_0213e580;
extern u32 data_02121df4[];
s32 func_02083b4c(void) {
    u32 key;
    s32 i;
    key = *(u32 *) (data_0213e580 + 0xF4);
    for (i = 0; i < 0x18; i++) {
        if (data_02121df4[i] == key) {
            return i;
        }
    }
    return i;
}
