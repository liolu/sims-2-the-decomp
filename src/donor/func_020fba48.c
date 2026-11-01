/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OSi_ArrangeTimer from projets/rayman-rr/src/donor/OSi_ArrangeTimer.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef u16 REGType16;
typedef vu16 REGType16v;
typedef struct OSiAlarm OSAlarm;
typedef enum {
    OS_TIMER_0 = 0,
    OS_TIMER_1 = 1,
    OS_TIMER_2 = 2,
    OS_TIMER_3 = 3
} OSTimer;
static inline void OS_SetTimerControl(OSTimer id, u16 control) {
    *((REGType16 *) ((u32) & (*(REGType16v *) 0x4000102) + id * 4)) = control;
}
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
struct OSiAlarmQueue {
    OSAlarm *head;
    OSAlarm *tail;
};
extern u32 data_027e0000[];
typedef u32 OSIrqMask;
extern OSIrqMask func_020f9968(OSIrqMask mask);
static inline void OS_SetIrqCheckFlag(OSIrqMask intr) {
    *(vu32 *) ((((u32) data_027e0000) + 0x00003fc0) + 0x38) |= (u32) intr;
}
extern void func_020fbd80(OSAlarm *alarm);
extern void func_020fbbd8(OSAlarm *alarm, OSTick fire);
extern struct OSiAlarmQueue data_02146308;
void func_020fba48(void) {
    OS_SetTimerControl(OS_TIMER_1, 0);

    (void) func_020f9968((1UL << 4));

    OS_SetIrqCheckFlag((1UL << 4));

    OSTick tick = func_020fb864();

    OSAlarm *alarm = data_02146308.head;

    if (!alarm) {
        return;
    }

    if (tick < alarm->fire) {
        func_020fbd80(alarm);
        return;
    }

    OSAlarm *next      = alarm->next;
    data_02146308.head = next;

    if (!next) {
        data_02146308.tail = ((void *) 0);
    } else {
        next->prev = ((void *) 0);
    }

    OSAlarmHandler handler = alarm->handler;

    if (!alarm->period) {
        alarm->handler = ((void *) 0);
    }

    if (handler) {
        (handler)(alarm->arg);
    }

    if (alarm->period > 0) {
        alarm->handler = handler;
        func_020fbbd8(alarm, 0);
    }

    if (data_02146308.head) {
        func_020fbd80(data_02146308.head);
    }
}
