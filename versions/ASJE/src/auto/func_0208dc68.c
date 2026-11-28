/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_0213e2f4;
void func_02050934(s32 n);
void func_0208af58(s32 v);

void func_0208dc68(u8 *arg0) {
    s32 n;
    s32 i;

    n = 0;

    for (i = 0; i < 6; i++) {
        if (((u16 *) ((u8 *) data_0213e2f4 + 0x28))[i] == 0x131) {
            n++;
        }
    }
    func_02050934(n);
    func_0208af58(*(u16 *) (*(u8 **) (arg0 + 4) + 0xA));
}
