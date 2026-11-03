/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_021249f0;
extern u8 data_021249ec;

typedef struct {
    u16 v;
} U16One;

void func_0203d208(s32, U16One);

void func_0209d5a8(u8 *arg0) {
    if (arg0[0xC69] != 0) {
        func_0203d208(1, *(U16One *) &data_021249f0);
    } else {
        func_0203d208(1, *(U16One *) &data_021249ec);
    }
    arg0[0xC69] = (arg0[0xC69] == 0) ? 1 : 0;
}
