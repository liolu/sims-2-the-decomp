/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* MSL_FindActiveCatch from https://github.com/aricloverEXTRA/PartnersInTimeDECOMP src/msl/active_catch.cpp (license: none),
 * reused by tools/donor_match.py */
extern "C" {
typedef unsigned char u8;
typedef signed int s32;
typedef unsigned int u32;
typedef struct MslExceptionEntry {
    u32 start, length_and_flags, information;
} MslExceptionEntry;
typedef struct MslUnwindRecord {
    u32 function;
    const u8 *instructions;
    const u8 *handler;
    const MslExceptionEntry *table_start, *table_end;
} MslUnwindRecord;
extern u8 func_02111a3c(const MslUnwindRecord *record);
typedef struct MslSearchSavedState {
    u32 words[21];
} MslSearchSavedState;
typedef struct MslSearchContext {
    const u8 *type;
    void *object;
    void *destructor;
    void *active_catch;
    u32 address, stack_pointer;
    u8 *frame_pointer;
    MslSearchSavedState state;
} MslSearchContext;
typedef struct MslSearchRecord {
    MslUnwindRecord lookup;
    u32 unknown20;
} MslSearchRecord;
typedef struct MslSearchCursor {
    MslSearchRecord record;
    MslSearchContext context;
} MslSearchCursor;
typedef struct MslActiveCatch {
    void *object;
    const u8 *type;
} MslActiveCatch;
}
extern "C" {
extern int func_021116a0(MslSearchCursor *);
extern void _ZSt9terminatev(void);
const u8 *_Z20__DecodeSignedNumberPcPl(const u8 *, s32 *);
MslActiveCatch *func_02110cc4(MslSearchContext *context, const MslSearchRecord *record) {
    s32 offset;
    MslSearchCursor cursor;
    cursor.record.lookup.function     = record->lookup.function;
    cursor.record.lookup.instructions = record->lookup.instructions;
    cursor.record.lookup.handler      = record->lookup.handler;
    cursor.record.lookup.table_start  = record->lookup.table_start;
    cursor.record.lookup.table_end    = record->lookup.table_end;
    cursor.record.unknown20           = record->unknown20;
    cursor.context.type               = context->type;
    cursor.context.object             = context->object;
    cursor.context.destructor         = context->destructor;
    cursor.context.active_catch       = context->active_catch;
    cursor.context.address            = context->address;
    cursor.context.stack_pointer      = context->stack_pointer;
    cursor.context.frame_pointer      = context->frame_pointer;
    cursor.context.state              = context->state;
    int kind                          = func_02111a3c(&cursor.record.lookup);
    for (;;) {
        switch (kind) {
            case 0:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 15:
            case 16:
            case 17:
            case 18:
                break;
            case 13:
                goto found;
            default:
                _ZSt9terminatev();
                goto found;
        }
        kind = func_021116a0(&cursor);
    }
found:
    _Z20__DecodeSignedNumberPcPl(cursor.record.lookup.handler + 1, &offset);
    MslActiveCatch *active = (MslActiveCatch *) (cursor.context.frame_pointer + offset);
    context->type          = active->type;
    context->object        = active->object;
    context->destructor    = 0;
    context->active_catch  = active;
    return active;
}
}
