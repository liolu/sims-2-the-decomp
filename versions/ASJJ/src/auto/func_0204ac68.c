/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_0204a82c(void);
s32 func_0204655c(s32 a, s32 b, s32 c);
void *func_020468a0(s32 a, s32 b, s32 c);
void func_0201538c(void *p);
void func_02015358(void *p);
void func_02047ba8(void *p);
void func_0201532c(void *p);
extern s32 data_0213d1d4;
extern s32 data_0213d1d0;
extern s32 data_0213d1e8;
extern s32 data_0213d1e4;
extern s32 data_0213d1d8;
extern s32 data_0213d1e0;

void func_0204ac68(s32 arg0, s32 arg1) {
    s32 i;
    u8 *r7;
    u32 zero;

    zero = 0;
    if ((data_0213d1d4 != 0) || (data_0213d1d0 != 0) || (data_0213d1e8 != 0)) {
        func_0204a82c();
    }
    data_0213d1e0 = 0;
    data_0213d1e4 = arg1;
    data_0213d1d8 = arg0;
    data_0213d1d0 = func_0204655c(arg1 << 2, 3, 4);
    data_0213d1e8 = func_0204655c(arg0 << 2, 3, 4);
    data_0213d1d4 = 0;
    if ((u32) data_0213d1e4 <= zero) {
        return;
    }
    i = 0;
    do {
        r7 = (u8 *) func_020468a0(0x8C, 3, 4);
        if (r7 != 0) {
            func_0201538c(r7);
            func_0201538c(r7 + 0xC);
            func_0201538c(r7 + 0x18);
            func_02015358(r7 + 0x24);
            func_02047ba8(r7 + 0x30);
            func_02047ba8(r7 + 0x34);
            func_02047ba8(r7 + 0x38);
            func_0201532c(r7 + 0x48);
        }
        ((s32 *) data_0213d1d0)[i] = (s32) r7;
        i += 1;
    } while ((u32) i < (u32) data_0213d1e4);
}
