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
extern const struct SNDCommand *func_020fd9bc(u32 flags);
extern BOOL func_020fd718(u32 flags);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode func_020fbd64(void);
extern OSIntrMode func_020fbd78(OSIntrMode state);
extern void func_020fbdd4(u32 cycles);
extern void func_020fad58(register const void *startAddr, register u32 nBytes);
extern s32 func_020fdf00(s32 fifotag, u32 data, BOOL err);
extern struct SNDCommand data_02146520[256];
extern struct SNDCommand *data_0214626c[8 + 1];
extern struct SNDCommand *data_02146250;
extern struct SNDCommand *data_02146254;
extern s32 data_02146260;
extern s32 data_02146264;
extern u32 data_02146268;
extern void func_020fd3f4(void);
const struct SNDCommand *func_020fd9bc(u32 flags);
BOOL func_020fd718(u32 flags) {
    OSIntrMode oldirq = func_020fbd64();

    if (data_02146250 == ((void *) 0)) {
        (void) func_020fbd78(oldirq);
        return 1;
    }

    if (data_02146264 >= 8) {
        if ((flags & 0x1) == 0) {
            (void) func_020fbd78(oldirq);
            return 0;
        }

        do {
            (void) func_020fd9bc(0x1);
        } while (data_02146264 >= 8);
    }

    func_020fad58(data_02146520, sizeof(data_02146520));

    s32 result = func_020fdf00(7, (u32) data_02146250, 0);
    if (result < 0) {
        if ((flags & 0x1) == 0) {
            (void) func_020fbd78(oldirq);
            return 0;
        }

        result = func_020fdf00(7, (u32) data_02146250, 0);
        while (result < 0) {
            (void) func_020fbd78(oldirq);
            func_020fbdd4(100);
            oldirq = func_020fbd64();
            result = func_020fdf00(7, (u32) data_02146250, 0);
        }
    }

    if ((flags & 0x2) != 0) {
        func_020fd3f4();
    }

    data_0214626c[data_02146260] = data_02146250;

    if (++data_02146260 > 8) {
        data_02146260 = 0;
    }

    data_02146250 = ((void *) 0);
    data_02146254 = ((void *) 0);
    data_02146264++;
    data_02146268++;

    (void) func_020fbd78(oldirq);
    return 1;
}
void func_020fd3f4(void);
