/* compiler: 1.2/sp2p3 */
/* func_020a74e0 from projets/pokemon-dash/src/donor/func_020a74e0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
extern s32 func_020fb98c(void);
extern u16 func_020f9774(void *);
extern s32 func_020f9814(void *);
extern void func_020fb9a0(s32);
extern void WaitByLoop(s32);
void func_02106bb8(void *arg0, u32 *arg1) {
    for (;;) {
        arg1[1] = func_020fb98c();
        arg1[0] = func_020f9774((void *) 0x27FFFE8) & 0x40;
        if (arg1[0] != 0) {
            return;
        }
        if (func_020f9814(arg0) == 0) {
            return;
        }
        func_020fb9a0(arg1[1]);
        WaitByLoop(1);
    }
}
