/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_021314c8;
extern u8 data_02139e74;
extern s32 data_0213e42c;

s32 func_020832d0(s32, s32);
void func_020bb444(void *);
void func_02011090(void *, s32, s32, s32, s32);
void func_02018acc(void *);
void func_0201866c(void *);

void *func_02038244(u8 *arg0) {
    s32 r2;
    u8 *obj;
    u8 *sub;

    *(void **) arg0 = &data_021314c8;
    r2              = *(s32 *) (arg0 + 0x2C);
    if (r2 != 5 && *(s32 *) (&data_02139e74 + 0x264) == 5) {
        *(s32 *) (&data_02139e74 + 0x268) = *(s32 *) (&data_02139e74 + 0x264);
        *(s32 *) (&data_02139e74 + 0x264) = r2;
        func_020bb444(&data_02139e74);
    }
    obj                    = ((u8 **) data_0213e42c)[func_020832d0(data_0213e42c, 3)];
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
