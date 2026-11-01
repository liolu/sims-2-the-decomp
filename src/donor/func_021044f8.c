/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* CARDi_SetCardDma from https://github.com/aricloverEXTRA/PartnersInTimeDECOMP src/nitro/card/card_rom_registers.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef volatile u32 vu32;
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
struct OsMutex {
    OsThreadQueue queue;
    u16 padding02;
    OsThread *owner;
    s32 count;
    OsMutex *previous;
    OsMutex *next;
};
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
extern CardWork data_02148260;
static inline CardWork *CARDi_GetCommon(void) {
    return (CardWork *) (u32) &data_02148260;
}
typedef struct CardRomStat CardRomStat;
struct CardRomStat {
    void (*read)(CardRomStat *stat);
    u32 control;
    u32 cache_address;
    u32 reserved0c[5];
    u8 buffer[512];
};
extern CardRomStat data_02148860;
extern void func_021044f8(void);
extern void func_02104550(u32 high, u32 low);
extern void func_020fd06c(u32 dma, const void *source, void *destination, u32 size);
void func_02104550(u32 high, u32 low);
void func_021044f8(void) {
    CardWork *work = CARDi_GetCommon();
    u32 source;
    func_020fd06c(work->dma, (void *) 0x04100010, work->destination, 512);
    source = (u32) work->source;
    func_02104550((source >> 8) | 0xB7000000, source << 24);
    (*(vu32 *) 0x040001A4) = data_02148860.control;
}
