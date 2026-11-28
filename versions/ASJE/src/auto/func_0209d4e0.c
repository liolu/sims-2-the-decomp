/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_021248b4;
extern u8 data_021248b0;

typedef struct {
    u16 v;
} U16One;

void func_0203d190(s32, U16One);

void func_0209d4e0(u8 *arg0) {
    if (arg0[0xC69] != 0) {
        func_0203d190(1, *(U16One *) &data_021248b4);
    } else {
        func_0203d190(1, *(U16One *) &data_021248b0);
    }
    arg0[0xC69] = (arg0[0xC69] == 0) ? 1 : 0;
}
