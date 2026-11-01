/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02039c60 from https://github.com/aricloverEXTRA/PartnersInTimeDECOMP src/nitro/os/os_message.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef u16 OsThreadQueue;
extern u32 func_020fbea0(void);
extern u32 func_020fbeb4(u32 state);
extern void func_020fa2a0(OsThreadQueue *queue);
extern void func_020fa314(OsThreadQueue *queue);
typedef struct OsMessageQueue {
    OsThreadQueue send_waiters;
    OsThreadQueue receive_waiters;
    void **messages;
    int capacity;
    int first;
    int count;
} OsMessageQueue;
extern int func_020fab1c(OsMessageQueue *queue, void *message, int flags);
int func_020fab1c(OsMessageQueue *queue, void *message, int flags) {
    u32 state = func_020fbea0();
    while (queue->capacity <= queue->count) {
        if (!(flags & 1)) {
            func_020fbeb4(state);
            return 0;
        }
        func_020fa314(&queue->send_waiters);
    }
    queue->messages[(queue->first + queue->count) % queue->capacity] = message;
    queue->count++;
    func_020fa2a0(&queue->receive_waiters);
    func_020fbeb4(state);
    return 1;
}
