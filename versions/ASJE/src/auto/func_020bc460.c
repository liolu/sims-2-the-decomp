/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 func_02044324(s32);
extern s32 func_020444f4(s32);
void *func_020bc460(void *arg0, u32 arg1) {
    s32 r;
    *(s32 *) arg0              = 0;
    *(s16 *) ((u8 *) arg0 + 4) = 0;
    *(u16 *) ((u8 *) arg0 + 6) = 0xFFFF;
    *(s8 *) ((u8 *) arg0 + 8)  = 0;
    if (arg1 != 0xFFFF) {
        r = func_020444f4(arg1);
        if (r != 0) {
            *(s16 *) ((u8 *) arg0 + 4) = (s16) ((func_02044324(arg1) + 3) & ~3);
            *(s32 *) arg0              = r;
            *(s16 *) ((u8 *) arg0 + 6) = (s16) arg1;
            *(s8 *) ((u8 *) arg0 + 8)  = 1;
        }
    }
    return arg0;
}
