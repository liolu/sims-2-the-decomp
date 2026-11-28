/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct S {
    s32 a, b, c, d, e, f;
    u8 pad[0x44 - 0x18];
} S;
extern s32 data_027e0000;
extern S data_0213d728[];
extern S data_0213d6a0[];
void func_0205032c(void) {
    s32 i              = data_027e0000;
    data_0213d6a0[i].a = data_0213d728[i].a;
    data_0213d6a0[i].b = data_0213d728[i].b;
    data_0213d6a0[i].f = data_0213d728[i].f;
    data_0213d6a0[i].c = data_0213d728[i].c;
    data_0213d6a0[i].e = data_0213d728[i].e;
    data_0213d6a0[i].d = data_0213d728[i].d;
}
