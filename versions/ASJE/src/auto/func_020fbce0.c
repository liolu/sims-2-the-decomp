/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
typedef void (*OSAlarmHandler)(void *);
typedef struct OSiVAlarm OSVAlarm;
struct OSiVAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 tag;
    u32 frame;
    s16 fire;
    s16 delay;
    OSVAlarm *prev;
    OSVAlarm *next;
    BOOL period;
    BOOL finish;
    BOOL canceled;
};
extern void func_020fbce0(void);
typedef u32 OSIrqMask;
extern OSIrqMask func_020f982c(OSIrqMask mask);
extern struct OSiVAlarmQueue {
    OSVAlarm *head;
    OSVAlarm *tail;
} data_021461dc;
extern u16 data_021461d0;
extern s32 data_021461d8;
extern s32 data_021461d4;

/* Os_InitializeVAlarm from https://github.com/RonyxDumb/mkds src/arm9/0200fc1c_Os_InitializeVAlarm.c (license: none), reused
 * by tools/donor_match.py */
void func_020fbce0(void) {
    if (!data_021461d0) {
        data_021461d0 = 1;

        data_021461dc.head = ((void *) 0);
        data_021461dc.tail = ((void *) 0);

        (void) func_020f982c((1UL << 2));

        data_021461d8 = 0;
        data_021461d4 = 0;
    }
}
