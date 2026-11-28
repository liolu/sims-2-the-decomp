/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u8 v;
    u8 a;
    u8 b;
    u8 f : 6;
    u8 g : 2;
} E4;
u8 func_02082d58(E4 *arg0, s32 arg1) {
    u8 i;
    for (i = 0; i < 0x1E; i++) {
        if (arg1 == arg0[i].f) {
            return arg0[i].v;
        }
    }
    return 0xD8;
}
