/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_020075f4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/Runtime/src/ExceptionHandler.cpp (license: none),
 * reused by tools/donor_match.py */
inline char *__DecodeAddress(char *p, void **paddr) {
    unsigned long addr;

    addr = ((unsigned char *) p)[0] | (((unsigned char *) p)[1] << 8) | (((unsigned char *) p)[2] << 16) |
           (((unsigned char *) p)[3] << 24);

    *paddr = (void *) addr;
    return (p + 4);
}
extern char *__DecodeSignedNumber(char *p, long *pnum);
extern char *__DecodeUnsignedNumber(char *p, unsigned long *pnum);
typedef struct ExceptionTableIndex {
    char *function_address;
    unsigned long function_size;
    char *exception_table;
} ExceptionTableIndex;
typedef unsigned char exaction_type;
extern "C" {
typedef struct CatchInfo {
    void *location;
    void *typeinfo;
    void *dtor;
    void *sublocation;
    long pointercopy;
    void *stacktop;
} CatchInfo;
}
typedef struct TargetContext {
    unsigned long GPR[16];
    char *throwSP;
    unsigned long frame_size;
    unsigned long argument_size;
    unsigned short saved_GPRs;
    bool has_flushback;
    bool has_frame_ptr;
    bool is_Thumb;
} TargetContext;
typedef struct ThrowContext {
    unsigned char *throwtype;
    void *location;
    void *dtor;
    CatchInfo *catchinfo;
    char *returnaddr;
    char *SP;
    char *FP;
    TargetContext target;
} ThrowContext;
typedef struct TargetExceptionInfo {
    int dummy;
} TargetExceptionInfo;
typedef struct ExceptionInfo {
    char *current_function;
    char *exception_record;
    char *action_pointer;
    ExceptionTableIndex *exception_table_start;
    ExceptionTableIndex *exception_table_end;
    TargetExceptionInfo target;
} ExceptionInfo;
namespace std {
    extern void terminate();
}
extern "C" char func_02111c78(const char *throwtype, const char *catchtype, long *offset_result);
typedef struct ActionIterator {
    ExceptionInfo info;
    ThrowContext context;
} ActionIterator;
typedef struct ex_catchblock {
    char *catch_type;
    unsigned long pcoffset;
    long cinfo_ref;
} ex_catchblock;
typedef struct ex_specification {
    unsigned long nspecs;
    unsigned long pcoffset;
    long cinfo_ref;
    char *specs;
} ex_specification;
inline void DecodeCatchBlock(char *ap, ex_catchblock *cb) {
    ap += sizeof(exaction_type);
    ap = __DecodeAddress(ap, (void **) &cb->catch_type);
    ap = __DecodeUnsignedNumber(ap, &cb->pcoffset);
    ap = __DecodeSignedNumber(ap, &cb->cinfo_ref);
}
inline void DecodeSpecification(char *ap, ex_specification *sp) {
    ap += sizeof(exaction_type);
    ap        = __DecodeUnsignedNumber(ap, &sp->nspecs);
    ap        = __DecodeUnsignedNumber(ap, &sp->pcoffset);
    ap        = __DecodeSignedNumber(ap, &sp->cinfo_ref);
    sp->specs = ap;
}
extern "C" exaction_type func_02111a3c(const ActionIterator *iter);
extern "C" exaction_type func_021116a0(ActionIterator *iter);
extern "C" int func_02110c38(const char *extype, ex_specification *spec);
extern "C" void func_02110bcc(ThrowContext *context, ExceptionInfo *info, ex_specification *spec, char *unexp);
extern "C" char *func_021109ec(ThrowContext *context, ExceptionInfo *info, long *result_offset) {
    ActionIterator iter;
    exaction_type action;
    ex_catchblock handler;
    ex_specification spec;

    iter.info    = *info;
    iter.context = *context;

    for (action = func_02111a3c(&iter);; action = func_021116a0(&iter)) {
        switch (action) {
            case 12:
                DecodeCatchBlock(iter.info.action_pointer, &handler);
                if (func_02111c78((const char *) context->throwtype, handler.catch_type, result_offset) == 0) {
                    continue;
                }
                break;
            case 15:
                DecodeSpecification(iter.info.action_pointer, &spec);
                if (func_02110c38((char *) context->throwtype, &spec) == 0) {
                    func_02110bcc(context, info, &spec, iter.info.action_pointer);
                }
                continue;
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
            case 13:
            case 16:
            case 17:
            case 18:
            case 19:
                continue;
            case 14:
            default:
                std::terminate();
                break;
        }
        break;
    }
    return iter.info.action_pointer;
}
