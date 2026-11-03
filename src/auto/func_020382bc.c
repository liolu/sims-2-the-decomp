/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02131608;
extern u8 data_02139fb4;
extern s32 data_0213e56c;

s32 func_02083348(s32, s32);
void func_020bb50c(void *);
void func_02011090(void *, s32, s32, s32, s32);
void func_02018acc(void *);
void func_0201866c(void *);

void *func_020382bc(u8 *arg0) {
    s32 r2;
    u8 *obj;
    u8 *sub;

    *(void **) arg0 = &data_02131608;
    r2              = *(s32 *) (arg0 + 0x2C);
    if (r2 != 5 && *(s32 *) (&data_02139fb4 + 0x264) == 5) {
        *(s32 *) (&data_02139fb4 + 0x268) = *(s32 *) (&data_02139fb4 + 0x264);
        *(s32 *) (&data_02139fb4 + 0x264) = r2;
        func_020bb50c(&data_02139fb4);
    }
    obj                    = ((u8 **) data_0213e56c)[func_02083348(data_0213e56c, 3)];
    *(u8 *) (obj + 0x1D4)  = 0;
    *(s32 *) (obj + 0x1D0) = 0;
    func_02011090(*(void **) (arg0 + 4), 0, 0, 1, 0);
    sub = *(u8 **) (*(u8 **) (arg0 + 4) + 0x1C);
    if (sub != NULL) {
        *(s32 *) (sub + 4)                      = *(s32 *) (sub + 4) | 0x82;
        *(void **) (*(u8 **) (arg0 + 4) + 0x1C) = NULL;
    }
    func_02018acc(arg0 + 0x18);
    func_0201866c(arg0);
    return arg0;
}
