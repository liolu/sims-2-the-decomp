/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0213d1d0;
extern u32 data_0213d1e0;
void func_0204a7a8(s32 arg0) {
    u32 i;
    u8 **list;
    u8 *temp_r4;
    for (i = 0; i < data_0213d1e0;) {
        list    = *(u8 ***) &data_0213d1d0;
        temp_r4 = list[i];
        if (*(s32 *) (temp_r4 + 0x40) != arg0) {
            i += 1;
        } else {
            data_0213d1e0 -= 1;
            list[i]             = list[data_0213d1e0];
            list                = *(u8 ***) &data_0213d1d0;
            list[data_0213d1e0] = temp_r4;
        }
    }
}
