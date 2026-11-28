/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PM_GoSleepMode from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/pm/pm_go_sleep_mode.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
extern void func_020f6404(void);
extern void func_020f6450(void);
typedef volatile u32 vu32;
typedef u32 OSIrqMask;
extern OSIrqMask func_020f982c(OSIrqMask mask);
extern OSIrqMask func_020f98ac(OSIrqMask mask);
extern int func_020fbd64(void);
extern void func_020fbd78(int state);
extern void func_020fbdd4(u32 cycles);
typedef struct PowerHookEntry PowerHookEntry;
struct PowerHookEntry {
    void (*callback)(void *arg);
    void *arg;
    PowerHookEntry *next;
};
extern void func_02101e78(PowerHookEntry *list);
extern BOOL func_02101ea8(void);
extern BOOL func_02101ec4(int on, int led, BOOL force, BOOL sync);
extern PowerHookEntry *data_02147ef0;
extern PowerHookEntry *data_02147ef8;
extern void func_020fbdc8(void);
extern BOOL func_0210708c(void);
extern int func_0210221c(int *topBackLight, int *bottomBackLight);
extern int func_021022c4(void);
extern int func_02102318(int target, int value);
extern int func_021023e4(int led);
extern int func_0210266c(u16 trigger, u16 keys);
static inline u16 SetIme(u16 value) {
    u16 previous                   = *((volatile u16 *) 0x04000208);
    *((volatile u16 *) 0x04000208) = value;
    return previous;
}
void func_02101fb4(u32 trigger, u16 logic, u16 keyPattern) {
    u16 savedIme;
    BOOL cardEjected;
    volatile int savedInterrupts;
    u32 savedDispcnt;
    u32 savedSubDispcnt;
    u32 now;
    vu32 savedIrqMask;
    volatile BOOL lcdWasOn;
    int topBackLight;
    u16 command;
    int bottomBackLight;
    vu32 tick;

    cardEjected = 0;

    func_02101e78(data_02147ef0);
    savedIme        = SetIme(0);
    savedInterrupts = func_020fbd64();
    savedIrqMask    = func_020f982c(0x3fffff);
    func_020f98ac(0x40000);
    func_020fbd78(savedInterrupts);
    SetIme(1);

    if (trigger & 0x8) {
        if (*((volatile u16 *) 0x027ffc40) == 2) {
            trigger &= ~0x8;
        }
    }
    if (trigger & 0x10) {
        if (!func_0210708c()) {
            trigger &= ~0x10;
        }
    }

    savedDispcnt    = *((volatile u32 *) 0x04000000);
    savedSubDispcnt = *((volatile u32 *) 0x04001000);
    lcdWasOn        = func_02101ea8();
    func_0210221c(&topBackLight, &bottomBackLight);
    func_02102318(2, 0);

    tick = *((volatile u32 *) 0x027ffc3c);
    do {
        now = *((volatile u32 *) 0x027ffc3c);
    } while (tick == now);
    tick = *((volatile u32 *) 0x027ffc3c);
    func_020f6450();
    *((volatile u32 *) 0x04001000) &= ~0x10000;
    do {
        now = *((volatile u32 *) 0x027ffc3c);
    } while (tick == now);
    tick = *((volatile u32 *) 0x027ffc3c);
    do {
        now = *((volatile u32 *) 0x027ffc3c);
    } while (tick == now);

    command = trigger | (topBackLight << 5) | (bottomBackLight << 6);
    while (func_0210266c(command, logic | keyPattern) != 0) {
    }

    func_020fbdc8();
    func_020fbdd4(0x332340);

    if (trigger & 0x8) {
        if (*((volatile u32 *) 0x04000214) & 0x100000) {
            cardEjected = 1;
        }
    }
    if (!cardEjected) {
        if (lcdWasOn == 1) {
            func_02101ec4(1, 1, 1, 0);
            func_020f6404();
        } else {
            func_021023e4(1);
        }
        *((volatile u32 *) 0x04000000) = savedDispcnt;
        *((volatile u32 *) 0x04001000) = savedSubDispcnt;
    }

    func_020fbd64();
    func_020f98ac(savedIrqMask);
    func_020fbd78(savedInterrupts);
    SetIme(savedIme);
    if (cardEjected) {
        func_021022c4();
    }
    func_02101e78(data_02147ef8);
}
