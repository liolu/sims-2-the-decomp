/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02045438(void *arg0, s32 arg1) {
    s32 prev;
    u16 r4;
    s32 cur;
    u8 *ip;
    ip                          = (u8 *) arg0 + arg1 * 4;
    cur                         = *(s32 *) (ip + 12);
    r4                          = 1;
    *(s32 *) ((u8 *) arg0 + 32) = cur;
    if ((s32) * (u8 *) ((u8 *) arg0 + 50) > 1) {
        do {
            prev                = cur;
            cur                 = r4 * 12 + *(s32 *) (ip + 12);
            *(s32 *) (prev + 4) = cur;
            r4                  = (u16) (r4 + 1);
        } while ((s32) r4 < (s32) * (u8 *) ((u8 *) arg0 + 50));
    }
    *(s32 *) ((u8 *) arg0 + 36) = cur;
    *(u16 *) ((u8 *) arg0 + 40) = (u16) (*(u16 *) ((u8 *) arg0 + 40) + *(u8 *) ((u8 *) arg0 + 50));
    return 1;
}
