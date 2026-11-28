/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020c8c24();
extern void func_020fbdd4(s32);
extern s32 func_02105a60(void *);
extern u8 data_02135a44[];
extern u8 data_02135b24;
extern u8 data_02135b2c;
extern u8 data_02135b34;
extern s32 data_02140044;
extern volatile s32 data_02140050;
extern s32 data_0214005c;
extern s32 data_0214006c;
extern u8 func_020c4634;

s32 func_020c452c(void) {
    s32 r;
    s32 n;
    void *p;

    enum {
        KK = 3
    } k;
    func_020c8c24(&data_02135b24);
    func_020c8c24(&data_02135b2c, ((void **) data_02135a44)[data_0214005c]);
    k             = 3;
    p             = ((void **) data_02135a44)[k];
    data_0214005c = k;
    func_020c8c24(&data_02135b34, p);
    r = func_02105a60(&func_020c4634);
    if (r == 0) {
        return 1;
    }
    if (r == 2) {
        n = data_02140044;
        while (data_02140050 != 9 && data_0214006c == 0 && n > 0) {
            func_020fbdd4(0x101D0);
            (void) data_02140050;
            n -= 1;
        }
        return data_0214006c == 0;
    }
    return 0;
}
