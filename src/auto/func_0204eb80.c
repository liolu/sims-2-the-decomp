/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 flags;
    s32 pad;
    s32 v;
    s32 pad2[5];
} E;
extern E data_0213d920[];
extern s32 data_027e0000;
void func_01ffb1f0(s32);
s32 func_020f6444(s32);
void func_020f6484(s32, s32);
void func_020f7c48(s32, s32, s32);

s32 func_0204eb80(s32 arg0) {
    s32 i, v;
    i = data_027e0000;
    if (data_0213d920[i].flags & 4) {
        v = data_0213d920[i].v;
        if (arg0 == 0x3f) {
            if (i == 0) {
                if (v != func_020f6444(0x0400006c)) {
                    func_020f6484(0x0400006c, v);
                }
            } else {
                if (v != func_020f6444(0x0400106c)) {
                    func_020f6484(0x0400106c, v);
                }
            }
        } else if (i == 0) {
            func_020f7c48(0x04000050, 1 << arg0, v);
        } else {
            func_020f7c48(0x04001050, 1 << arg0, v);
        }
    }
    i = data_027e0000;
    if (data_0213d920[i].v != 0) {
        data_0213d920[i].v += 2;
        if (data_0213d920[i].v > 0) {
            data_0213d920[i].v = 0;
        }
        func_01ffb1f0(data_0213d920[i].v);
        return 1;
    }
    return 0;
}
