/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef void (*FnV)(void);

extern u8 data_021171cc;
extern s32 data_027e0000;

void func_020076a4(u8 *arg0) {
    volatile s32 st[13];
    u8 i;
    enum {
        ZZ = 0
    } zero;
    s32 t;
    u8 *n;
    enum {
        KV = 0xC8000
    } kk;
    enum {
        KW = 0xC8000
    } k2;

    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
    i = 0;
    do {
        n = *(u8 **) (arg0 + (i << 2) + 0x338);
        if (n != NULL) {
            t                   = *(s32 *) (n + 0x60);
            st[4]               = t;
            *(s32 *) (n + 0x50) = *(s32 *) (n + 0x50) + t;
            n                   = *(u8 **) (arg0 + (i << 2) + 0x338);
            t                   = *(s32 *) (n + 0x64);
            st[5]               = t;
            *(s32 *) (n + 0x54) = *(s32 *) (n + 0x54) + t;
        }
        i = (i + 1) & 0xFF;
    } while (i < 5);

    n = *(u8 **) (arg0 + 0x34C);
    if (n != NULL) {
        t                   = *(s32 *) (n + 0x6C);
        st[6]               = t;
        zero                = 0;
        *(s32 *) (n + 0x64) = *(s32 *) (n + 0x64) + t;
        st[0]               = zero;
        st[7]               = zero;
        n                   = *(u8 **) (arg0 + 0x34C);
        if (*(s32 *) (n + 0x6C) == zero || (kk = 0xC8000, st[1] = kk, st[8] = kk, *(s32 *) (n + 0x54) <= kk)) {
            t                   = *(s32 *) (n + 0x60);
            st[9]               = t;
            *(s32 *) (n + 0x50) = *(s32 *) (n + 0x50) + t;
        }
        n                   = *(u8 **) (arg0 + 0x34C);
        k2                  = 0xC8000;
        t                   = *(s32 *) (n + 0x64);
        st[10]              = t;
        *(s32 *) (n + 0x54) = *(s32 *) (n + 0x54) + t;
        st[2]               = k2;
        st[11]              = k2;
        n                   = *(u8 **) (arg0 + 0x34C);
        if (*(s32 *) (n + 0x50) > k2) {
            st[3]               = 0;
            st[12]              = 0;
            *(s32 *) (n + 0x60) = 0;
        }
    }
    if (*(s32 *) (arg0 + 0x2E8) > 0) {
        *(s32 *) (arg0 + 0x2E8) = *(s32 *) (arg0 + 0x2E8) - 1;
    }
    ((FnV *) &data_021171cc)[arg0[0x2EE]]();
    if (data_027e0000 == 0) {
        data_027e0000 = 1;
    } else {
        data_027e0000 = 0;
    }
}
