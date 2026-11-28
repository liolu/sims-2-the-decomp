/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

s32 func_0204f604(u8 *arg0, u16 *arg1, s32 arg2, s32 arg3) {
    s32 r;
    s32 k;
    u8 *p;
    u32 ex;
    u32 ey;
    u16 x;
    u16 y;
    u16 w;
    u16 h;

    if (arg2 != 0) {
        k = arg0[0x55] - 1;
        if (k < 0) {
            k += 5;
        }
        p = arg0 + k * 2;
        if (p[0x4A] != 0xFF) {
            ex = p[0x4A];
            ey = p[0x4B];
        }
    } else {
        ex = *(u16 *) (arg0 + arg3 * 8 + 0x2A);
        ey = *(u16 *) (arg0 + arg3 * 8 + 0x2C);
    }
    x = arg1[0];
    h = arg1[3];
    w = arg1[2];
    y = arg1[1];
    if (ex >= x && (s32) ex < (s32) (x + w) && ey >= y && (s32) ey < (s32) (y + h)) {
        r = 1;
    } else {
        r = 0;
    }
    if (r != 0) {
        return 1;
    }
    return 0;
}
