/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02039d98 from https://github.com/aricloverEXTRA/PartnersInTimeDECOMP src/nitro/os/os_mutex.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef u16 OsThreadQueue;
typedef struct OsMutex OsMutex;
typedef struct OsContext {
    u32 cpsr;
    u32 registers[13];
    u32 sp;
    u32 lr;
    u32 pc;
    u32 supervisor_sp;
    u32 coprocessor[7];
} OsContext;
typedef struct OsThread {
    OsContext context;
    u32 state;
    struct OsThread *next;
    u32 id;
    u32 priority;
    u32 unknown74;
    OsMutex *waiting_mutex;
    OsMutex *mutex_head;
    OsMutex *mutex_tail;
    u32 *stack_bottom;
    u32 *stack_top;
    u32 stack_offset;
    OsThreadQueue join_waiters;
    u16 padding92;
} OsThread;
typedef void (*OsThreadSwitchCallback)(OsThread *previous, OsThread *next);
struct OsMutex {
    OsThreadQueue queue;
    u16 padding02;
    OsThread *owner;
    s32 count;
    OsMutex *previous;
    OsMutex *next;
};
typedef struct OsThreadInfo {
    u16 needs_reschedule;
    u16 thread_count;
    u16 reschedule_lock;
    u16 padding06;
    OsThread *current;
    OsThread *head;
    OsThreadSwitchCallback callback;
    OsThread *threads[16];
} OsThreadInfo;
extern OsThreadInfo data_02145ff4;
extern u32 func_020fbea0(void);
extern u32 func_020fbeb4(u32 state);
extern void func_020fac30(OsThread *thread, OsMutex *mutex);
int func_020fac54(OsMutex *mutex) {
    u32 state        = func_020fbea0();
    OsThread *thread = data_02145ff4.current;
    int acquired;
    if (!mutex->owner) {
        mutex->owner = thread;
        mutex->count++;
        func_020fac30(thread, mutex);
        acquired = 1;
    } else if (mutex->owner == thread) {
        mutex->count++;
        acquired = 1;
    } else {
        acquired = 0;
    }
    func_020fbeb4(state);
    return acquired;
}
void func_020fac30(OsThread *thread, OsMutex *mutex);
