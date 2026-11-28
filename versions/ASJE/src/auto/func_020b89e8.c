/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;
typedef enum {
    ONE = 1
} OE;
typedef unsigned int u32;

extern u8 data_0213f838;
extern u8 data_02134ef8;
extern u8 data_02134ee8;

void func_02108100();
s32 func_020f0db0(u8 *a, u8 *b);

s32 func_020b89e8(u8 *arg0, s32 arg1) {
    s32 res;
    u32 i;
    s32 r7;
    OE one;
    s32 off;
    s32 r11;
    u32 n;
    u8 *obj;
    u8 *q;
    u8 *q2;
    u8 *p;
    u8 *nm;
    s32 old;

    r11 = 0;
    obj = *(u8 **) (*(u8 **) arg0 + 0x5C);
    i   = 0;
    q   = obj + *(u16 *) (obj + 0xE);
    q2  = obj + *(s32 *) (q + 0xC);
    n   = q2[0x17];
    if (i < n) {
        one = ONE;
        off = 0;
        do {
            func_02108100(&data_0213f838, &data_02134ee8, i + 1);
            obj = *(u8 **) (*(u8 **) arg0 + 0x5C);
            q   = obj + *(u16 *) (obj + 0xE);
            q2  = obj + *(s32 *) (q + 0xC);
            nm  = q2 + 0x40;
            res = func_020f0db0(nm, &data_0213f838);
            if (res != -1) {
                if (arg1 != 0) {
                    p            = *(u8 **) (arg0 + 4) + off;
                    old          = p[1];
                    p[1]         = old + 1;
                    (p + old)[3] = res;
                }
                r7 = one;
                do {
                    func_02108100(&data_0213f838, &data_02134ef8, i + 1, r7);
                    r7 += 1;
                    obj = *(u8 **) (*(u8 **) arg0 + 0x5C);
                    q   = obj + *(u16 *) (obj + 0xE);
                    q2  = obj + *(s32 *) (q + 0xC);
                    nm  = q2 + 0x40;
                    res = func_020f0db0(nm, &data_0213f838);
                    if ((res != -1) && (arg1 != 0)) {
                        p            = *(u8 **) (arg0 + 4) + off;
                        old          = p[1];
                        p[1]         = old + 1;
                        (p + old)[3] = res;
                    }
                } while (res != -1);
                off += 0x14;
                r11 += 1;
            }
            i += 1;
        } while (i < n);
    }
    return r11;
}
