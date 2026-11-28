/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_02121470;
extern s32 data_0213df5c;
u16 func_0208265c(u8 *arg0, s32 arg1) {
    u8 *t;
    t = (u8 *) data_0213df5c + 0x47F8;
    if (*(s32 *) (t + 4) == 9 && (u16) * (s32 *) (t + 8) == 0x13) {
        return (*(u16 **) (&data_02121470 + 0x140))[arg1];
    }
    return (*(u16 **) (&data_02121470 + *(u16 *) (arg0 + 0x18) * 0x14))[arg1];
}
