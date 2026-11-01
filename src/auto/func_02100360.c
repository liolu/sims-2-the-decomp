/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FS_LoadOverlayImage from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/fs/fs_load_overlay_image.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;
typedef struct OSThreadQueue {
    u16 head;
    u16 tail;
} OSThreadQueue;
typedef struct FSArchive FSArchive;
typedef struct FSFile FSFile;
typedef struct FSFileID {
    FSArchive *arc;
    u32 file_id;
} FSFileID;
typedef struct FSDirPos {
    FSArchive *arc;
    u16 ownId;
    u16 index;
    u32 pos;
} FSDirPos;
typedef struct DirListingEntry {
    union {
        FSFileID fileId;
        FSDirPos dirId;
    };
    u32 isDirectory;
    u32 nameLength;
    char name[127 + 1];
} DirListingEntry;
typedef struct FSGetPathInfo {
    u8 *buffer;
    u32 bufferSize;
    u16 totalLength;
    u16 dirId;
} FSGetPathInfo;
struct FSFile {
    FSFile *prev;
    FSFile *next;
    FSArchive *arc;
    u32 flags;
    u32 command;
    u32 error;
    OSThreadQueue queue;
    union {
        struct {
            u32 id;
            u32 top;
            u32 bottom;
            u32 pos;
        };
        struct {
            FSDirPos dirPos;
            u32 parent;
        };
    };
    union {
        struct {
            u32 top;
            u32 bottom;
            u32 id;
        } openFileDirect;
        struct {
            u32 unused;
            u32 id;
        } openFileFast;
        struct {
            void *dest;
            u32 requested;
            u32 length;
        } readFile;
        struct {
            FSDirPos pos;
        } seekDir;
        struct {
            DirListingEntry *entry;
            BOOL skipName;
        } readDir;
        struct {
            FSDirPos pos;
            const char *path;
            BOOL findDirectory;
            union {
                FSFileID *file;
                FSDirPos *dir;
            } result;
        } findPath;
        FSGetPathInfo getPath;
    } arg;
};
typedef int (*ArchiveByteReader)(FSArchive *arc, void *dest, u32 src, u32 len);
typedef int (*ArchiveByteWriter)(FSArchive *arc, const void *src, u32 dest, u32 len);
struct FSArchive {
    u32 name;
    FSArchive *next;
    FSArchive *prev;
    OSThreadQueue queue;
    u32 flags;
    u32 unk_14;
    FSFile *command;
    u32 base;
    u32 fat;
    u32 fatSize;
    u32 fnt;
    u32 fntSize;
    u32 fatOriginal;
    u32 fntOriginal;
    u32 unk_38;
    ArchiveByteReader read;
    ArchiveByteWriter write;
    ArchiveByteReader readTable;
    void *tableBuffer;
    u32 tableBufferSize;
};
typedef struct OverlayTableRow {
    u32 id;
    u8 *ram_address;
    u32 ram_size;
    u32 bss_size;
    void *sinit_init;
    void *sinit_init_end;
    u32 file_id;
    u32 compressed : 24;
    u32 flag : 8;
} OverlayTableRow;
typedef struct FSOverlayInfo {
    OverlayTableRow header;
    u32 target;
    u32 romTop;
    u32 romSize;
} FSOverlayInfo;
extern FSFileID func_02100624(const FSOverlayInfo *info);
extern void func_020ffc4c(FSFile *file);
extern BOOL func_02100360(const FSOverlayInfo *info);
extern s32 func_020ff7c4(FSFile *file, void *dest, s32 size);
extern BOOL func_020ff8b4(FSFile *file);
extern BOOL func_020ff94c(FSFile *file, FSFileID id);
extern u32 func_02100690(const FSOverlayInfo *info);
extern void func_0210064c(const FSOverlayInfo *info);
BOOL func_02100360(const FSOverlayInfo *info) {
    FSFileID id;
    FSFile file;
    u32 size;

    func_020ffc4c(&file);
    id = func_02100624(info);
    if (!func_020ff94c(&file, id)) {
        return 0;
    }
    size = func_02100690(info);
    func_0210064c(info);
    if (func_020ff7c4(&file, info->header.ram_address, size) != size) {
        func_020ff8b4(&file);
        return 0;
    }
    func_020ff8b4(&file);
    return 1;
}
