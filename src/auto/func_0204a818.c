/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0204649c(void *);
void func_02046844(void *);
void func_0204a550(void *);
void func_020b98f4(void *);
extern void **data_0213d6f0;
extern void *data_0213d6f4;
extern u32 data_0213d6f8;
extern s32 data_0213d6fc;
extern s32 data_0213d700;
extern u32 data_0213d704;
extern u8 **data_0213d708;

void func_0204a818(void) {
    u32 i;
    u32 j;
    u8 k;
    u8 *p;

    i = 0;
    if (data_0213d6f8 > i) {
        do {
            p = data_0213d708[i];
            if (p != 0) {
                k = 0;
                if (p[0x1cc] > k) {
                    do {
                        func_020b98f4(p + 0x48 + k * 0xc0);
                        k += 1;
                        p = data_0213d708[i];
                    } while (k < p[0x1cc]);
                }
                if (p != 0) {
                    func_0204a550(p);
                    func_02046844(p);
                }
                data_0213d708[i] = 0;
            }
            i += 1;
        } while (i < data_0213d6f8);
    }
    j             = 0;
    data_0213d6fc = 0;
    if (data_0213d6f0 != 0) {
        if (data_0213d704 > j) {
            do {
                func_02046844(data_0213d6f0[j]);
                j += 1;
            } while (j < data_0213d704);
        }
        func_0204649c(data_0213d6f0);
        data_0213d6f0 = 0;
    }
    if (data_0213d708 != 0) {
        func_0204649c(data_0213d708);
        data_0213d708 = 0;
    }
    data_0213d700 = 0;
    if (data_0213d6f4 != 0) {
        func_0204649c(data_0213d6f4);
        data_0213d6f4 = 0;
    }
    data_0213d704 = 0;
}
