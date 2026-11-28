/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020ee050(void *, s32);
void func_020b898c(void *);
void func_02111a0c(void *, s32, s32, void *);
void *func_020b8a50(void *);
s32 func_020bd290(s32);

void *func_020b9588(u8 *arg0) {
    u32 f;
    s32 i;
    u8 *q;

    if (*(s32 *) (arg0 + 0x74) != 0) {
        func_020ee050(arg0 + 4, *(s32 *) (arg0 + 0x74));
        func_020b898c(arg0 + 0x74);
    }
    if (*(s32 *) (arg0 + 0x6c) != 0) {
        func_020ee050(arg0 + 4, *(s32 *) (arg0 + 0x6c));
        func_020b898c(arg0 + 0x6c);
    }
    f = *(u16 *) (arg0 + 0xac);
    if (((f << 0x1a) >> 0x1f) == 1) {
        if (*(s32 *) (arg0 + 0x7c) != 0) {
            func_020ee050(arg0 + 4, *(s32 *) (arg0 + 0x7c));
            func_020b898c(arg0 + 0x7c);
            *(u16 *) (arg0 + 0xac) = *(u16 *) (arg0 + 0xac) & ~0x20;
        }
    }
    f = *(u16 *) (arg0 + 0xac);
    if (((f << 0x18) >> 0x1f) == 1) {
        for (i = 0, q = arg0 + 0x84; i < 4; i++, q += 8) {
            if (((s32 *) arg0)[0x21 + i * 2] != 0) {
                func_020ee050(arg0 + 4, ((s32 *) arg0)[0x21 + i * 2]);
                func_020b898c(q);
            }
        }
        *(u16 *) (arg0 + 0xac) = *(u16 *) (arg0 + 0xac) & ~0x80;
    }
    *(u16 *) (arg0 + 0xac) = *(u16 *) (arg0 + 0xac) & ~0x10;
    func_02111a0c(arg0 + 0x84, 4, 8, func_020b8a50);
    func_020b8a50(arg0 + 0x7c);
    func_020b8a50(arg0 + 0x74);
    func_020b8a50(arg0 + 0x6c);
    func_020bd290((s32) arg0);
    return arg0;
}
