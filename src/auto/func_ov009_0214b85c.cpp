/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct V3 {
    s32 x;
    s32 y;
    s32 z;
};
struct W {
    s32 v;
};
extern "C" {
void func_020488d8(void *, W, s32);
void func_02048988(void *, W, W);
extern u8 data_0213a278[];
extern s32 data_ov009_0214c220;

void func_ov009_0214b85c(s32 *out, V3 v) {
    s32 t1;
    s32 t2;
    volatile s32 loc[4];

    t1     = (s32) (((long long) v.x * data_ov009_0214c220 + 0x800) >> 12);
    loc[0] = t1;
    loc[2] = t1;
    out[0] = t1;
    t2     = (s32) (((long long) v.y * data_ov009_0214c220 + 0x800) >> 12);
    loc[1] = t2;
    loc[3] = t2;
    out[1] = t2;
    out[2] = v.z;
    func_020488d8(data_0213a278, *(W *) &v.z, 0);
    func_02048988(data_0213a278, *(W *) &out[0], *(W *) &out[1]);
}
}
