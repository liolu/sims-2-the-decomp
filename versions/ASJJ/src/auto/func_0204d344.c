/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u8 pad[0xA8];
    s32 a8;
    s32 ac;
} G;
extern G data_0213d290;
void func_020462e0(void *, s32, s32);
void func_0204d344(void *arg0, s32 arg1) {
    if (data_0213d290.ac > 0) {
        data_0213d290.a8 = data_0213d290.a8 + 1;
        data_0213d290.ac = 0;
    }
    func_020462e0(arg0, data_0213d290.a8, arg1);
    data_0213d290.a8 += arg1;
}
