/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0212fa78;
typedef struct {
    u8 a, b, c, d;
} B4;
s32 func_0200df7c(u8 *arg0, s32 arg1) {
    B4 loc = *(B4 *) &data_0212fa78;
    return (arg0[arg1 + 572] - ((u8 *) &loc)[arg1]) & 0xFF;
}
