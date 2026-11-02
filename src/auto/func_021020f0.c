/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PM_GoSleepMode from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/pm/pm_go_sleep_mode.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;
extern void func_020f6540(void);
extern void func_020f658c(void);
typedef volatile u32 vu32;
typedef u32 OSIrqMask;
extern OSIrqMask func_020f9968(OSIrqMask mask);
extern OSIrqMask _Z29AcknowledgeSpecificInterruptsj(OSIrqMask mask);
extern int func_020fbea0(void);
extern void func_020fbeb4(int state);
extern void func_020fbf10(u32 cycles);
typedef struct PowerHookEntry PowerHookEntry;
struct PowerHookEntry {
    void (*callback)(void *arg);
    void *arg;
    PowerHookEntry *next;
};
extern void func_02101fb4(PowerHookEntry *list);
extern BOOL func_02101fe4(void);
extern BOOL func_02102000(int on, int led, BOOL force, BOOL sync);
extern PowerHookEntry *data_02148030;
extern PowerHookEntry *data_02148038;
extern void func_020fbf04(void);
extern BOOL func_021071c8(void);
extern int func_02102358(int *topBackLight, int *bottomBackLight);
extern int func_02102400(void);
extern int func_02102454(int target, int value);
extern int func_02102520(int led);
extern int func_021027a8(u16 trigger, u16 keys);
static inline u16 SetIme(u16 value) {
    u16 previous                   = *((volatile u16 *) 0x04000208);
    *((volatile u16 *) 0x04000208) = value;
    return previous;
}
void func_021020f0(u32 trigger, u16 logic, u16 keyPattern) {
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

    func_02101fb4(data_02148030);
    savedIme        = SetIme(0);
    savedInterrupts = func_020fbea0();
    savedIrqMask    = func_020f9968(0x3fffff);
    _Z29AcknowledgeSpecificInterruptsj(0x40000);
    func_020fbeb4(savedInterrupts);
    SetIme(1);

    if (trigger & 0x8) {
        if (*((volatile u16 *) 0x027ffc40) == 2) {
            trigger &= ~0x8;
        }
    }
    if (trigger & 0x10) {
        if (!func_021071c8()) {
            trigger &= ~0x10;
        }
    }

    savedDispcnt    = *((volatile u32 *) 0x04000000);
    savedSubDispcnt = *((volatile u32 *) 0x04001000);
    lcdWasOn        = func_02101fe4();
    func_02102358(&topBackLight, &bottomBackLight);
    func_02102454(2, 0);

    tick = *((volatile u32 *) 0x027ffc3c);
    do {
        now = *((volatile u32 *) 0x027ffc3c);
    } while (tick == now);
    tick = *((volatile u32 *) 0x027ffc3c);
    func_020f658c();
    *((volatile u32 *) 0x04001000) &= ~0x10000;
    do {
        now = *((volatile u32 *) 0x027ffc3c);
    } while (tick == now);
    tick = *((volatile u32 *) 0x027ffc3c);
    do {
        now = *((volatile u32 *) 0x027ffc3c);
    } while (tick == now);

    command = trigger | (topBackLight << 5) | (bottomBackLight << 6);
    while (func_021027a8(command, logic | keyPattern) != 0) {
    }

    func_020fbf04();
    func_020fbf10(0x332340);

    if (trigger & 0x8) {
        if (*((volatile u32 *) 0x04000214) & 0x100000) {
            cardEjected = 1;
        }
    }
    if (!cardEjected) {
        if (lcdWasOn == 1) {
            func_02102000(1, 1, 1, 0);
            func_020f6540();
        } else {
            func_02102520(1);
        }
        *((volatile u32 *) 0x04000000) = savedDispcnt;
        *((volatile u32 *) 0x04001000) = savedSubDispcnt;
    }

    func_020fbea0();
    _Z29AcknowledgeSpecificInterruptsj(savedIrqMask);
    func_020fbeb4(savedInterrupts);
    SetIme(savedIme);
    if (cardEjected) {
        func_02102400();
    }
    func_02101fb4(data_02148038);
}
