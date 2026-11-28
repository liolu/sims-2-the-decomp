/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" void func_0204630c(void *, s32, s32);
extern "C" void func_02051bd4(s32, s32);
extern u8 data_0213db00;
extern u8 data_0213dc88;
extern u8 data_0211e650;
typedef struct {
    u16 a, b, c, d;
} E8;
extern "C" void func_02051ca0(void) {
    u32 i;
    s32 zero;
    u8 *p;
    func_0204630c(&data_0213db00, 0, 0x88);
    func_0204630c(&data_0213dc88, 0, 0x1f8);
    p    = &data_0213dc88;
    i    = 0;
    zero = 0;
    do {
        *(u16 *) p = ((E8 *) &data_0211e650)[i].a;
        func_02051bd4(i, zero);
        i++;
        p = p + 0x38;
    } while (i < 9);
}
