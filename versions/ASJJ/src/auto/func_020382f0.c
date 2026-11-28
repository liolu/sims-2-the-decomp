/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02131108;
extern u8 data_02139a94;
extern s32 data_0213e094;

s32 func_02083200(s32, s32);
void func_020bb040(void *);
void func_02011090(void *, s32, s32, s32, s32);
void func_02018ac4(void *);
void func_02018664(void *);

void *func_020382f0(u8 *arg0) {
    s32 r2;
    u8 *obj;
    u8 *sub;

    *(void **) arg0 = &data_02131108;
    r2              = *(s32 *) (arg0 + 0x2C);
    if (r2 != 5 && *(s32 *) (&data_02139a94 + 0x264) == 5) {
        *(s32 *) (&data_02139a94 + 0x268) = *(s32 *) (&data_02139a94 + 0x264);
        *(s32 *) (&data_02139a94 + 0x264) = r2;
        func_020bb040(&data_02139a94);
    }
    obj                    = ((u8 **) data_0213e094)[func_02083200(data_0213e094, 3)];
    *(u8 *) (obj + 0x1D4)  = 0;
    *(s32 *) (obj + 0x1D0) = 0;
    func_02011090(*(void **) (arg0 + 4), 0, 0, 1, 0);
    sub = *(u8 **) (*(u8 **) (arg0 + 4) + 0x1C);
    if (sub != NULL) {
        *(s32 *) (sub + 4)                      = *(s32 *) (sub + 4) | 0x82;
        *(void **) (*(u8 **) (arg0 + 4) + 0x1C) = NULL;
    }
    func_02018ac4(arg0 + 0x18);
    func_02018664(arg0);
    return arg0;
}
