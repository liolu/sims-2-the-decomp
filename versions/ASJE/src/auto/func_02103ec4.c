/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CARDi_ReadRom from https://github.com/aricloverEXTRA/PartnersInTimeDECOMP src/nitro/card/card_rom.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
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
extern OsThreadInfo data_02145eb4;
extern u32 func_020fbd64(void);
extern u32 func_020fbd78(u32 state);
extern void func_020fa1d8(OsThreadQueue *queue);
typedef void (*CardCallback)(void *argument);
typedef struct CardCommand {
    u32 result;
    u32 backup_type;
    u32 rom_id;
    u32 source;
    u32 destination;
    u32 length;
    u32 total_size;
    u32 sector_size;
    u32 page_size;
    u32 address_width;
    u32 write_delay;
    u32 erase_delay;
    u32 erase_timeout;
    u32 total_erase_delay;
    u32 total_erase_timeout;
    u32 program_timeout;
} CardCommand;
typedef struct CardWork CardWork;
typedef void (*CardTask)(CardWork *work);
struct CardWork {
    CardCommand *command;
    u32 reserved04;
    volatile s32 lock_owner;
    volatile s32 lock_count;
    OsThreadQueue lock_queue;
    u16 padding12;
    u32 resource;
    const u8 *volatile source;
    u8 *volatile destination;
    volatile u32 length;
    int dma;
    CardCallback callback;
    void *argument;
    CardTask task;
    volatile u32 flags;
    volatile u32 priority;
    OsThread thread;
    OsThread *volatile current_thread;
    OsThreadQueue task_queue;
    u16 paddingd6;
    u32 reservedd8[2];
    u8 buffer[256];
};
extern CardWork data_02148120;
static inline CardWork *CARDi_GetCommon(void) {
    return (CardWork *) (u32) &data_02148120;
}
extern u32 data_02148700;
typedef struct CardRomStat CardRomStat;
struct CardRomStat {
    void (*read)(CardRomStat *stat);
    u32 control;
    u32 cache_address;
    u32 reserved0c[5];
    u8 buffer[512];
};
extern CardRomStat data_02148720;
extern void func_02103690(CardTask task);
extern void func_02103400(void);
extern void func_02103ec4(u32 dma, u32 source, void *destination, u32 size, CardCallback callback, void *argument,
                          int asynchronous);
extern int func_02103eb8(void);
extern void func_02103fec(CardWork *work);
extern int func_021041f4(CardRomStat *stat);
extern void func_020fc144(u32 dma);
void func_02103fec(CardWork *work);
void func_02103ec4(u32 dma, u32 source, void *destination, u32 size, CardCallback callback, void *argument, int asynchronous) {
    CardWork *work    = CARDi_GetCommon();
    CardRomStat *stat = &data_02148720;
    u32 state;
    func_02103400();
    state = func_020fbd64();
    while (work->flags & 4) {
        func_020fa1d8(&work->task_queue);
    }
    work->flags |= 4;
    func_020fbd78(state);
    work->dma         = dma;
    work->source      = (u8 *) (source + data_02148700);
    work->destination = destination;
    work->length      = size;
    work->callback    = callback;
    work->argument    = argument;
    if (dma <= 3) {
        func_020fc144(dma);
    }
    if (func_021041f4(stat)) {
        if (!asynchronous) {
            func_02103eb8();
        }
    } else if (asynchronous) {
        func_02103690(func_02103fec);
    } else {
        work->current_thread = data_02145eb4.current;
        func_02103fec(work);
    }
}
int func_02103eb8(void);
