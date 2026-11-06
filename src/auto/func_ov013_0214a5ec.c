/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 a;
    u16 b;
} U16Pair;

extern u8 data_02139fa4;
extern u8 data_ov013_0214b010;
void func_020509e8(void *, s32);
void func_0205871c(void *, s32, s32, s32, s32, s32);
void func_020d59bc(s32);

s32 func_ov013_0214a5ec(u8 *arg0) {
    volatile U16Pair pr;
    volatile u16 *q;
    u16 i;
    u16 cnt;
    s32 r0 = *(s32 *) (arg0 + 0xD0);

    if (r0 != 1) {
        return r0;
    }
    if (*(u16 *) (arg0 + 0xD8) > 2) {
        q    = (volatile u16 *) &pr;
        cnt  = 0;
        q[0] = cnt;
        q[1] = cnt;
        i    = cnt;
        do {
            u8 *e = arg0 + i * 12;
            if (*(s8 *) (e + 0x2D) == 2) {
                cnt++;
                if (*(s32 *) (e + 0x24) == *(s32 *) (arg0 + 0xC8)) {
                    pr.a++;
                }
                if (*(s32 *) (e + 0x24) == *(s32 *) (arg0 + 0xCC)) {
                    pr.b++;
                }
            }
            i++;
        } while (i < 8);

        if (pr.a == 3 || pr.b == 3) {
            func_020509e8(*(void **) (arg0 + 0x10), 0);
            func_0205871c(*(void **) &data_02139fa4, 0x13D, -1, 0, 1, 1);
            func_020d59bc(*(s32 *) ((u8 *) &data_ov013_0214b010 + *(s32 *) (arg0 + 8) * 16));
            return 2;
        }
        if (cnt == 5) {
            func_0205871c(*(void **) &data_02139fa4, 0x13E, -1, 0, 2, 1);
            return 3;
        }
    }
    return 1;
}
