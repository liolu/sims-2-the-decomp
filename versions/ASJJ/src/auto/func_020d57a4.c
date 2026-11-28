/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a, b, c;
} S12;

extern volatile u8 data_02142018[];
extern u8 data_02142368[];

void func_020d8208(S12 s);
void func_020d855c(void);

void func_020d57a4(S12 s, s32 d) {
    u32 f;

    data_02142018[0xB] |= 0x80;
    func_020d8208(s);
    f = data_02142018[0xB] & 0x80;
    if (!f) {
        return;
    }
    if (data_02142018[0xB] & 0x40) {
        if ((*(u32 *) (data_02142368 + 0xC) & 0xC) == 0) {
            func_020d855c();
        }
    }
    data_02142018[0xB] &= ~0xC0;
}
