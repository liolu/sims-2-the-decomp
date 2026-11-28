/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct S {
    s32 a, b, c, d, e, f;
    u8 pad[0x44 - 0x18];
} S;
extern s32 data_027e0000;
extern S data_0213db08[];
extern S data_0213da80[];
void func_020503d0(void) {
    s32 i              = data_027e0000;
    data_0213da80[i].a = data_0213db08[i].a;
    data_0213da80[i].b = data_0213db08[i].b;
    data_0213da80[i].f = data_0213db08[i].f;
    data_0213da80[i].c = data_0213db08[i].c;
    data_0213da80[i].e = data_0213db08[i].e;
    data_0213da80[i].d = data_0213db08[i].d;
}
