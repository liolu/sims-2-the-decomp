/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_02063e88(s32 *arg0) {
    u8 *p = (u8 *) arg0 + 4 + *arg0;
    if (*p != 0) {
        *p = *p - 1;
    }
}
