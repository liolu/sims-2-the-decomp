/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA24 {
    virtual void f0();
    virtual void f1();
    virtual void f2(void *a);
};

extern "C" u8 data_0213df5c;

extern "C" void func_02009474(void *arg0) {
    u8 *o;
    u16 i;
    u16 v;
    s32 end;
    s32 start;
    u16 r7;

    o = (u8 *) arg0;
    i = 0;
    for (v = 0; v <= 7; v++) {
        end = i + 5;
        while (i < end) {
            *(u16 *) (o + 0x250 + i * 2) = v;
            i++;
        }
    }
    end = i + 4;
    while (i < end) {
        *(u16 *) (o + 0x250 + i * 2) = 8;
        i++;
    }
    end = i + 8;
    if (i < end) {
        start = i;
        do {
            *(u16 *) (o + 0x250 + i * 2) = (u16) (i - start + 9);
            i++;
        } while (i < end);
    }
    end = i + 4;
    while (i < end) {
        *(u16 *) (o + 0x250 + i * 2) = 0x11;
        i++;
    }
    s32 *q;
    u8 cn;
    cn = 0x38;
    if (o[0x2f4] != 0 || ((q = (s32 *) (*(s32 *) &data_0213df5c + 0x47f8), q[1] == 0xa) && (u16) q[2] == 9)) {
        end = i + 2;
        while (i < end) {
            *(u16 *) (o + 0x250 + i * 2) = 0x12;
            i++;
        }
        cn += 2;
    }
    for (r7 = 0; r7 < cn; r7++) {
        ((VA24 *) (o + 0x24))->f2((u16 *) (o + 0x250 + r7 * 2));
    }
}
