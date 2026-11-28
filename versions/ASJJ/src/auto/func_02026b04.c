/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0213e0a8;
extern u8 data_02139a84;
extern void func_02067a18(void *, s32);
void func_02026b04(u8 *arg0) {
    u8 *g;
    u8 *m;
    u8 *mm;
    u8 *m2;
    s32 v;
    s32 k;
    g = *(u8 **) &data_0213e0a8;
    if (*(s32 *) (arg0 + 4) == *(s32 *) (g + 0xf8)) {
        m  = *(u8 **) &data_02139a84;
        mm = *(u8 **) (m + 0xdac);
        v  = (mm != NULL) ? *(s32 *) (mm + 4) : 0x32;
        if (v == 0xc) {
            k  = *(s32 *) (arg0 + 0x28);
            m2 = *(u8 *volatile *) (m + 0xdac);
            if (k != -1) {
                *(s32 *) (m2 + 0x6c) = k;
            }
            if (arg0[0x2c] != 0) {
                func_02067a18(m2, *(s32 *) (arg0 + 0x30));
            }
        }
    }
    *(u8 *) (arg0 + 0x13) = 1;
}
