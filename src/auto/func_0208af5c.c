/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s32 v;
} Fx;
void func_0208af5c(u8 *arg0, u8 arg1, Fx v) {
    *(u8 *) (arg0 + 0x9)  = arg1;
    *(s32 *) (arg0 + 0xC) = v.v;
}
