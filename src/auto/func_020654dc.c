/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 w[9];
} Blk9;

void func_020654dc(u8 *arg0, u8 *arg1) {
    *(Blk9 *) (arg0 + 0x47AC) = *(Blk9 *) arg1;
    *(u16 *) (arg0 + 0x47D0)  = *(u16 *) (arg1 + 0x24);
    *(s32 *) arg0             = *(s32 *) arg0 | 1;
}
