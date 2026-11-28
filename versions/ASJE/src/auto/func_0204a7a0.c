/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02046424(void *);
void func_020467cc(void *);
void func_0204a4d8(void *);
void func_020b982c(void *);
extern void **data_0213d5b0;
extern void *data_0213d5b4;
extern u32 data_0213d5b8;
extern s32 data_0213d5bc;
extern s32 data_0213d5c0;
extern u32 data_0213d5c4;
extern u8 **data_0213d5c8;

void func_0204a7a0(void) {
    u32 i;
    u32 j;
    u8 k;
    u8 *p;

    i = 0;
    if (data_0213d5b8 > i) {
        do {
            p = data_0213d5c8[i];
            if (p != 0) {
                k = 0;
                if (p[0x1cc] > k) {
                    do {
                        func_020b982c(p + 0x48 + k * 0xc0);
                        k += 1;
                        p = data_0213d5c8[i];
                    } while (k < p[0x1cc]);
                }
                if (p != 0) {
                    func_0204a4d8(p);
                    func_020467cc(p);
                }
                data_0213d5c8[i] = 0;
            }
            i += 1;
        } while (i < data_0213d5b8);
    }
    j             = 0;
    data_0213d5bc = 0;
    if (data_0213d5b0 != 0) {
        if (data_0213d5c4 > j) {
            do {
                func_020467cc(data_0213d5b0[j]);
                j += 1;
            } while (j < data_0213d5c4);
        }
        func_02046424(data_0213d5b0);
        data_0213d5b0 = 0;
    }
    if (data_0213d5c8 != 0) {
        func_02046424(data_0213d5c8);
        data_0213d5c8 = 0;
    }
    data_0213d5c0 = 0;
    if (data_0213d5b4 != 0) {
        func_02046424(data_0213d5b4);
        data_0213d5b4 = 0;
    }
    data_0213d5c4 = 0;
}
