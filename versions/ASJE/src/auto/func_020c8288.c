/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_021400c0;
extern s32 data_0214005c;
extern u8 data_02135f60;
extern u8 data_0213518c;
extern u8 data_02135b2c;
extern u8 data_02135b34;
extern void *data_02135a44[];
extern u32 data_02135a6c[];
extern u8 data_02135104;
extern u8 data_02135f4c;
extern u32 data_0214006c;
extern u32 data_02140050;
void func_020467a4(void *);
void func_020c8c24(void *, void *, u32);

void func_020c8288(u8 *arg0) {
    s32 idx;
    u32 val;
    u32 w;
    enum {
        N9 = 9
    } nine;
    enum {
        N1 = 1
    } one;

    if (data_021400c0 != NULL) {
        func_020467a4(data_021400c0);
        data_021400c0 = NULL;
    }
    func_020c8c24(&data_02135f60, &data_0213518c, data_0214005c);
    if (*(u16 *) (arg0 + 2) != 0) {
        func_020c8c24(&data_02135b2c, data_02135a44[data_0214005c], data_0214005c);
        nine          = N9;
        data_0214005c = nine;
        func_020c8c24(&data_02135b34, data_02135a44[nine], (u32) &data_0214005c);
        idx = *(u16 *) (arg0 + 2);
        if (idx >= 0 && (u32) idx < 0x17U) {
            val = data_02135a6c[idx];
        } else {
            val = (u32) &data_02135104;
        }
        func_020c8c24(&data_02135f4c, &data_0213518c, val);
        w = *(u16 *) (arg0 + 2);
        if (data_0214005c != 9) {
            data_0214006c = w;
        }
    } else {
        func_020c8c24(&data_02135b2c, data_02135a44[data_0214005c], data_0214005c);
        one           = N1;
        data_0214005c = one;
        func_020c8c24(&data_02135b34, data_02135a44[one], (u32) &data_0214005c);
        data_02140050 = 0x1D;
    }
}
