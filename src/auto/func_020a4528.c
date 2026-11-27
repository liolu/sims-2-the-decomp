/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a, b, c;
} V3;
void func_020ab484(void *);
void func_0203c540(void);
void func_02046844(s32);
void func_0204681c(s32);
void func_02046a58(s32);
void func_0203d674(s32);
void func_021023e8(s32);
void func_020d5dbc(u8);
void func_020d5d44(u8);
void func_020d5e34(s32);
void func_020d5f80(void *);
void func_020d5cb8(V3);

void func_020a4528(u8 *arg0) {
    V3 v;
    s32 p;
    s32 i;
    if ((arg0[0xA52] & 0x20) == 0) {
        arg0[0xA52] |= 1;
    }
    func_020ab484(arg0);
    func_0203c540();
    p = *(s32 *) (arg0 + 0x24);
    if (p != 0) {
        func_02046a58(p);
        func_02046844(p);
    }
    if (*(s32 *) (arg0 + 0x8C0) == 0) {
        if (*(s32 *) (arg0 + 8) == 0) {
            func_0204681c(*(s32 *) (arg0 + 0x9DC));
            func_0204681c(*(s32 *) (arg0 + 0x9E0));
            for (i = 0; i < 2; i++) {
                func_0204681c(((s32 *) (arg0 + 0xA34))[i]);
            }
            func_0204681c(*(s32 *) (arg0 + 0x94C));
        }
        p = *(s32 *) (arg0 + 0x93C);
        if (p != 0) {
            func_0203d674(p);
            func_02046844(p);
        }
        func_0204681c(*(s32 *) (arg0 + 0x954));
    }
    func_021023e8(0);
    func_020d5dbc(arg0[0xA5D]);
    func_020d5d44(arg0[0xA5E]);
    func_020d5e34(0x10);
    func_020d5f80(&v);
    func_020d5cb8(v);
}
