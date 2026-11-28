/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 lo : 14;
    u16 k : 2;
} Bf;

void func_ov003_0214e20c(void *arg0, void *arg1);
void func_ov003_0214e084(void *arg0, void *arg1);

void func_ov003_0214e3ac(void *arg0, u8 *arg1) {
    switch (((Bf *) (arg1 + 2))->k) {
        case 0:
            func_ov003_0214e20c(arg0, arg1);
            break;
        case 1:
            func_ov003_0214e084(arg0, arg1);
            break;
    }
}
