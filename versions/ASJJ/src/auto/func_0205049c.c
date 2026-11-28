/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct S {
    s32 a, b, c, d, e;
    u8 pad[0x44 - 0x14];
} S;
extern s32 data_027e0000;
extern S data_0213d740[];
extern S data_0213d6b8[];
void func_0205049c(void) {
    s32 i              = data_027e0000;
    data_0213d6b8[i].a = data_0213d740[i].a;
    data_0213d6b8[i].b = data_0213d740[i].b;
    data_0213d6b8[i].c = data_0213d740[i].c;
    data_0213d6b8[i].d = data_0213d740[i].d;
    data_0213d6b8[i].e = data_0213d740[i].e;
}
