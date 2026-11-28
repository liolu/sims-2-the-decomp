/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02104d20();                                /* extern */

u16 func_02105338(void) {
    if (func_02104d20() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
