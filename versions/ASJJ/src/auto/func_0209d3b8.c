/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0212451c;
extern u8 data_02124518;

typedef struct {
    u16 v;
} U16One;

void func_0203d23c(s32, U16One);

void func_0209d3b8(u8 *arg0) {
    if (arg0[0xC69] != 0) {
        func_0203d23c(1, *(U16One *) &data_0212451c);
    } else {
        func_0203d23c(1, *(U16One *) &data_02124518);
    }
    arg0[0xC69] = (arg0[0xC69] == 0) ? 1 : 0;
}
