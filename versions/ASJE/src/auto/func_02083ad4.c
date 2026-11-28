/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 *data_0213e440;
extern u32 data_02121cb8[];
s32 func_02083ad4(void) {
    u32 key;
    s32 i;
    key = *(u32 *) (data_0213e440 + 0xF4);
    for (i = 0; i < 0x18; i++) {
        if (data_02121cb8[i] == key) {
            return i;
        }
    }
    return i;
}
