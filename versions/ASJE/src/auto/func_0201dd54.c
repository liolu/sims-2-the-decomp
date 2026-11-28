/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_0201dd54(u8 *arg0) {
    u8 *q;
    s32 flag;
    *(s32 *) (arg0 + 76) = 0;
    *(s32 *) (arg0 + 80) = *(s32 *) (arg0 + 68);
    if (*(s32 *) (arg0 + 40) == 0) {
        *(s32 *) (arg0 + 40) = *(s32 *) (arg0 + 4);
    }
    flag = 0;
    q    = *(u8 **) (*(u8 **) (arg0 + 40) + 304);
    if (q != 0) {
        if (*(u8 *) (q + 28) != 0) {
            flag = 1;
        }
    }
    *(u8 *) (arg0 + 84) = flag;
}
