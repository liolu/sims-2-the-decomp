/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 func_02046580(s32, s32, s32);
extern void func_0205219c(void *, void *);
extern void func_020d5a98();
extern void func_020ff8e4(void *, void *);
extern void func_020dc0b4(void *, void *);
extern void *func_020dd068(void *, s32);
extern s32 func_020f78cc();
extern s32 func_020f79d8();
extern void func_020fc994(s32, s32, s32);
extern u8 data_02131878;
extern u8 func_02048984;
extern u8 func_02048990;

typedef struct {
    u8 obj[8];
    u8 key[8];
    volatile s32 w[6];
    u8 tmp[0x80];
} Fr;

s32 func_02048d0c(void *arg0, void *arg1) {
    Fr f;
    u8 *a0 = (u8 *) arg0;
    u8 *a1 = (u8 *) arg1;
    u8 *p;
    s32 v;
    s32 z;

    f.key[0] = data_02131878;
    f.key[1] = (&data_02131878)[1];
    f.key[2] = (&data_02131878)[2];
    f.key[3] = (&data_02131878)[3];
    f.key[4] = (&data_02131878)[4];
    f.key[5] = (&data_02131878)[5];
    f.tmp[0] = 0;
    func_0205219c(f.tmp, *(void **) (a1 + 4));
    func_0205219c(f.tmp, f.key);
    func_020ff8e4(f.obj, f.tmp);
    func_020dc0b4(&func_02048990, &func_02048984);
    func_020d5a98();
    *(s32 *) (a0 + 8) = 0;
    if (a1[0xD] == 1) {
        *(s32 *) (a0 + 8) = *(s32 *) (a0 + 8) | 0x100000;
    }
    a0[1]                  = a1[0xD];
    *(void **) (a0 + 0x10) = func_020dd068(f.obj, *(s32 *) (a0 + 8) | 0x08000000);
    *(s32 *) (a0 + 0x20)   = **(s32 **) (a0 + 0x10);
    *(s32 *) (a0 + 0x24)   = *(s32 *) (*(u8 **) (a0 + 0x10) + 4);
    if (a0[3] != 1) {
        v                    = 0x100000;
        f.w[0]               = v;
        f.w[2]               = v;
        *(s32 *) (a0 + 0x40) = v;
        v                    = 0xC0000;
        f.w[1]               = v;
        f.w[3]               = v;
        *(s32 *) (a0 + 0x44) = v;
    }
    a0[2]                = a1[0xE];
    z                    = 0;
    *(u32 *) (a0 + 0x14) = *(u32 *) (a1 + 8);
    *(s32 *) (a0 + 0xC)  = *(s32 *) a1;
    a0[4]                = z;
    a0[0]                = a1[0xC];
    if (a0[0] == 1) {
        *(s32 *) (a0 + 8)    = *(s32 *) (a0 + 8) | 0x80000000;
        *(s32 *) (a0 + 0x18) = 0x06800000;
        f.w[4]               = z;
        func_020fc994(f.w[4], *(s32 *) (a0 + 0x18), 0x40000);
        *(s32 *) 0x04000000 = 0x60000;
    } else {
        switch (*(u32 *) (a1 + 8)) {
            case 0:
            case 1:
                break;
            case 2:
                *(s32 *) (a0 + 0x1C) = func_020f79d8();
                break;
            case 3:
                *(s32 *) (a0 + 0x1C) = func_020f78cc();
                break;
        }
        *(s32 *) (a0 + 0x18) = func_02046580(0x18000, 3, 4);
        z                    = 0;
        f.w[5]               = z;
        func_020fc994(f.w[5], *(s32 *) (a0 + 0x18), 0x18000);
    }
    a0[5] = a1[0x10];
    return *(void **) (a0 + 0x10) != NULL ? 1 : 0;
}
