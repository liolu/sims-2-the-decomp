/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213341c;
extern u8 data_021343c0;
extern u32 data_0213e2f4;
extern s32 func_02081f10(void *, s32, u16);
extern s32 func_0207303c(void *);
extern s32 func_020645cc(void *, s32);
extern void func_02095be4(void *, void *);

u8 *func_02096080(u8 *arg0, void *arg1) {
    s32 i;
    s32 v;
    s32 lim;
    u8 *t;
    u8 *p;

    p                      = arg0;
    *(void **) arg0        = &data_0213341c;
    *(void **) (arg0 + 4)  = arg1;
    *(s32 *) (arg0 + 8)    = 0;
    *(s32 *) (arg0 + 0xC)  = 0;
    *(s32 *) (arg0 + 0x14) = 0;
    arg0[0x1C]             = 1;
    *(void **) arg0        = &data_021343c0;
    if (func_02081f10((u8 *) data_0213e2f4 + 0x21DC, 0x8B8, *(u16 *) (*(u8 **) (arg0 + 4) + 0xA)) != 0 ||
        func_02081f10((u8 *) data_0213e2f4 + 0x21DC, 0x868, *(u16 *) (*(u8 **) (arg0 + 4) + 0xA)) != 0) {
        i   = *(s32 *) (p + 8);
        lim = *(s32 *) (p + 0xC);
        if (i > lim) {
            do {
                t = p + (i - 1);
                v = t[0x10];
                t = p + i;
                i -= 1;
                t[0x10] = v;
                lim     = *(s32 *) (p + 0xC);
            } while (i > lim);
        }
        t                     = p + lim;
        t[0x10]               = 0x4E;
        *(s32 *) (arg0 + 0xC) = *(s32 *) (arg0 + 0xC) + 1;
        *(s32 *) (arg0 + 8)   = *(s32 *) (arg0 + 8) + 1;
    } else if (*(u16 *) (*(u8 **) (arg0 + 4) + 0xA) == 0xD && func_0207303c((u8 *) data_0213e2f4 + 0x41F8) == 0 &&
               func_020645cc((void *) data_0213e2f4, 0x26) != 0) {
        i   = *(s32 *) (p + 8);
        lim = *(s32 *) (p + 0xC);
        if (i > lim) {
            do {
                t = p + (i - 1);
                v = t[0x10];
                t = p + i;
                i -= 1;
                t[0x10] = v;
                lim     = *(s32 *) (p + 0xC);
            } while (i > lim);
        }
        t                     = p + lim;
        t[0x10]               = 6;
        *(s32 *) (arg0 + 0xC) = *(s32 *) (arg0 + 0xC) + 1;
        *(s32 *) (arg0 + 8)   = *(s32 *) (arg0 + 8) + 1;
    } else {
        func_02095be4(arg0, arg1);
    }
    return arg0;
}
