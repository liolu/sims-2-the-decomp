/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020c87d4();
extern void func_020fb9fc(s32);
extern s32 func_02105688(void *);
extern u8 data_02135670[];
extern u8 data_02135750;
extern u8 data_02135758;
extern u8 data_02135760;
extern s32 data_0213fcac;
extern volatile s32 data_0213fcb8;
extern s32 data_0213fcc4;
extern s32 data_0213fcd4;
extern u8 func_020c41e4;

s32 func_020c40dc(void) {
    s32 r;
    s32 n;
    void *p;

    enum {
        KK = 3
    } k;
    func_020c87d4(&data_02135750);
    func_020c87d4(&data_02135758, ((void **) data_02135670)[data_0213fcc4]);
    k             = 3;
    p             = ((void **) data_02135670)[k];
    data_0213fcc4 = k;
    func_020c87d4(&data_02135760, p);
    r = func_02105688(&func_020c41e4);
    if (r == 0) {
        return 1;
    }
    if (r == 2) {
        n = data_0213fcac;
        while (data_0213fcb8 != 9 && data_0213fcd4 == 0 && n > 0) {
            func_020fb9fc(0x101D0);
            (void) data_0213fcb8;
            n -= 1;
        }
        return data_0213fcd4 == 0;
    }
    return 0;
}
