/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02083ce8(void *);                         /* extern */
void func_02067918(void *);                           /* extern */
s32 func_0200fb30(s32, s32, s32);                   /* extern */
void *func_02036b84(void *);                        /* extern */
s32 func_020871f0(void *, s32, s32);                /* extern */
void func_020117e8(s32, s32, void *, s32);         /* extern */
void func_02018acc(void *);                         /* extern */
extern void *data_0213e2f4;
extern void *data_02139e64;
extern s32 data_027e0000;
extern void *data_0213e440;

void func_020936ec(void) {
    s32 buf[5];
    u8 *q;
    s32 t;

    func_02083ce8((u8 *) data_0213e2f4 + 0x18);
    q = *(u8 **) ((u8 *) data_02139e64 + 0xDAC);
    t = (q != 0) ? *(s32 *) (q + 4) : 0x32;
    if (t == 0xC) {
        func_02067918(q);
    }
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_0200fb30(*(s32 *) ((u8 *) data_0213e440 + 0xF8), 1, 0);
    func_02036b84(buf);
    buf[4] = func_020871f0(data_0213e440, 0xB, 0x28);
    func_020117e8(*(s32 *) ((u8 *) data_0213e440 + 0xF8), 0x3F, buf, 0);
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    func_02018acc(buf);
}
