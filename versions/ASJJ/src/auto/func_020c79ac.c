/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_020c87d4(void *, void *, void *);
extern u8 data_02134d30;
extern u8 data_0213507c;
extern u8 data_02135698[];
extern u8 data_02136364;
extern u8 data_02136378;
extern s32 data_0213fcb8;
extern void *data_0213fcc4;
extern s32 data_0213fcd4;

void func_020c79ac(u8 *arg0) {
    u16 t;
    u16 u;
    void *p;

    func_020c87d4(&data_02136378, &data_0213507c, data_0213fcc4);
    t = *(u16 *) (arg0 + 2);
    if (t != 0) {
        if ((s32) t >= 0 && t < 0x17) {
            p = ((void **) data_02135698)[t];
        } else {
            p = &data_02134d30;
        }
        func_020c87d4(&data_02136364, &data_0213507c, p);
        u = *(u16 *) (arg0 + 2);
        if (data_0213fcc4 != (void *) 9) {
            data_0213fcd4 = u;
        }
    } else {
        data_0213fcb8 = 0xF;
    }
}
