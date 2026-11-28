/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_021423a0;
extern s32 data_02142394;
extern u8 data_02142708;
extern u8 data_02142408;

void func_020d3e0c(u8);
void func_020d3d3c(u8);

void func_020d45d4(s32 arg0) {
    u8 *obj;
    s32 n;
    s32 ip;
    u8 *r3;
    u8 *r2;
    s32 k;
    u8 *src;

    obj = (u8 *) ((s32 *) &data_021423a0)[arg0];
    if (obj == NULL) {
        return;
    }
    *(u8 **) &data_02142394 = obj;
    if (obj[0x28] != 2) {
        return;
    }
    n = (&data_02142708)[0x10] - 1;
    if (n < 0) {
        goto done;
    }
    ip = n * 0x18;
    r3 = &data_02142708 + n;
    r2 = &data_02142408 + ip;
    do {
        if (*(s32 *) (*(u8 **) &data_02142394 + ip + 0xd3c) != 0) {
            if (r3[0x634] == 3) {
                src             = *(u8 **) &data_02142394 + 0xd3c + ip;
                ((s32 *) r2)[0] = ((s32 *) src)[0];
                ((s32 *) r2)[1] = ((s32 *) src)[1];
                ((s32 *) r2)[2] = ((s32 *) src)[2];
                ((s32 *) r2)[3] = ((s32 *) src)[3];
                ((s32 *) r2)[4] = ((s32 *) src)[4];
                ((s32 *) r2)[5] = ((s32 *) src)[5];
                r3[0x634]       = (*(u8 **) &data_02142394)[0x3b];
            } else {
                k = (*(u8 **) &data_02142394)[(n << 5) + 0x946];
                if (k != 0xff) {
                    u8 *q = *(u8 **) &data_02142394 + k * 0x24;
                    if (n == q[0x44]) {
                        q[0x44] = 0xff;
                    }
                    (*(u8 **) &data_02142394)[(n << 5) + 0x946] = 0xff;
                }
            }
            *(s32 *) (*(u8 **) &data_02142394 + ip + 0xd3c) = 0;
        }
        ip -= 0x18;
        r3 -= 1;
        r2 -= 0x18;
        n -= 1;
    } while (n >= 0);
done:
    func_020d3e0c((*(u8 **) &data_02142394)[0x3b]);
    func_020d3d3c((*(u8 **) &data_02142394)[0x3b]);
    (*(u8 **) &data_02142394)[0x28] = 1;
}
