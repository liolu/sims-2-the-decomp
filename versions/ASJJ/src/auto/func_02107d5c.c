/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ab674 from projets/pokemon-dash/src/donor/func_020ab674.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long size_t;
typedef char *va_list;
typedef struct {
    char *CharStr;
    size_t MaxCharCount;
    size_t CharsWritten;
} __OutStrCtrl;
extern int func_02107f6c(void *(*WriteProc)(void *, const char *, size_t), void *WriteProcArg, const char *format_str,
                         va_list arg);
extern void *func_02107ee4(void *wosc, const char *buffer, size_t numchars);
int func_02107d5c(char *s, unsigned int n, const char *format, va_list arg) {
    unsigned int end;
    __OutStrCtrl osc;

    osc.CharStr      = s;
    osc.MaxCharCount = n;
    osc.CharsWritten = 0;

    end = func_02107f6c(&func_02107ee4, &osc, format, arg);

    if (s != 0) {
        if (end < n) {
            s[end] = 0;
        } else if (n > 0) {
            *(s + n - 1) = 0;
        }
    }

    return end;
}
