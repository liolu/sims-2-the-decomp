/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 lo : 14;
    u16 k : 2;
} Bf;

void func_ov003_0214de6c(void *arg0, void *arg1);
void func_ov003_0214dce4(void *arg0, void *arg1);

void func_ov003_0214e00c(void *arg0, u8 *arg1) {
    switch (((Bf *) (arg1 + 2))->k) {
        case 0:
            func_ov003_0214de6c(arg0, arg1);
            break;
        case 1:
            func_ov003_0214dce4(arg0, arg1);
            break;
    }
}
