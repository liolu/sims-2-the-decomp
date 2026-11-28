/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad[8];
    s32 cnt;
    s32 cnt2;
    u8 buf[1];
} S;

void func_0208b35c(S *arg0, s32 arg1) {
    volatile s32 pad;
    s32 i;
    s32 n;
    n         = arg0->cnt;
    i         = 0;
    arg0->cnt = 0;
    if (n > 0) {
        do {
            if (arg1 != arg0->buf[i]) {
                arg0->buf[arg0->cnt++] = arg0->buf[i];
            }
            i += 1;
        } while (i < n);
    }
    arg0->cnt2 = arg0->cnt;
}
