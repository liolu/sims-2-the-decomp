/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u32 *data_0213e434;
s32 func_02066728(u8 *arg0) {
    s32 n;
    n = *(s32 *) (arg0 + 0x4) + 1;
    return (data_0213e434[n >> 5] & (1u << (n & 31))) != 0;
}
