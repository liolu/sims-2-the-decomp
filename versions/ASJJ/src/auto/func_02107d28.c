/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020728e4 from projets/club-house-games/src/donor/func_020728e4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef char *va_list;
extern int func_02107d5c(char *s, unsigned int n, const char *format, va_list arg);
int func_02107d28(char *s, const char *format, ...) {
    return func_02107d5c(
        s, 0xffffffffUL, format,
        ((va_list) ((char *) ((unsigned int) (&format) & ~3U) + ((((unsigned int) (sizeof(format))) + 3U) & ~3U))));
}
