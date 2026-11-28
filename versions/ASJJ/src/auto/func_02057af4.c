/* compiler: 1.2/sp2p3 */
typedef int s32;
typedef short s16;
typedef unsigned short u16;
typedef unsigned char u8;
void func_02057af4(u8 *arg0, s32 arg1, s32 arg2) {
    // DECL-BEGIN
    s32 mask;
    s32 i;
    s32 off;
    s32 v;
    s32 r6;
    u16 *dst;
    s32 k;
    s32 r4;
    s32 row;
    s32 sel;
    // DECL-END
    s32 zero = 0;
    s32 one  = 1;
    s32 *pm  = (s32 *) (arg0 + 0x10);
    if (*pm == 2) {
        mask = 3;
    } else {
        mask = 1 << *pm;
    }
    off = i = 0;
    for (; i <= 1; i++) {
        if ((i + 1) & mask) {
            if (*(s32 *) (arg0 + 0x10) == 2) {
                if (i == 0) {
                    r4 = (*(s32 *) (arg0 + 0x550) >> 5) - 1;
                } else {
                    r4 = (*(s32 *) (arg0 + 0x550) >> 5) * 3 - 2;
                }
            } else {
                r4 = (*(s32 *) (arg0 + 0x550) >> 4) - 1;
            }
            sel = (i == arg2) ? one : zero;
            r6  = *(s32 *) (arg0 + 0x554);
            v   = sel * 9 + off + 0x13;
            for (; r6 < *(s32 *) (arg0 + 0x554) + 3; r6++) {
                row = r6 << 5;
                dst = (u16 *) (arg0 + 0x558 + row * 2 + r4 * 2);
                for (k = 0; k < 3; k++) {
                    *dst++ = (*(s32 *) (arg0 + 0xd9c) + v) | (*(s32 *) (arg0 + 0xda0) << 12);
                    v++;
                }
            }
        }
        off += 0x12;
    }
}
