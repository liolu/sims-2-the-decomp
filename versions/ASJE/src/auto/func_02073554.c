/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_02077900(void *);
extern u8 *volatile data_0213e2f4;
extern void *data_0213e440;
s32 func_02073554(void) {
    u8 t;
    u8 *b;
    u8 *a;
    if (M2C_FIELD(data_0213e440, s32 *, 0xF4) != 0x14) {
        return 0;
    }
    b = data_0213e2f4;
    a = b + 0x2F78;
    t = b[0x2F78];
    if (t == 0) {
        return 0;
    }
    if ((t == 3) && (func_02077900(a) != 0)) {
        return 0;
    }
    if (data_0213e2f4[0x2F78] == 4) {
        return 0;
    }
    return 1;
}
