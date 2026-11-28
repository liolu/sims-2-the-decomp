/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;
typedef struct {
    s32 a;
    s32 b;
} E;
typedef struct {
    u8 pad[0x84];
    E e[4];
} S;
typedef unsigned int u32;

void func_020ee050(u8 *a, s32 b);
void func_020b898c(u8 *p);
void func_020bd270(u8 *p);

void func_020b9428(u8 *arg0) {
    s32 var_r7;
    u8 *var_r6;
    u8 *q;

    if (*(s32 *) (arg0 + 0x74) != 0) {
        func_020ee050(arg0 + 4, *(s32 *) (arg0 + 0x74));
        func_020b898c(arg0 + 0x74);
    }
    if (*(s32 *) (arg0 + 0x6C) != 0) {
        func_020ee050(arg0 + 4, *(s32 *) (arg0 + 0x6C));
        func_020b898c(arg0 + 0x6C);
    }
    if (((u32) (*(u16 *) (arg0 + 0xAC) << 26)) >> 31 == 1) {
        if (*(s32 *) (arg0 + 0x7C) != 0) {
            func_020ee050(arg0 + 4, *(s32 *) (arg0 + 0x7C));
            func_020b898c(arg0 + 0x7C);
            *(u16 *) (arg0 + 0xAC) = (u16) (*(u16 *) (arg0 + 0xAC) & ~0x20);
        }
    }
    if (((u32) (*(u16 *) (arg0 + 0xAC) << 24)) >> 31 == 1) {
        var_r6 = arg0 + 0x84;
        var_r7 = 0;
        do {
            if (((S *) arg0)->e[var_r7].a != 0) {
                func_020ee050(arg0 + 4, ((S *) arg0)->e[var_r7].a);
                func_020b898c(var_r6);
            }
            var_r7 += 1;
            var_r6 += 8;
        } while (var_r7 < 4);
        *(u16 *) (arg0 + 0xAC) = (u16) (*(u16 *) (arg0 + 0xAC) & ~0x80);
    }
    *(u16 *) (arg0 + 0xAC) = (u16) (*(u16 *) (arg0 + 0xAC) & ~0x10);
    func_020bd270(arg0);
    *(u16 *) (arg0 + 0xAE) = 0;
    *(s32 *) (arg0 + 0x68) = 0;
    *(u16 *) (arg0 + 0xB2) = 0xFFFF;
    *(u16 *) (arg0 + 0xB0) = 0;
    *(u8 *) (arg0 + 0xBE)  = 0;
    *(u8 *) (arg0 + 0xBF)  = 0;
    *(u16 *) (arg0 + 0xAC) = 0;
    *(u16 *) (arg0 + 0xAC) = (u16) (*(u16 *) (arg0 + 0xAC) | 0x40);
}
