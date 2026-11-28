/* compiler: 1.2/sp2p3  */
/* func_020d81c4 from sims-2-the/src/auto/func_020d81c4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
extern u8 data_0212ae60;
void func_020d7cb0(u8 *arg0) {
    u32 dd;
    s32 q, num, idx;
    s32 r9, r8, r7, r11, r12, r6, r10, r5;
    u16 *out;

    out = (u16 *) (arg0 + 0xC);
    dd  = ((u32) (*(u16 *) (arg0 + 6) << 0xF)) / *(u32 *) (arg0 + 8);
    idx = (((s32) ((dd * 2) & 0xFFFF)) >> 4) * 2;
    r9  = *(s16 *) ((u8 *) &data_0212ae60 + ((idx + 1) << 1)) * 4;
    num = *(s16 *) ((u8 *) &data_0212ae60 + (idx << 1)) * 4;
    r10 = arg0[4];
    q   = num / r10;

    switch (arg0[0]) {
        case 3:
            r5  = 0x4000 - r9;
            r6  = r5 >> 1;
            r12 = r6;
            r8  = q + 0x4000;
            r11 = 0 - (r9 * 2);
            r7  = 0x4000 - q;
            break;
        case 4:
            r6  = (r9 + 0x4000) >> 1;
            r12 = r6;
            r5  = 0 - (r9 + 0x4000);
            r8  = q + 0x4000;
            r11 = 0 - (r9 * 2);
            r7  = 0x4000 - q;
            break;
        case 5:
            r6  = r10 * q;
            r12 = (0 - r10) * q;
            r8  = q + 0x4000;
            r11 = 0 - (r9 * 2);
            r7  = 0x4000 - q;
            r5  = 0;
            break;
        case 6:
            r5  = 0 - (r9 * 2);
            r6  = 0x4000;
            r12 = 0x4000;
            r11 = r5;
            r8  = q + 0x4000;
            r7  = 0x4000 - q;
            break;
        default:
            break;
    }

    out[0] = (s16) ((r6 << 0xE) / r8);
    out[1] = (s16) ((r5 << 0xE) / r8);
    out[2] = (s16) ((r12 << 0xE) / r8);
    out[3] = (s16) (((0 - r11) << 0xE) / r8);
    out[4] = (s16) (((0 - r7) << 0xE) / r8);
}
