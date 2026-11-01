/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FS_EndOverlay from https://github.com/aricloverEXTRA/PartnersInTimeDECOMP src/nitro/fs/fs_overlay.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
typedef unsigned int u32;
extern u32 func_020fbea0(void);
extern u32 func_020fbeb4(u32 state);
typedef struct FsOverlayInfo {
    u32 id;
    u8 *address;
    u32 ram_size;
    u32 bss_size;
    void (**initializers)(void);
    void (**initializers_end)(void);
    u32 file_id;
    u32 compressed_size : 24;
    u32 flags : 8;
    int processor;
    u32 file_offset;
    u32 file_size;
} FsOverlayInfo;
extern void func_021000b4(FsOverlayInfo *overlay);
typedef struct FsDestructor {
    struct FsDestructor *next;
    void (*callback)(void *);
    void *argument;
} FsDestructor;
extern FsDestructor *data_02149b28;
static inline u32 FSi_GetOverlayBssLength(u32 ram_size, u32 bss_size) {
    s32 total = (s32) (ram_size + bss_size);
    return total - (s32) ram_size;
}
void func_021000b4(FsOverlayInfo *overlay) {
    for (;;) {
        FsDestructor *selected = 0;
        FsDestructor *tail;
        u32 ram_size  = overlay->ram_size;
        u32 ram_start = (u32) overlay->address;
        u32 bss_size  = overlay->bss_size;
        u32 ram_end   = ram_start + ram_size;
        u32 bss_end   = ram_end + FSi_GetOverlayBssLength(ram_size, bss_size);
        u32 state;
        FsDestructor *previous;
        FsDestructor *head;
        FsDestructor *current;
        tail     = 0;
        state    = func_020fbea0();
        head     = data_02149b28;
        previous = 0;
        current  = head;
        while (current) {
            u32 callback       = (u32) current->callback;
            FsDestructor *next = current->next;
            u32 argument       = (u32) current->argument;
            if ((callback >= ram_start && callback < ram_end) || (argument >= ram_end && argument < bss_end)) {
                if (tail) {
                    tail->next = current;
                } else {
                    selected = current;
                }
                if (head == current) {
                    data_02149b28 = next;
                    head          = next;
                }
                current->next = 0;
                tail          = current;
                if (previous) {
                    previous->next = next;
                }
            } else {
                previous = current;
            }
            current = next;
        }
        func_020fbeb4(state);
        if (!selected) {
            return;
        }
        do {
            void (*callback)(void *) = selected->callback;
            FsDestructor *next       = selected->next;
            if (callback) {
                callback(selected->argument);
            }
            selected = next;
        } while (selected);
    }
}
