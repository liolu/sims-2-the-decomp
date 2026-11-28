/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a, b, c;
} V3;
void func_020ab2d4(void *);
void func_0203c574(void);
void func_02046858(s32);
void func_02046830(s32);
void func_02046a6c(s32);
void func_0203d6a8(s32);
void func_02101ed4(s32);
void func_020d58a8(u8);
void func_020d5830(u8);
void func_020d5920(s32);
void func_020d5a6c(void *);
void func_020d57a4(V3);

void func_020a4338(u8 *arg0) {
    V3 v;
    s32 p;
    s32 i;
    if ((arg0[0xA52] & 0x20) == 0) {
        arg0[0xA52] |= 1;
    }
    func_020ab2d4(arg0);
    func_0203c574();
    p = *(s32 *) (arg0 + 0x24);
    if (p != 0) {
        func_02046a6c(p);
        func_02046858(p);
    }
    if (*(s32 *) (arg0 + 0x8C0) == 0) {
        if (*(s32 *) (arg0 + 8) == 0) {
            func_02046830(*(s32 *) (arg0 + 0x9DC));
            func_02046830(*(s32 *) (arg0 + 0x9E0));
            for (i = 0; i < 2; i++) {
                func_02046830(((s32 *) (arg0 + 0xA34))[i]);
            }
            func_02046830(*(s32 *) (arg0 + 0x94C));
        }
        p = *(s32 *) (arg0 + 0x93C);
        if (p != 0) {
            func_0203d6a8(p);
            func_02046858(p);
        }
        func_02046830(*(s32 *) (arg0 + 0x954));
    }
    func_02101ed4(0);
    func_020d58a8(arg0[0xA5D]);
    func_020d5830(arg0[0xA5E]);
    func_020d5920(0x10);
    func_020d5a6c(&v);
    func_020d57a4(v);
}
