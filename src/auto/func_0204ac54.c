/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_0204a818(void);
s32 func_02046548(s32 a, s32 b, s32 c);
void *func_0204688c(s32 a, s32 b, s32 c);
void func_02015394(void *p);
void func_02015360(void *p);
void func_02047b94(void *p);
void func_02015334(void *p);
extern s32 data_0213d6f4;
extern s32 data_0213d6f0;
extern s32 data_0213d708;
extern s32 data_0213d704;
extern s32 data_0213d6f8;
extern s32 data_0213d700;

void func_0204ac54(s32 arg0, s32 arg1) {
    s32 i;
    u8 *r7;
    u32 zero;

    zero = 0;
    if ((data_0213d6f4 != 0) || (data_0213d6f0 != 0) || (data_0213d708 != 0)) {
        func_0204a818();
    }
    data_0213d700 = 0;
    data_0213d704 = arg1;
    data_0213d6f8 = arg0;
    data_0213d6f0 = func_02046548(arg1 << 2, 3, 4);
    data_0213d708 = func_02046548(arg0 << 2, 3, 4);
    data_0213d6f4 = 0;
    if ((u32) data_0213d704 <= zero) {
        return;
    }
    i = 0;
    do {
        r7 = (u8 *) func_0204688c(0x8C, 3, 4);
        if (r7 != 0) {
            func_02015394(r7);
            func_02015394(r7 + 0xC);
            func_02015394(r7 + 0x18);
            func_02015360(r7 + 0x24);
            func_02047b94(r7 + 0x30);
            func_02047b94(r7 + 0x34);
            func_02047b94(r7 + 0x38);
            func_02015334(r7 + 0x48);
        }
        ((s32 *) data_0213d6f0)[i] = (s32) r7;
        i += 1;
    } while ((u32) i < (u32) data_0213d704);
}
