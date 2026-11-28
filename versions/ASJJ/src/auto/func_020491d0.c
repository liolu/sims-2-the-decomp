/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s16 sx;
    s16 sy;
    u16 rot;
} In;

extern s16 data_0212ae60[];

static inline s16 SinIdx(int idx) {
    return data_0212ae60[(idx >> 4) << 1];
}

static inline s16 CosIdx(int idx) {
    return data_0212ae60[((idx >> 4) << 1) + 1];
}

static inline s32 FxMul(s32 a, s32 b) {
    return (s32) (((s64) a * b + 0x800) >> 12);
}

void func_020491d0(In *in, u8 *out, s32 n, s32 stride) {
    s32 i;
    for (i = 0; i < n; i++) {
        u16 rot = in->rot;
        s16 sy  = in->sy;
        s16 c   = CosIdx(rot);
        s16 sx  = in->sx;
        s16 s;
        *(s16 *) out = (s32) ((c * (s64) sx + 0x800) >> 12);
        out += stride;
        s            = SinIdx(rot);
        *(s16 *) out = FxMul(s, sx);
        out += stride;
        *(s16 *) out = FxMul(-s, sy);
        out += stride;
        *(s16 *) out = FxMul(c, sy);
        out += stride;
        in++;
    }
}
