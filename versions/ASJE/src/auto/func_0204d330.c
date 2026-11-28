/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    u8 pad[0xA8];
    s32 a8;
    s32 ac;
} G;
extern G data_0213d670;
void func_02046254(void *, s32, s32);
void func_0204d330(void *arg0, s32 arg1) {
    if (data_0213d670.ac > 0) {
        data_0213d670.a8 = data_0213d670.a8 + 1;
        data_0213d670.ac = 0;
    }
    func_02046254(arg0, data_0213d670.a8, arg1);
    data_0213d670.a8 += arg1;
}
