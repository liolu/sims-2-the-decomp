/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 v;
} W;
void func_0203f690(void *, W, s32);

void func_0203f5c4(u8 *arg0) {
    volatile s32 fr[17];
    enum {
        Z = 0
    } z;
    s32 ip;
    s32 r3;
    s32 r1;
    enum {
        K = 0x1000
    } r2;
    if (arg0[0x14] == 0) {
        return;
    }
    z     = 0;
    fr[1] = z;
    fr[8] = z;
    ip    = *(volatile s32 *) (arg0 + 0x10);
    if (ip == z) {
        return;
    }
    r3     = *(volatile s32 *) (arg0 + 0x10);
    r2     = 0x1000;
    fr[9]  = r3;
    r1     = *(s32 *) (arg0 + 0xc) + r3;
    fr[0]  = r1;
    fr[2]  = r2;
    fr[10] = r2;
    if (r1 >= r2) {
        r1                     = -ip;
        fr[3]                  = r2;
        fr[11]                 = r2;
        fr[0]                  = r2;
        fr[4]                  = r1;
        fr[12]                 = r1;
        *(s32 *) (arg0 + 0x10) = r1;
    } else {
        fr[5]  = z;
        fr[13] = z;
        if (r1 <= z) {
            r1                     = -ip;
            fr[6]                  = z;
            fr[14]                 = z;
            fr[0]                  = z;
            fr[7]                  = r1;
            fr[15]                 = r1;
            *(s32 *) (arg0 + 0x10) = r1;
        }
    }
    func_0203f690(arg0, *(W *) fr, 1);
}
