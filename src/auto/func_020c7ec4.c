/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020c8cec(void *, void *, void *);
extern u8 data_02135244;
extern u8 data_02135590;
extern u8 data_02135bac[];
extern u8 data_02136878;
extern u8 data_0213688c;
extern s32 data_02140190;
extern void *data_0214019c;
extern s32 data_021401ac;

void func_020c7ec4(u8 *arg0) {
    u16 t;
    u16 u;
    void *p;

    func_020c8cec(&data_0213688c, &data_02135590, data_0214019c);
    t = *(u16 *) (arg0 + 2);
    if (t != 0) {
        if ((s32) t >= 0 && t < 0x17) {
            p = ((void **) data_02135bac)[t];
        } else {
            p = &data_02135244;
        }
        func_020c8cec(&data_02136878, &data_02135590, p);
        u = *(u16 *) (arg0 + 2);
        if (data_0214019c != (void *) 9) {
            data_021401ac = u;
        }
    } else {
        data_02140190 = 0xF;
    }
}
