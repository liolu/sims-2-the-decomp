/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef int s32;
typedef short s16;
typedef struct {
    s16 x;
    s16 y;
    u8 act;
    u8 pad;
} Ent;
typedef struct {
    u8 *obj;
    s16 px;
    s16 pv;
    s16 cnt;
    Ent e[16];
    s16 pad6a;
    s16 g6c;
    s16 g6e;
    s16 g70;
    s32 s74;
    s32 s78;
    s32 s7c;
    s32 s80;
    s32 s84;
    u8 pad88[0x10];
    u8 f98;
} G;
extern s32 func_0204c934(s32);
extern void func_020d516c(s32, void *);
extern G *data_0213e218;

void func_020a2c3c(void) {
    u8 i;
    s32 off;
    u8 k;
    s32 off2;
    u8 j;
    u8 sw;
    s32 z;
    u8 *e;
    G *gg;
    u8 *e2;
    s32 a;
    s32 s;
    if (data_0213e218->s78 > 0) {
        data_0213e218->s78 = data_0213e218->s78 - 1;
        if (data_0213e218->s78 != 0) {
            return;
        }
        i = 0;
        z = i;
        for (; i < 16; i++) {
            e = (u8 *) data_0213e218 + i * 6;
            if (e[0xe] != 0) {
                e[0xe] = z;
            }
        }
        return;
    }
    if (data_0213e218->s7c > 0) {
        data_0213e218->s7c = data_0213e218->s7c - 1;
        if (data_0213e218->s7c == 0) {
            data_0213e218->cnt = (data_0213e218->s80 + 1) * 5;
            if (func_0204c934(0x32) != 0) {
                data_0213e218->pv = data_0213e218->s80 / 2 + 1;
            } else {
                data_0213e218->pv = -(data_0213e218->s80 / 2 + 1);
            }
        }
    } else {
        data_0213e218->px = data_0213e218->px + data_0213e218->pv;
        if (data_0213e218->px < 0) {
            data_0213e218->px = 0;
            data_0213e218->pv = data_0213e218->s80 / 2 + 1;
        }
        if (data_0213e218->px > 0x70) {
            data_0213e218->px = 0x70;
            data_0213e218->pv = -(data_0213e218->s80 / 2 + 1);
        }
        if (func_0204c934(0xf) != 0) {
            if (func_0204c934(0x32) != 0) {
                data_0213e218->pv = data_0213e218->s80 / 2 + 1;
            } else {
                data_0213e218->pv = -(data_0213e218->s80 / 2 + 1);
            }
        }
        if (func_0204c934((u16) (data_0213e218->s80 * 4 + 3)) != 0) {
            gg = data_0213e218;
            if (gg->cnt > 0) {
                for (j = 0; j < 16; j++) {
                    off = j * 6;
                    e   = (u8 *) gg + off;
                    if (e[0xe] == 0) {
                        func_020d516c(0x26, data_0213e218->obj + 0x78);
                        *(s16 *) ((u8 *) data_0213e218 + off + 0xa) = data_0213e218->px;
                        *(s16 *) ((u8 *) data_0213e218 + off + 0xc) = 0x10;
                        *((u8 *) data_0213e218 + off + 0xe)         = 1;
                        data_0213e218->cnt                          = data_0213e218->cnt - 1;
                        break;
                    }
                }
            }
        }
    }
    z  = 0;
    sw = 0;
    for (k = 0; k < 16; k++) {
        off2 = k * 6;
        e    = (u8 *) data_0213e218 + off2;
        if (e[0xe] != 0) {
            sw                 = 1;
            *(s16 *) (e + 0xc) = *(s16 *) (e + 0xc) + 2;
            gg                 = data_0213e218;
            e2                 = (u8 *) gg + off2;
            a                  = *(s16 *) (e2 + 0xa) + 8;
            if (a >= gg->g6c && a <= gg->g6c + 0x10) {
                s = gg->g70;
                if ((s >= 1 && *(s16 *) (e2 + 0xc) + 10 >= 0x60 && *(s16 *) (e2 + 0xc) + 10 <= 0x64) ||
                    (s >= 2 && *(s16 *) (e2 + 0xc) + 10 >= 0x68 && *(s16 *) (e2 + 0xc) + 10 <= 0x6c) ||
                    (s >= 3 && *(s16 *) (e2 + 0xc) + 10 >= 0x70 && *(s16 *) (e2 + 0xc) + 10 <= 0x74)) {
                    func_020d516c(0x24, data_0213e218->obj + 0x78);
                    *((u8 *) data_0213e218 + off2 + 0xe) = 0;
                    if (data_0213e218->f98 == 0) {
                        data_0213e218->s74 = data_0213e218->s74 + (data_0213e218->s80 * 2 + 0x19);
                        if (data_0213e218->s74 >= data_0213e218->s84) {
                            data_0213e218->s84 = data_0213e218->s74;
                        }
                    }
                }
            }
            if (*(s16 *) ((u8 *) data_0213e218 + off2 + 0xc) >= 0x80) {
                *((u8 *) data_0213e218 + off2 + 0xe) = 0;
                data_0213e218->g70                   = data_0213e218->g70 - 1;
                func_020d516c(0x25, data_0213e218->obj + 0x78);
                if (data_0213e218->g70 <= 0) {
                    data_0213e218->s74 = 0;
                    data_0213e218->g70 = 3;
                    data_0213e218->g6c = 0x40;
                    data_0213e218->g6e = 0;
                    data_0213e218->s78 = 0;
                    data_0213e218->pv  = 0;
                    data_0213e218->cnt = (data_0213e218->s80 + 1) * 5;
                    data_0213e218->s7c = 0xf;
                    for (i = 0; i < 16; i++) {
                        *((u8 *) data_0213e218 + i * 6 + 0xe) = 0;
                    }
                    data_0213e218->s80 = 0;
                    data_0213e218->s7c = 0x1e;
                    data_0213e218->px  = 0x38;
                } else {
                    data_0213e218->s78 = 0xf;
                }
            }
        }
    }
    if (sw != 0) {
        return;
    }
    if (data_0213e218->cnt != 0) {
        return;
    }
    data_0213e218->s80 = data_0213e218->s80 + 1;
    if (data_0213e218->s80 >= 0x14) {
        data_0213e218->s80 = 0x14;
    }
    data_0213e218->s78 = 0;
    data_0213e218->pv  = 0;
    data_0213e218->cnt = (data_0213e218->s80 + 1) * 5;
    data_0213e218->s7c = 0xf;
    for (i = 0; i < 16; i++) {
        *((u8 *) data_0213e218 + i * 6 + 0xe) = 0;
    }
}
