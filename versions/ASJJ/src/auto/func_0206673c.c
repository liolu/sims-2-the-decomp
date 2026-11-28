/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u32 *data_0213df5c;
s32 func_0206673c(u8 *arg0) {
    s32 n;
    n = *(s32 *) (arg0 + 0x4) + 1;
    return (data_0213df5c[n >> 5] & (1u << (n & 31))) != 0;
}
