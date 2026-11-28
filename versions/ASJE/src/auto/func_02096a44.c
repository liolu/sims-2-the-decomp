/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_0213e440;
extern s32 data_0213e2f4;
extern u8 *data_02139e64;

void func_02001944(s32 a);
void func_02001914(void);
void func_02018af8(void *p, s32 a, void *q, s32 b);
void func_020645f4(s32 a, s32 b, s32 c);
void func_0208b35c(u8 *o, s32 v);
void func_0206798c(void *p, s32 v);

s32 func_02096a44(u8 *arg0, s32 idx) {
    u8 fr[2];
    s32 n;
    s32 r1;
    u8 *q;
    u8 *p;

    switch (arg0[idx + 0x10]) {
        case 0x35:
            func_02001944(0);
            fr[0] = 1;
            func_02018af8(*(u8 **) (data_0213e440 + 0xf8) + 0x128, 0x41, fr, 2);
            func_02001914();
            func_020645f4(data_0213e2f4, 0x38, 1);
            func_0208b35c(arg0, 0x35);
            n = *(s32 *) (arg0 + 8);
            if (n > *(s32 *) (arg0 + 0xc)) {
                do {
                    p  = arg0 + (n - 1);
                    r1 = p[0x10];
                    p  = arg0 + n;
                    n -= 1;
                    p[0x10] = r1;
                } while (n > *(s32 *) (arg0 + 0xc));
            }
            (arg0 + *(s32 *) (arg0 + 0xc))[0x10] = 0x36;
            *(s32 *) (arg0 + 0xc)                = *(s32 *) (arg0 + 0xc) + 1;
            *(s32 *) (arg0 + 8)                  = *(s32 *) (arg0 + 8) + 1;
            p                                    = *(u8 **) (arg0 + 4);
            *(s32 *) (p + 4)                     = *(s32 *) (p + 4) & ~0x10000000;
            q                                    = *(u8 **) (data_02139e64 + 0xdac);
            if (q != 0) {
                r1 = *(s32 *) (q + 4);
            } else {
                r1 = 0x32;
            }
            if (r1 == 0xc) {
                func_0206798c(q, *(s32 *) (arg0 + 4));
            }
            return 6;
        case 0x36:
            func_02001944(0);
            fr[1] = 0;
            func_02018af8(*(u8 **) (data_0213e440 + 0xf8) + 0x128, 0x41, fr + 1, 2);
            func_02001914();
            func_020645f4(data_0213e2f4, 0x38, 0);
            func_0208b35c(arg0, 0x36);
            n = *(s32 *) (arg0 + 8);
            if (n > *(s32 *) (arg0 + 0xc)) {
                do {
                    p  = arg0 + (n - 1);
                    r1 = p[0x10];
                    p  = arg0 + n;
                    n -= 1;
                    p[0x10] = r1;
                } while (n > *(s32 *) (arg0 + 0xc));
            }
            p                     = arg0 + *(s32 *) (arg0 + 0xc);
            p[0x10]               = 0x35;
            *(s32 *) (arg0 + 0xc) = *(s32 *) (arg0 + 0xc) + 1;
            *(s32 *) (arg0 + 8)   = *(s32 *) (arg0 + 8) + 1;
            q                     = *(u8 **) (data_02139e64 + 0xdac);
            if (q != 0) {
                r1 = *(s32 *) (q + 4);
            } else {
                r1 = 0x32;
            }
            if (r1 == 0xc) {
                func_0206798c(q, *(s32 *) (arg0 + 4));
            }
            return 6;
        default:
            return 0;
    }
}
