/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020464b0(void *);
void func_02046858(void *);
void func_0204a564(void *);
void func_020b9428(void *);
extern void **data_0213d1d0;
extern void *data_0213d1d4;
extern u32 data_0213d1d8;
extern s32 data_0213d1dc;
extern s32 data_0213d1e0;
extern u32 data_0213d1e4;
extern u8 **data_0213d1e8;

void func_0204a82c(void) {
    u32 i;
    u32 j;
    u8 k;
    u8 *p;

    i = 0;
    if (data_0213d1d8 > i) {
        do {
            p = data_0213d1e8[i];
            if (p != 0) {
                k = 0;
                if (p[0x1cc] > k) {
                    do {
                        func_020b9428(p + 0x48 + k * 0xc0);
                        k += 1;
                        p = data_0213d1e8[i];
                    } while (k < p[0x1cc]);
                }
                if (p != 0) {
                    func_0204a564(p);
                    func_02046858(p);
                }
                data_0213d1e8[i] = 0;
            }
            i += 1;
        } while (i < data_0213d1d8);
    }
    j             = 0;
    data_0213d1dc = 0;
    if (data_0213d1d0 != 0) {
        if (data_0213d1e4 > j) {
            do {
                func_02046858(data_0213d1d0[j]);
                j += 1;
            } while (j < data_0213d1e4);
        }
        func_020464b0(data_0213d1d0);
        data_0213d1d0 = 0;
    }
    if (data_0213d1e8 != 0) {
        func_020464b0(data_0213d1e8);
        data_0213d1e8 = 0;
    }
    data_0213d1e0 = 0;
    if (data_0213d1d4 != 0) {
        func_020464b0(data_0213d1d4);
        data_0213d1d4 = 0;
    }
    data_0213d1e4 = 0;
}
