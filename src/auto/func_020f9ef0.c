/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210d21c from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/os/func_0210d21c.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef struct Unk_0210d21c Unk_0210d21c;
struct Unk_0210d21c {
    u32 unk_0;
    u16 unk_4;
    u16 unk_6;
};
extern u32 data_02145fe0;
extern void func_020f9c78(void);
extern void func_020f9de8(int tag, void *block, int arg);
extern void func_020f9e88(int tag, void *block, int arg);
extern void func_020fca8c(u32 value, void *dest, u32 size);
void func_020f9ef0(void) {
    Unk_0210d21c *block;
    vu32 zero;

    if (data_02145fe0 != 0) {
        return;
    }
    data_02145fe0                        = 1;
    ((Unk_0210d21c *) 0x027ffff0)->unk_0 = 0;
    func_020f9e88(0x7e, ((Unk_0210d21c *) 0x027ffff0), 0);
    block = ((Unk_0210d21c *) 0x027ffff0);
    while (block->unk_6 != 0) {
        func_020f9c78();
    }
    *(vu32 *) 0x027fffb0 = -1;
    *(vu32 *) 0x027fffb4 = -0x10000;
    zero                 = 0;
    func_020fca8c(zero, (void *) 0x027fffc0, 0x28);
    (*(vu16 *) 0x04000204) |= 0x800;
    (*(vu16 *) 0x04000204) |= 0x80;
    func_020f9de8(0x7e, ((Unk_0210d21c *) 0x027ffff0), 0);
    func_020f9e88(0x7f, ((Unk_0210d21c *) 0x027ffff0), 0);
}
