/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_0213e440;
extern s32 data_0213d670;
extern s32 data_0213d678;

void func_02064c94(void *o, void *p);
void func_0204d220(void *p, s32 n);
void func_0205eae8(void *p);
void func_020836f4(void *p);
void func_0207758c(void *p);
void func_02072e58(void *p);
void func_02082c18(void *p);
void func_020784f8(void *p);
void func_0207466c(void *p);
void func_02074634(void *p);
void func_0205dea4(void *p);
void func_020a3a68(void *p);
void func_02075aa4(void *p);
void func_0205eddc(void *p);
void func_0206371c(void *p);
void func_02073f54(void *p);
void func_02089d80(void *p);

void func_0206462c(u8 *arg0) {
    volatile s32 fr[4];
    s32 *lr;
    s32 i;
    s32 t;
    u8 *r5;

    arg0[0x50]                      = (u8) * (s32 *) ((u8 *) data_0213e440 + 0xf4);
    lr                              = *(s32 **) ((u8 *) data_0213e440 + 0xf8);
    t                               = lr[0x78 / 4];
    lr                              = (s32 *) ((u8 *) lr + 0x78);
    fr[1]                           = t;
    *(volatile s32 *) (arg0 + 0x44) = t;
    t                               = lr[1];
    fr[2]                           = t;
    *(volatile s32 *) (arg0 + 0x48) = t;
    t                               = lr[2];
    fr[3]                           = t;
    *(volatile s32 *) (arg0 + 0x4c) = t;
    func_02064c94(arg0, (u8 *) &data_0213d678 + *(s32 *) ((u8 *) &data_0213d670 + 0xa4) * 0x30);
    func_0204d220(arg0, 3);
    func_0204d220(arg0 + 4, 7);
    func_0204d220(arg0 + 0x4814, 0xb);
    func_0204d220(arg0 + 0x47a0, 4);
    func_0204d220(arg0 + 0x467c, 0x30);
    func_0204d220(arg0 + 0x47ac, 0x28);
    func_0205eae8(arg0 + 0xc);
    func_020836f4(arg0 + 0x18);
    func_0207758c(arg0 + 0x2f78);
    func_02072e58(arg0 + 0x41f8);
    func_02082c18(arg0 + 0x2fa4);
    func_020784f8(arg0 + 0x21dc);
    func_0207466c(arg0 + 0x2164);
    func_02074634(arg0 + 0x2f60);
    func_0205dea4(arg0 + 0x3030);
    func_020a3a68(arg0 + 0x31c8);
    func_02075aa4(arg0 + 0x41e4);
    func_0205eddc(arg0 + 0x4530);
    func_0206371c(arg0 + 0x4620);
    func_02073f54(arg0 + 0x45e4);
    func_02089d80(arg0 + 0x4648);
    i  = 0;
    r5 = arg0 + 0x46dc;
    do {
        func_0204d220(r5, 0x40);
        i  = i + 1;
        r5 = r5 + 0x40;
    } while (i < 3);
    fr[0] = 0x75bcd15;
    func_0204d220(fr, 4);
}
