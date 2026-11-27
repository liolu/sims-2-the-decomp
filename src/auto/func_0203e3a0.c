/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef struct {
    u16 v;
} U16One;
typedef struct {
    u8 b[6];
} B6;

extern u16 data_021397e8;
extern U16One data_02131758;
extern B6 data_0213175c;
extern u32 data_0213f98c;
extern u32 data_027e0004;
extern volatile u32 data_027e0000; // volatile: asm reloads it before every use (ldr r0,[r4])

void func_020f6484();
void func_020bc9f8();
void func_0203cfb0();
void func_0203d208();
void func_0203cc08();
void func_020462cc();
s32 func_02051c20();
void func_02051b80();
void func_02051a50();
s32 func_02052258();
void func_0205166c();

void func_0203e3a0(void) {
    u32 sv;
    u32 junk;
    s32 w0;
    s32 w1;
    s32 w2;
    s32 w3;
    s32 w4;
    s32 w5;
    s32 w6;
    s32 w7;
    U16One hw;
    B6 pal;
    u32 i;
    s32 res;

    data_021397e8                = 1;
    sv                           = *(volatile u16 *) 0x04000208 & 0xff;
    *(volatile u16 *) 0x04000208 = 0;
    func_020f6484(0x0400006c, 0);
    func_020f6484(0x0400106c, 0);
    pal           = data_0213175c;
    data_027e0004 = data_027e0004 | 0x200;
    data_027e0000 = 0;
    func_020bc9f8(data_0213f98c, 4, 0);
    w4 = 0x80;
    w5 = 0x46;
    w6 = 0x78;
    w3 = 0;
    w0 = 0;
    w1 = 0;
    w2 = 0;
    w7 = 0;
    for (i = 0; i < 2; i++) {
        data_027e0000 = i;
        hw            = data_02131758;
        func_0203cfb0(w0);
        *(volatile u32 *) (0x04000000 + (data_027e0000 << 12)) &= ~0x1000;
        func_0203d208(w1, hw);
        func_0203cc08(w2, w2);
        *(volatile u32 *) (0x04000010 + (data_027e0000 << 12)) = 0;
        *(volatile u16 *) (0x04000050 + (data_027e0000 << 12)) = 0;
        *(volatile u16 *) (0x05000000 + (data_027e0000 << 10)) = 0;
        *(volatile u16 *) (0x05000002 + (data_027e0000 << 10)) = 0xffff;
        func_020462cc(0x05000000 + (data_027e0000 << 10), &pal, 6);
        if (func_02051c20(3, w7) != 0) {
            func_02051b80(hw);
            func_02051a50(3, w3, -1);
            res = func_02052258(0xc1e);
            func_0205166c(1, w4, w5, w6, res, 1);
        }
    }
    junk                         = *(volatile u16 *) 0x04000208; // volatile: hardware IME register, asm has a dead read
    *(volatile u16 *) 0x04000208 = sv;
}
