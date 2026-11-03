/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0213e434[];

void func_01ffac40(void *, void *);
void func_0207d100(void *);
void func_0207cc64(void *, s32);
void func_0201d124(void *);
void func_0201d56c(void *);
void func_02019684(void *);
void func_020117e8(void *, s32, void *, void *);
void func_0201d844(void *);
void func_02018acc(void *);
void func_02022c90(void *);

s32 func_020246b4(u8 *arg0) {
    volatile s32 tmp[1];
    u8 buf[0x90];
    u8 *base;

    func_01ffac40(*(u8 **) (arg0 + 0x4) + 0xe0, arg0);
    base = *(u8 **) data_0213e434;
    func_0207d100(base + 0x21dc);
    base = *(u8 **) data_0213e434;
    func_0207cc64(base + 0x21dc, 0x20);
    if (*(u16 *) (*(u8 **) (arg0 + 0x4) + 0xa) != 1) {
        func_0201d124(buf + 0x0);
        func_0201d56c(buf + 0x3c);
        func_02019684(buf + 0x60);
        func_020117e8(*(void **) (arg0 + 0x4), 0x1e, buf + 0x60, 0);
        func_020117e8(*(void **) (arg0 + 0x4), 0x22, buf + 0x3c, 0);
        *(u16 *) (buf + 0x30) = 0x80;
        func_020117e8(*(void **) (arg0 + 0x4), 3, buf + 0x0, 0);
        func_0201d844(buf + 0x78);
        *(u16 *) (buf + 0x8a) = 0;
        func_020117e8(*(void **) (arg0 + 0x4), 0x23, buf + 0x78, 0);
        *(u16 *) (buf + 0x4c) = 0x115;
        *(u16 *) (buf + 0x58) = 0xc8;
        func_020117e8(*(void **) (arg0 + 0x4), 0x22, buf + 0x3c, 0);
        func_02018acc(buf + 0x78);
        func_02018acc(buf + 0x60);
        func_02018acc(buf + 0x3c);
        func_02018acc(buf + 0x0);
    } else {
        func_02022c90(arg0);
    }
    base                   = *(u8 **) data_0213e434;
    *(s32 *) (base + 0x74) = *(s32 *) (base + 0x74) + 1;
    return 0;
}
