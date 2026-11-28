/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Sound_FlushCommand from https://github.com/RonyxDumb/mkds src/arm9/020211e4_Sound_FlushCommand.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
struct SNDCommand {
    struct SNDCommand *llNext;
    s32 id;
    u32 arg[4];
};
extern const struct SNDCommand *func_020fd5e4(u32 flags);
extern BOOL func_020fd340(u32 flags);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode func_020fb98c(void);
extern OSIntrMode func_020fb9a0(OSIntrMode state);
extern void func_020fb9fc(u32 cycles);
extern void func_020fa980(register const void *startAddr, register u32 nBytes);
extern s32 func_020fdb28(s32 fifotag, u32 data, BOOL err);
extern struct SNDCommand data_02146180[256];
extern struct SNDCommand *data_02145ecc[8 + 1];
extern struct SNDCommand *data_02145eb0;
extern struct SNDCommand *data_02145eb4;
extern s32 data_02145ec0;
extern s32 data_02145ec4;
extern u32 data_02145ec8;
extern void func_020fd01c(void);
const struct SNDCommand *func_020fd5e4(u32 flags);
BOOL func_020fd340(u32 flags) {
    OSIntrMode oldirq = func_020fb98c();

    if (data_02145eb0 == ((void *) 0)) {
        (void) func_020fb9a0(oldirq);
        return 1;
    }

    if (data_02145ec4 >= 8) {
        if ((flags & 0x1) == 0) {
            (void) func_020fb9a0(oldirq);
            return 0;
        }

        do {
            (void) func_020fd5e4(0x1);
        } while (data_02145ec4 >= 8);
    }

    func_020fa980(data_02146180, sizeof(data_02146180));

    s32 result = func_020fdb28(7, (u32) data_02145eb0, 0);
    if (result < 0) {
        if ((flags & 0x1) == 0) {
            (void) func_020fb9a0(oldirq);
            return 0;
        }

        result = func_020fdb28(7, (u32) data_02145eb0, 0);
        while (result < 0) {
            (void) func_020fb9a0(oldirq);
            func_020fb9fc(100);
            oldirq = func_020fb98c();
            result = func_020fdb28(7, (u32) data_02145eb0, 0);
        }
    }

    if ((flags & 0x2) != 0) {
        func_020fd01c();
    }

    data_02145ecc[data_02145ec0] = data_02145eb0;

    if (++data_02145ec0 > 8) {
        data_02145ec0 = 0;
    }

    data_02145eb0 = ((void *) 0);
    data_02145eb4 = ((void *) 0);
    data_02145ec4++;
    data_02145ec8++;

    (void) func_020fb9a0(oldirq);
    return 1;
}
void func_020fd01c(void);
