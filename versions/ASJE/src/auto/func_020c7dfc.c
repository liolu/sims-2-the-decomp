/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020c8c24(void *, void *, void *);
extern u8 data_02135104;
extern u8 data_02135450;
extern u8 data_02135a6c[];
extern u8 data_02136738;
extern u8 data_0213674c;
extern s32 data_02140050;
extern void *data_0214005c;
extern s32 data_0214006c;

void func_020c7dfc(u8 *arg0) {
    u16 t;
    u16 u;
    void *p;

    func_020c8c24(&data_0213674c, &data_02135450, data_0214005c);
    t = *(u16 *) (arg0 + 2);
    if (t != 0) {
        if ((s32) t >= 0 && t < 0x17) {
            p = ((void **) data_02135a6c)[t];
        } else {
            p = &data_02135104;
        }
        func_020c8c24(&data_02136738, &data_02135450, p);
        u = *(u16 *) (arg0 + 2);
        if (data_0214005c != (void *) 9) {
            data_0214006c = u;
        }
    } else {
        data_02140050 = 0xF;
    }
}
