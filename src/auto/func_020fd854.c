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
extern const struct SNDCommand *func_020fdaf8(u32 flags);
extern BOOL func_020fd854(u32 flags);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode func_020fbea0(void);
extern OSIntrMode func_020fbeb4(OSIntrMode state);
extern void func_020fbf10(u32 cycles);
extern void func_020fae94(register const void *startAddr, register u32 nBytes);
extern s32 func_020fe03c(s32 fifotag, u32 data, BOOL err);
extern struct SNDCommand data_02146660[256];
extern struct SNDCommand *data_021463ac[8 + 1];
extern struct SNDCommand *data_02146390;
extern struct SNDCommand *data_02146394;
extern s32 data_021463a0;
extern s32 data_021463a4;
extern u32 data_021463a8;
extern void func_020fd530(void);
const struct SNDCommand *func_020fdaf8(u32 flags);
BOOL func_020fd854(u32 flags) {
    OSIntrMode oldirq = func_020fbea0();

    if (data_02146390 == ((void *) 0)) {
        (void) func_020fbeb4(oldirq);
        return 1;
    }

    if (data_021463a4 >= 8) {
        if ((flags & 0x1) == 0) {
            (void) func_020fbeb4(oldirq);
            return 0;
        }

        do {
            (void) func_020fdaf8(0x1);
        } while (data_021463a4 >= 8);
    }

    func_020fae94(data_02146660, sizeof(data_02146660));

    s32 result = func_020fe03c(7, (u32) data_02146390, 0);
    if (result < 0) {
        if ((flags & 0x1) == 0) {
            (void) func_020fbeb4(oldirq);
            return 0;
        }

        result = func_020fe03c(7, (u32) data_02146390, 0);
        while (result < 0) {
            (void) func_020fbeb4(oldirq);
            func_020fbf10(100);
            oldirq = func_020fbea0();
            result = func_020fe03c(7, (u32) data_02146390, 0);
        }
    }

    if ((flags & 0x2) != 0) {
        func_020fd530();
    }

    data_021463ac[data_021463a0] = data_02146390;

    if (++data_021463a0 > 8) {
        data_021463a0 = 0;
    }

    data_02146390 = ((void *) 0);
    data_02146394 = ((void *) 0);
    data_021463a4++;
    data_021463a8++;

    (void) func_020fbeb4(oldirq);
    return 1;
}
void func_020fd530(void);
