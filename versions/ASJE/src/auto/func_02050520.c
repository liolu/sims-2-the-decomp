/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct S {
    s32 a, b, c, d, e;
    u8 pad[0x44 - 0x14];
} S;
extern s32 data_027e0000;
extern S data_0213db20[];
extern S data_0213da98[];
void func_02050520(void) {
    s32 i              = data_027e0000;
    data_0213da98[i].a = data_0213db20[i].a;
    data_0213da98[i].b = data_0213db20[i].b;
    data_0213da98[i].c = data_0213db20[i].c;
    data_0213da98[i].d = data_0213db20[i].d;
    data_0213da98[i].e = data_0213db20[i].e;
}
