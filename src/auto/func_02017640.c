/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern void func_02016fb4(void *);
extern u8 data_0212ff10;
void *func_02017640(void *arg0) {
    u8 *p;
    *(u8 **) arg0 = &data_0212ff10;
    p             = *(u8 **) ((u8 *) arg0 + 0x74);
    if (p != NULL) {
        *(s32 *) (p + 4) = *(s32 *) (p + 4) - 1;
        if (*(s32 *) (p + 4) == 0 && p != NULL) {
            (*(void (**)(void *))(*(u8 **) p + 4))(p);
        }
    }
    func_02016fb4(arg0);
    return arg0;
}
