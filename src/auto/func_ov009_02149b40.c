/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020d5604(s32 arg0);

void func_ov009_02149b40(u8 *arg0) {
    if (*(s32 *) (arg0 + 0xE0) != -1) {
        func_020d5604(*(s32 *) (arg0 + 0xE0));
        *(s32 *) (arg0 + 0xE0) = -1;
    }
}
