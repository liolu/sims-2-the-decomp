/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205b780 from children-of-mana/src/auto/func_0205b780.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef u16 OsThreadQueue;
extern u32 func_020fbd64(void);
extern u32 func_020fbd78(u32 state);
extern void func_020fa164(OsThreadQueue *queue);
extern void func_020fa1d8(OsThreadQueue *queue);
typedef struct OsMessageQueue {
    OsThreadQueue send_waiters;
    OsThreadQueue receive_waiters;
    void **messages;
    int capacity;
    int first;
    int count;
} OsMessageQueue;
extern int func_020fa934(OsMessageQueue *queue, void **message, int flags);
int func_020fa934(OsMessageQueue *queue, void **message, int flags) {
    u32 state = func_020fbd64();
    while (queue->count == 0) {
        if (!(flags & 1)) {
            func_020fbd78(state);
            return 0;
        }
        func_020fa1d8(&queue->receive_waiters);
    }
    if (message) {
        *message = queue->messages[queue->first];
    }
    queue->first = (queue->first + 1) % queue->capacity;
    queue->count--;
    func_020fa164(&queue->send_waiters);
    func_020fbd78(state);
    return 1;
}
