/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_0213fcac;
extern s32 data_0213fcd4;
extern volatile u32 data_0213fcb8;

void func_020fb9fc(u32 arg0);

s32 func_020c760c(u32 arg0) {
    s32 n = data_0213fcac;

    while (data_0213fcb8 != arg0 && data_0213fcd4 == 0 && n > 0) {
        func_020fb9fc(0x101D0);
        data_0213fcb8;
        n--;
    }
    if (data_0213fcd4 != 0 || n == 0) {
        return 0;
    }
    return 1;
}
