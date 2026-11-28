/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_0213fd20;
extern s32 data_0213fcc4;
extern u8 data_02135b8c;
extern u8 data_02134db8;
extern u8 data_02135758;
extern u8 data_02135760;
extern void *data_02135670[];
extern u32 data_02135698[];
extern u8 data_02134d30;
extern u8 data_02135b78;
extern u32 data_0213fcd4;
extern u32 data_0213fcb8;
void func_02046830(void *);
void func_020c87d4(void *, void *, u32);

void func_020c7e38(u8 *arg0) {
    s32 idx;
    u32 val;
    u32 w;
    enum {
        N9 = 9
    } nine;
    enum {
        N1 = 1
    } one;

    if (data_0213fd20 != NULL) {
        func_02046830(data_0213fd20);
        data_0213fd20 = NULL;
    }
    func_020c87d4(&data_02135b8c, &data_02134db8, data_0213fcc4);
    if (*(u16 *) (arg0 + 2) != 0) {
        func_020c87d4(&data_02135758, data_02135670[data_0213fcc4], data_0213fcc4);
        nine          = N9;
        data_0213fcc4 = nine;
        func_020c87d4(&data_02135760, data_02135670[nine], (u32) &data_0213fcc4);
        idx = *(u16 *) (arg0 + 2);
        if (idx >= 0 && (u32) idx < 0x17U) {
            val = data_02135698[idx];
        } else {
            val = (u32) &data_02134d30;
        }
        func_020c87d4(&data_02135b78, &data_02134db8, val);
        w = *(u16 *) (arg0 + 2);
        if (data_0213fcc4 != 9) {
            data_0213fcd4 = w;
        }
    } else {
        func_020c87d4(&data_02135758, data_02135670[data_0213fcc4], data_0213fcc4);
        one           = N1;
        data_0213fcc4 = one;
        func_020c87d4(&data_02135760, data_02135670[one], (u32) &data_0213fcc4);
        data_0213fcb8 = 0x1D;
    }
}
