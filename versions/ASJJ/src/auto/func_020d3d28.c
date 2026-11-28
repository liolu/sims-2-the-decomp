/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct O {
    u8 pad0[8];
    u8 *t8;
    u8 **tc;
    u8 pad10[4];
    u8 *cur;
    u8 pad18[0xa];
    u16 cnt;
    u8 pad24[6];
    u8 b2a;
    u8 b2b;
    u8 pad2c[2];
    u8 b2e;
    u8 pad2f[5];
    u8 b34;
    u8 b35;
    u8 b36;
    u8 b37;
} O;

extern O *data_02141ff4;
extern O *data_02142000[];

void func_020d3d28(s32 arg0, s8 arg1, u32 arg2) {
    O *o;
    u32 i;
    u8 *p;
    u8 c;
    o = data_02142000[arg0];
    if (o == 0) {
        return;
    }
    i                  = 0;
    data_02141ff4      = o;
    o->b2b             = arg1;
    p                  = data_02141ff4->tc[data_02141ff4->t8[data_02141ff4->b2b]];
    data_02141ff4->cnt = *p++ + 1;
    data_02141ff4->cur = p;
    goto test;
body: {
    p = data_02141ff4->cur;
    while (*p != 0) {
        data_02141ff4->cur = data_02141ff4->cur + 1;
        switch (*p >> 6) {
            case 0:
                break;
            case 1:
                data_02141ff4->cur = data_02141ff4->cur + 1;
                break;
            case 2:
                p = data_02141ff4->cur;
                if (*p & 0x80) {
                    data_02141ff4->cur = p + 1;
                }
                data_02141ff4->cur = data_02141ff4->cur + 2;
                break;
            case 3:
                p = data_02141ff4->cur;
                c = *p;
                p += 2;
                data_02141ff4->cur = p;
                if (c & 0x20) {
                    data_02141ff4->cur = data_02141ff4->cur + 1;
                }
                if (c & 0x40) {
                    data_02141ff4->cur = data_02141ff4->cur + 1;
                }
                if (c & 0x80) {
                    data_02141ff4->cur = data_02141ff4->cur + 1;
                }
                break;
        }
        p = data_02141ff4->cur;
    }
    data_02141ff4->cur = data_02141ff4->cur + 1;
    data_02141ff4->cnt = data_02141ff4->cnt - 1;
    i++;
}
test:
    if (i < arg2) {
        goto body;
    }
    data_02141ff4->b2a = data_02141ff4->b2e;
    data_02141ff4->b34 = 0;
    data_02141ff4->b35 = data_02141ff4->b2b + 1;
    data_02141ff4->b36 = 0;
    data_02141ff4->b37 = 0;
}
