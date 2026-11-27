/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0201ca08(void *p);
void func_02019cdc(void *p);
void func_02018acc(void *p);
void func_02028a90(void *p);
s32 func_0200aac4(void *o, s32 a);
void func_020117e8(void *o, s32 a, void *p, void *b);
void func_02011090(void *o, s32 a, s32 b, s32 c, s32 d);

typedef enum {
    MK = 0x3000
} MKE;
void func_02027e50(u8 *arg0) {
    u8 fr[0xe4];

    if (arg0[0x3a] == 1) {
        s32 t;
        func_0201ca08(fr + 60);
        t                   = *(s32 *) (arg0 + 0x28);
        *(s32 *) (fr + 20)  = t;
        *(s32 *) (fr + 76)  = t;
        t                   = *(s32 *) (arg0 + 0x2c);
        *(s32 *) (fr + 24)  = t;
        *(s32 *) (fr + 80)  = t;
        t                   = *(s32 *) (arg0 + 0x30);
        *(s32 *) (fr + 28)  = t;
        *(s32 *) (fr + 84)  = t;
        *(s32 *) (fr)       = 0x8000;
        *(s32 *) (fr + 8)   = 0x8000;
        *(s32 *) (fr + 96)  = 0x8000;
        *(u16 *) (fr + 104) = *(u16 *) (arg0 + 0x38);
        if (*(u16 *) (fr + 104) == 0x3f) {
            MKE mk              = MK;
            t                   = (s32) (((s64) * (s32 *) (fr + 100) * mk + 0x800) >> 12);
            *(s32 *) (fr + 4)   = mk;
            *(s32 *) (fr + 12)  = mk;
            *(s32 *) (fr + 16)  = t;
            *(s32 *) (fr + 32)  = t;
            *(s32 *) (fr + 100) = t;
        }
        func_020117e8(*(void **) (arg0 + 4), 0x1b, fr + 60, arg0);
        func_02019cdc(fr + 112);
        t                   = *(s32 *) (arg0 + 0x28);
        *(s32 *) (fr + 36)  = t;
        *(s32 *) (fr + 128) = t;
        t                   = *(s32 *) (arg0 + 0x2c);
        *(s32 *) (fr + 40)  = t;
        *(s32 *) (fr + 132) = t;
        t                   = *(s32 *) (arg0 + 0x30);
        *(s32 *) (fr + 44)  = t;
        *(s32 *) (fr + 136) = t;
        func_020117e8(*(void **) (arg0 + 4), 0x10, fr + 112, arg0);
        func_02018acc(fr + 112);
        func_02018acc(fr + 60);
    } else if (arg0[0x3a] == 2) {
        s32 t;
        func_02028a90(fr + 160);
        *(u8 *) (fr + 177) = arg0[0x3b];
        func_020117e8(*(void **) (arg0 + 4), 0x30, fr + 160, arg0);
        func_02019cdc(fr + 180);
        t                   = *(s32 *) (arg0 + 0x28);
        *(s32 *) (fr + 48)  = t;
        *(s32 *) (fr + 196) = t;
        t                   = *(s32 *) (arg0 + 0x2c);
        *(s32 *) (fr + 52)  = t;
        *(s32 *) (fr + 200) = t;
        t                   = *(s32 *) (arg0 + 0x30);
        *(s32 *) (fr + 56)  = t;
        *(s32 *) (fr + 204) = t;
        func_020117e8(*(void **) (arg0 + 4), 0x10, fr + 180, arg0);
        func_02018acc(fr + 180);
        func_02018acc(fr + 160);
    } else if (arg0[0x3a] == 3) {
        s32 t = func_0200aac4(*(void **) (arg0 + 4), 1);
        func_02011090(*(void **) (arg0 + 4), t, 1, 1, 0);
    }
}
