/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u8 a, b, c, d;
} B4;
extern B4 data_0212fa78;
u8 func_0200e168(s32 arg0) {
    B4 t = data_0212fa78;
    return ((u8 *) &t)[arg0];
}
