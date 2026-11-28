/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02083c28(void *);                         /* extern */
void func_020679a4(void *);                           /* extern */
s32 func_0200fb30(s32, s32, s32);                   /* extern */
void *func_02036c30(void *);                        /* extern */
s32 func_02087150(void *, s32, s32);                /* extern */
void func_020117e8(s32, s32, void *, s32);         /* extern */
void func_02018ac4(void *);                         /* extern */
extern void *data_0213df5c;
extern void *data_02139a84;
extern s32 data_027e0000;
extern void *data_0213e0a8;

void func_020935b0(void) {
    s32 buf[5];
    u8 *q;
    s32 t;

    func_02083c28((u8 *) data_0213df5c + 0x18);
    q = *(u8 **) ((u8 *) data_02139a84 + 0xDAC);
    t = (q != 0) ? *(s32 *) (q + 4) : 0x32;
    if (t == 0xC) {
        func_020679a4(q);
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_0200fb30(*(s32 *) ((u8 *) data_0213e0a8 + 0xF8), 1, 0);
    func_02036c30(buf);
    buf[4] = func_02087150(data_0213e0a8, 0xB, 0x28);
    func_020117e8(*(s32 *) ((u8 *) data_0213e0a8 + 0xF8), 0x3F, buf, 0);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_02018ac4(buf);
}
