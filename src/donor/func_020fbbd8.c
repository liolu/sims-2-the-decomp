/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OSi_InsertAlarm from projets/rayman-rr/src/donor/OSi_InsertAlarm.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed long long int s64;
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
struct OSiAlarmQueue {
    OSAlarm *head;
    OSAlarm *tail;
};
extern void func_020fbd80(OSAlarm *alarm);
extern struct OSiAlarmQueue data_02146308;
void func_020fbbd8(OSAlarm *alarm, OSTick fire) {
    if (alarm->period > 0) {
        OSTick tick = func_020fb864();

        fire = alarm->start;
        if (alarm->start < tick) {
            fire += alarm->period * ((tick - alarm->start) / alarm->period + 1);
        }
    }

    alarm->fire = fire;

    OSAlarm *prev;
    OSAlarm *next;

    for (next = data_02146308.head; next; next = next->next) {
        if ((s64) (fire - next->fire) >= 0) {
            continue;
        }

        alarm->prev = next->prev;
        next->prev  = alarm;
        alarm->next = next;
        prev        = alarm->prev;
        if (prev) {
            prev->next = alarm;
        } else {
            data_02146308.head = alarm;
            func_020fbd80(alarm);
        }

        return;
    }

    alarm->next        = 0;
    prev               = data_02146308.tail;
    data_02146308.tail = alarm;
    alarm->prev        = prev;
    if (prev) {
        prev->next = alarm;
    } else {
        data_02146308.head = data_02146308.tail = alarm;
        func_020fbd80(alarm);
    }
}
