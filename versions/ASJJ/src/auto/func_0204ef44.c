/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0213d3fc[];
void func_0204ef44(void) {
    u8 *p               = data_0213d3fc;
    s32 a               = 0x3F;
    s32 b               = 1;
    s32 c               = 0;
    *(s32 *) (p + 8)    = a;
    *(s32 *) p          = b;
    *(s32 *) (p + 4)    = c;
    *(s32 *) (p + 0x28) = a;
    *(s32 *) (p + 0x20) = b;
    *(s32 *) (p + 0x24) = c;
}
