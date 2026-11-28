/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02104948();                                /* extern */

u16 func_02104f60(void) {
    if (func_02104948() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
