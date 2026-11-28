/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02065cc0 from projets/nintendogs-dachshund/src/donor/func_02065cc0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef struct OSThread OSThread;
typedef struct OSMutex OSMutex;
typedef struct OSThreadQueue {
    u16 head;
    u16 tail;
} OSThreadQueue;
typedef struct OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
} OSMutexQueue;
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutex *prev;
    OSMutex *next;
};
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pcPlus4;
    u32 spSvc;
    u8 cpContext[0x1c];
} OSContext;
struct OSThread {
    OSContext context;
    u32 state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    OSMutex *mutex;
    OSMutexQueue mutexQueue;
    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;
    OSThreadQueue joinQueue;
};
typedef struct CARDiBackupSpec {
    u32 totalSize;
    u32 sectorSize;
    u32 pageSize;
    u32 addrWidth;
    u32 unk_10;
    u32 unk_14;
    u32 unk_18;
    u32 unk_1C;
    u32 unk_20;
    u32 unk_24;
} CARDiBackupSpec;
typedef struct CARDiCommandArg {
    int result;
    u32 type;
    u32 unk_08;
    u32 src;
    u32 dst;
    u32 len;
    CARDiBackupSpec spec;
} CARDiCommandArg;
typedef void (*CARDCallback)(void *arg);
typedef struct CARDiRomPage CARDiRomPage;
struct CARDiRomPage {
    void (*readPages)(CARDiRomPage *page);
    u32 control;
    u32 address;
    u8 unk_0C[20];
    u8 data[512];
};
typedef struct CARDiCommon CARDiCommon;
typedef void (*GameCardTaskStep)(CARDiCommon *common);
struct CARDiCommon {
    CARDiCommandArg *cmd;
    u32 unk_04;
    volatile int lockOwner;
    volatile int lockCount;
    OSThreadQueue lockQueue;
    u32 lockTarget;
    u32 src;
    u32 dst;
    u32 len;
    u32 unk_24;
    CARDCallback callback;
    void *callbackArg;
    GameCardTaskStep task;
    u32 flag;
    u32 priorityMode;
    OSThread thread;
    OSThread *waiter;
    OSThreadQueue queue;
    u8 unk_D8[8];
    u8 pageBuffer[0x100];
    u8 stack[0x400];
};
extern CARDiCommon data_02148120;
extern CARDiRomPage data_02148720;
extern u32 data_02148700;
extern u32 data_02148700;
extern __attribute__((aligned(32))) CARDiRomPage data_02148720;
extern void func_0210343c(void);
extern void func_021040f4(CARDiRomPage *page);
extern void func_02104828(void);
void func_02103e30(void) {
    CARDiCommon *common = &data_02148120;

    if (common->flag != 0) {
        return;
    }
    common->flag = 0x01;
    common->src = common->dst = common->len = 0;
    common->unk_24                          = -1;
    common->callback                        = ((void *) 0);
    common->callbackArg                     = ((void *) 0);
    data_02148700                           = 0;
    func_0210343c();
    data_02148720.readPages = func_021040f4;
    func_02104828();
}
