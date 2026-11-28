/* compiler: 1.2/sp2p3 */
/* func_020c6fb0 from projets/eyeshield-21/src/auto/func_020c6fb0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
extern void func_0210403c(u32, u32);
u32 func_02103cb8(void) {
    u32 v;

    func_0210403c(0xB8000000, 0);
    v                            = *(s32 *) 0x027FFE60;
    v                            = (v & ~0x07000000) | 0xA7000000;
    *(volatile s32 *) 0x040001A4 = v & ~0x1FFF;
    while (!(*(volatile s32 *) 0x040001A4 & 0x800000)) {
    }
    return *(s32 *) 0x04100010;
}
