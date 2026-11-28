/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a, b, c;
} V3;
void func_020ab3bc(void *);
void func_0203c4c8(void);
void func_020467cc(s32);
void func_020467a4(s32);
void func_020469e0(s32);
void func_0203d5fc(s32);
void func_021022ac(s32);
void func_020d5c80(u8);
void func_020d5c08(u8);
void func_020d5cf8(s32);
void func_020d5e44(void *);
void func_020d5b7c(V3);

void func_020a4460(u8 *arg0) {
    V3 v;
    s32 p;
    s32 i;
    if ((arg0[0xA52] & 0x20) == 0) {
        arg0[0xA52] |= 1;
    }
    func_020ab3bc(arg0);
    func_0203c4c8();
    p = *(s32 *) (arg0 + 0x24);
    if (p != 0) {
        func_020469e0(p);
        func_020467cc(p);
    }
    if (*(s32 *) (arg0 + 0x8C0) == 0) {
        if (*(s32 *) (arg0 + 8) == 0) {
            func_020467a4(*(s32 *) (arg0 + 0x9DC));
            func_020467a4(*(s32 *) (arg0 + 0x9E0));
            for (i = 0; i < 2; i++) {
                func_020467a4(((s32 *) (arg0 + 0xA34))[i]);
            }
            func_020467a4(*(s32 *) (arg0 + 0x94C));
        }
        p = *(s32 *) (arg0 + 0x93C);
        if (p != 0) {
            func_0203d5fc(p);
            func_020467cc(p);
        }
        func_020467a4(*(s32 *) (arg0 + 0x954));
    }
    func_021022ac(0);
    func_020d5c80(arg0[0xA5D]);
    func_020d5c08(arg0[0xA5E]);
    func_020d5cf8(0x10);
    func_020d5e44(&v);
    func_020d5b7c(v);
}
