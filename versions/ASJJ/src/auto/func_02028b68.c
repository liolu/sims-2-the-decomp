/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 v;
} W;
void func_0208ae48(u8 *, u8, W);
extern u8 *data_0213df5c;

void func_02028b68(u8 *arg0) {
    volatile s32 fr[2];
    u8 *g;
    enum {
        KK = 0x1000
    } k;

    g = data_0213df5c + 0x4650;
    if (arg0[0x34] == 0) {
        func_0208ae48(g, (u8) * (s32 *) (arg0 + 0x2C), *(W *) (arg0 + 0x28));
        arg0[0x34] = 1;
    } else {
        k     = KK;
        fr[0] = k;
        fr[1] = k;
        if (*(s32 *) g >= k) {
            *(s8 *) (arg0 + 0x13) = 1;
        }
    }
    if (arg0[0x30] == 0) {
        *(s8 *) (arg0 + 0x13) = 1;
    }
}
