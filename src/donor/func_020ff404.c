/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FSi_NextCommand from https://github.com/aricloverEXTRA/PartnersInTimeDECOMP src/nitro/fs/fs_archive.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef u16 OsThreadQueue;
extern u32 func_020fbea0(void);
extern u32 func_020fbeb4(u32 state);
extern void func_020fa2a0(OsThreadQueue *queue);
typedef struct FsFile FsFile;
typedef struct FsArchive FsArchive;
typedef struct FsLink {
    struct FsLink *previous;
    struct FsLink *next;
} FsLink;
typedef struct FsFileId {
    FsArchive *archive;
    u32 id;
} FsFileId;
typedef struct FsDirectoryPosition {
    FsArchive *archive;
    u16 directory;
    u16 index;
    u32 position;
} FsDirectoryPosition;
typedef struct FsGetPathArgs {
    char *buffer;
    u32 capacity;
    u16 length;
    u16 directory;
} FsGetPathArgs;
typedef struct FsDirectoryEntry {
    union {
        FsDirectoryPosition directory;
        FsFileId file;
    } entry;
    int is_directory;
    u32 name_length;
    char name[128];
} FsDirectoryEntry;
typedef int (*FsArchiveIo)(FsArchive *archive, void *buffer, u32 offset, u32 size);
typedef int (*FsArchiveProc)(FsFile *file, int command);
struct FsArchive {
    u32 name;
    FsArchive *next;
    FsArchive *previous;
    OsThreadQueue sync_queue;
    OsThreadQueue suspend_queue;
    volatile u32 flags;
    FsLink commands;
    u32 base;
    u32 fat;
    u32 fat_size;
    u32 fnt;
    u32 fnt_size;
    u32 original_fat;
    u32 original_fnt;
    void *table_buffer;
    FsArchiveIo read;
    FsArchiveIo write;
    FsArchiveIo table_read;
    FsArchiveProc procedure;
    u32 procedure_mask;
};
struct FsFile {
    FsLink link;
    FsArchive *archive;
    volatile u32 flags;
    int command;
    volatile int result;
    OsThreadQueue queue;
    u16 padding1a;
    union {
        struct {
            u32 id;
            s32 top;
            s32 bottom;
            s32 position;
        } file;
        struct {
            FsDirectoryPosition position;
            u32 parent;
        } directory;
    } property;
    union {
        u32 words[6];
        FsFileId file_id;
        FsDirectoryPosition directory;
        struct {
            void *buffer;
            u32 size;
            u32 length;
        } io;
        struct {
            u32 top;
            u32 bottom;
            u32 id;
        } direct;
        struct {
            FsDirectoryEntry *entry;
            int skip_name;
        } read_directory;
        FsGetPathArgs get_path;
        struct {
            FsDirectoryPosition directory;
            const char *path;
            int find_directory;
            void *output;
        } path;
    } argument;
};
static inline int FSi_TestFileFlag(const FsFile *file, u32 mask) {
    if (file->flags & mask) {
        return 1;
    }
    return 0;
}
static inline int FSi_TestArchiveFlag(const FsArchive *archive, u32 mask) {
    if (archive->flags & mask) {
        return 1;
    }
    return 0;
}
extern void func_020ffc4c(FsFile *file);
extern void func_020fee08(FsFile *file, int result);
extern FsFile *func_020ff404(FsArchive *archive);
FsFile *func_020ff404(FsArchive *archive) {
    u32 state = func_020fbea0();
    FsFile *file;
    if (FSi_TestArchiveFlag(archive, 0x20)) {
        archive->flags &= ~0x20;
        file = (FsFile *) archive->commands.next;
        while (file) {
            FsFile *next = (FsFile *) file->link.next;
            if (FSi_TestFileFlag(file, 2)) {
                if ((FsFile *) archive->commands.next == file) {
                    archive->commands.next = (FsLink *) next;
                }
                func_020fee08(file, 3);
                if (!next) {
                    next = (FsFile *) archive->commands.next;
                }
            }
            file = next;
        }
    }
    if (!FSi_TestArchiveFlag(archive, 0x40) && !FSi_TestArchiveFlag(archive, 8) &&
        (file = (FsFile *) archive->commands.next)) {
        int idle = FSi_TestArchiveFlag(archive, 0x10) == 0;
        if (idle) {
            archive->flags |= 0x10;
        }
        func_020fbeb4(state);
        if (idle && (archive->procedure_mask & 0x200)) {
            archive->procedure(file, 9);
        }
        state = func_020fbea0();
        file->flags |= 0x40;
        if (FSi_TestFileFlag(file, 4)) {
            func_020fa2a0(&file->queue);
            func_020fbeb4(state);
            return 0;
        }
        func_020fbeb4(state);
        return file;
    } else {
        if (FSi_TestArchiveFlag(archive, 0x10)) {
            archive->flags &= ~0x10;
            if (archive->procedure_mask & 0x400) {
                FsFile temporary;
                func_020ffc4c(&temporary);
                temporary.archive = archive;
                archive->procedure(&temporary, 10);
            }
        }
        if (FSi_TestArchiveFlag(archive, 0x40)) {
            archive->flags &= ~0x40;
            archive->flags |= 8;
            func_020fa2a0(&archive->suspend_queue);
        }
        func_020fbeb4(state);
        return 0;
    }
}
