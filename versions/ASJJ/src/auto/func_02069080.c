/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020187e4(void *);
void func_020d54a8(s32);
void func_0204811c(s32, s32, s32, s32, s32, s32);
extern s32 data_02139a84;
extern s32 *data_0213df5c;
extern u8 *data_0213e0a8;

void func_02069080(u8 *arg0) {
    u8 *temp_r0;

    if (*data_0213df5c & 0x80) {
        return;
    }
    if ((*(s32 *) (arg0 + 4) & 1) != 1) {
        return;
    }
    if (*(s32 *) (*(u8 **) (arg0 + 0x90) + 0x6C) != 0) {
        return;
    }
    temp_r0 = *(u8 **) (data_0213e0a8 + 0xF8);
    if (temp_r0 == 0) {
        return;
    }
    if (func_020187e4(temp_r0 + 0xE0) != 7) {
        return;
    }
    func_020d54a8(0x16F);
    func_0204811c(data_02139a84, 0x2A, 1, 0, 0, 0);
}
