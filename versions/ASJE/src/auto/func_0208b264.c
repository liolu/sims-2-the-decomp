/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Unk0208b2dc {
    s32 unk0;
    s32 state;
} Unk0208b2dc;

extern u8 *data_02139e64;
void func_0206798c(void *, s32);

void func_0208b264(s32 *obj) {
    Unk0208b2dc *p = *(Unk0208b2dc **) (data_02139e64 + 0xDAC);
    s32 state;
    if (p != NULL) {
        state = p->state;
    } else {
        state = 0x32;
    }
    if (state != 12) {
        return;
    }
    if (obj[1] == 0) {
        return;
    }
    func_0206798c(p, obj[1]);
}
