/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020fca74(u8 *a, u8 *b);
void func_020f5700(u8 *a, u8 *b);

void func_020bdff8(u8 *arg0) {
    s32 a0;
    s32 a1;
    s32 a2;
    s64 t;

    if (((u32) (*(s32 *) (arg0 + 0x180)) << 28) >> 31 == 0) {
        return;
    }
    func_020fca74(arg0 + 0x30, arg0 + 0x70);
    func_020f5700(arg0 + 0x70, arg0 + 0x70);

    a1 = -*(s32 *) (arg0 + 4);
    a0 = -*(s32 *) arg0;
    a2 = -*(s32 *) (arg0 + 8);
    *(s32 *) (arg0 + 0xa0) =
        *(s32 *) (arg0 + 0xa0) +
        (s32) (((s64) a0 * *(s32 *) (arg0 + 0x70) + (s64) a1 * *(s32 *) (arg0 + 0x80) + (s64) a2 * *(s32 *) (arg0 + 0x90)) >>
               12);
    *(s32 *) (arg0 + 0xa4) =
        *(s32 *) (arg0 + 0xa4) +
        (s32) (((s64) a0 * *(s32 *) (arg0 + 0x74) + (s64) a1 * *(s32 *) (arg0 + 0x84) + (s64) a2 * *(s32 *) (arg0 + 0x94)) >>
               12);
    *(s32 *) (arg0 + 0xa8) =
        *(s32 *) (arg0 + 0xa8) +
        (s32) (((s64) a0 * *(s32 *) (arg0 + 0x78) + (s64) a1 * *(s32 *) (arg0 + 0x88) + (s64) a2 * *(s32 *) (arg0 + 0x98)) >>
               12);
    *(s32 *) (arg0 + 0xac) =
        *(s32 *) (arg0 + 0xac) +
        (s32) (((s64) a0 * *(s32 *) (arg0 + 0x7c) + (s64) a1 * *(s32 *) (arg0 + 0x8c) + (s64) a2 * *(s32 *) (arg0 + 0x9c)) >>
               12);
    *(s32 *) (arg0 + 0x180) = *(s32 *) (arg0 + 0x180) & ~8;
}
