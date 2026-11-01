/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned long u32;
typedef unsigned long long int u64;
typedef struct OSiAlarm OSAlarm;
typedef u64 OSTick;
extern OSTick func_020fb864(void);
typedef void (*OSAlarmHandler)(void *);
struct OSiAlarm {
    OSAlarmHandler handler;
    void *arg;

    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;

    OSTick period;
    OSTick start;
};
extern void func_020fbb60(OSAlarm *alarm, OSTick tick, OSAlarmHandler handler, void *arg);
extern void func_020fbf1c(void);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode func_020fbea0(void);
extern OSIntrMode func_020fbeb4(OSIntrMode state);
extern void func_020fbbd8(OSAlarm *alarm, OSTick fire);

/* Os_Alarm_Set from https://github.com/RonyxDumb/mkds src/arm9/0200f950_Os_Alarm_Set.c (license: none), reused by
 * tools/donor_match.py */
void func_020fbb60(OSAlarm *alarm, OSTick tick, OSAlarmHandler handler, void *arg) {
    if (!alarm || alarm->handler) {
        func_020fbf1c();
    }

    OSIntrMode enabled = func_020fbea0();

    alarm->period = 0;

    alarm->handler = handler;
    alarm->arg     = arg;

    func_020fbbd8(alarm, func_020fb864() + tick);

    (void) func_020fbeb4(enabled);
}
