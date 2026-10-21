/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02104e5c();                                /* extern */

u16 func_02105474(void) {
    if (func_02104e5c() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
