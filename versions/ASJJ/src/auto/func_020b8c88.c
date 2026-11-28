/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;
typedef struct {
    u8 p0[4];
    u8 sub[0x68];
    s32 f6c;
    u8 p1[4];
    s32 f74;
    u8 p2[0x34];
    u16 b0 : 1;
    u16 b1 : 1;
    u16 b2 : 1;
    u16 b3 : 1;
    u16 b4 : 1;
    u16 b5 : 1;
    u16 b6 : 1;
    u16 rest : 9;
    u16 pad;
    u16 f_b0;
    u8 p3[0xc];
    u8 c_be;
    u8 c_bf;
} O;
extern void func_020b898c(void *);
extern void func_020ee050(void *, s32);

void func_020b8c88(O *p) {
    s32 v;
    if (p->b2 != 0) {
        if (p->b6 == 1) {
            v = p->f74;
            if (v != 0) {
                func_020ee050(p->sub, v);
                func_020b898c(&p->f74);
            }
        } else {
            v = p->f6c;
            if (v != 0) {
                func_020ee050(p->sub, v);
                func_020b898c(&p->f6c);
            }
        }
        p->f_b0 = 0xFFFF;
        p->b2   = 0;
        p->b0   = 1;
    }
    p->c_be = 0;
    p->c_bf = 0;
}
