/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 p;
    u8 pad[0x10];
} Slot;

typedef struct {
    u8 pad0[0xc0];
    Slot a[10];
    Slot b[10];
    u8 pad1[0x2cc - 0x250];
    s32 x2cc;
    s32 x2d0;
    u8 pad2[0x2e4 - 0x2d4];
    s32 x2e4;
    u8 pad3[0x2f4 - 0x2e8];
    u8 x2f4;
    u8 pad4[0x358 - 0x2f5];
    s32 x358;
    s32 x35c;
    u8 pad5[0x368 - 0x360];
    s32 x368;
    u8 pad6[0x3b8 - 0x36c];
    s32 x3b8;
    u8 pad7[0x3cc - 0x3bc];
    s32 x3cc;
    s32 x3d0;
    u8 x3d4;
    u8 x3d5;
} Obj;

extern char data_0212f4a0[];
extern char data_0212f4a8[];
extern char data_0212f4b0[];
extern char data_0212f4b8[];

void func_02051b54(s32 a, s32 b, s32 c);
int func_02107d28(char *buf, const char *fmt, ...);
s32 func_0210a260(const char *s);
void func_0201854c(s32 a, char *s);
s32 func_020c7f78(void);
void func_020165b4(s32 a, u8 b);

void func_02002464(Obj *o) {
    char buf[56];
    u8 i;
    u8 n;
    u8 j;
    u8 m;
    s32 r;

    func_02051b54(3, 0, 0);
    n = 0;
    for (i = 0; i < 10; i++) {
        if (o->b[i].p != 0) {
            n++;
        }
    }
    if (n <= 9) {
        func_02107d28(buf, data_0212f4a0);
    } else {
        func_02107d28(buf, data_0212f4a8);
    }
    func_02107d28(buf + func_0210a260(buf), data_0212f4b0, o->x2d0);
    func_0201854c(o->x35c, buf);
    func_02107d28(buf, data_0212f4b8, o->x2e4);
    func_0201854c(o->x368, buf);
    if (o->x2f4) {
        o->x3cc++;
        if (o->x3cc >= 20) {
            o->x3cc = 0;
            r       = func_020c7f78();
            if (r != o->x3d0) {
                o->x3d0 = r;
                func_020165b4(o->x3b8, o->x3d0 + 1);
            }
        }
    }
    m = 0;
    for (j = 0; j < 10; j++) {
        if (o->a[j].p != 0) {
            m++;
        }
    }
    if (m <= 9) {
        func_02107d28(buf, data_0212f4a0);
    } else {
        func_02107d28(buf, data_0212f4a8);
    }
    func_02107d28(buf + func_0210a260(buf), data_0212f4b0, o->x2cc);
    func_0201854c(o->x358, buf);
    o->x3d5 = 0;
}
