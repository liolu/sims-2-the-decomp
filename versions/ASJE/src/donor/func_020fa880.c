/* compiler: 1.2/sp2p3  */
/* func_0205b6cc from children-of-mana/src/auto/func_0205b6cc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
extern void *func_020fbd64(void);
extern void func_020fa1d8(void *);
extern void func_020fa164(void *);
extern void func_020fbd78(void *);
s32 func_020fa880(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r4;
    u8 *b;
    s32 cnt;
    s32 cap;

    b       = (u8 *) arg0;
    temp_r4 = func_020fbd64();
    cnt     = *(s32 *) (b + 8);
    cap     = *(s32 *) (b + 0x10);
    if (cnt <= cap) {
        for (;;) {
            if (!(arg2 & 1)) {
                func_020fbd78(temp_r4);
                return 0;
            }
            func_020fa1d8(arg0);
            if (*(s32 *) (b + 8) > *(s32 *) (b + 0x10)) {
                break;
            }
        }
        cnt = *(s32 *) (b + 8);
    }
    *(s32 *) (b + 0xC)                                     = (*(s32 *) (b + 0xC) + cnt - 1) % cnt;
    *(s32 *) (*(u8 **) (b + 4) + (*(s32 *) (b + 0xC) * 4)) = arg1;
    *(s32 *) (b + 0x10)                                    = *(s32 *) (b + 0x10) + 1;
    func_020fa164(b + 2);
    func_020fbd78(temp_r4);
    return 1;
}
