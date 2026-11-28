/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210a4c0 from projets/sims-2-the/src/donor/func_0210a4c0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
extern char *func_0210a384(const char *str, int c);
char *func_0210a384(const char *str, int c) {
    const u8 *s = (const u8 *) str;
    u8 m        = (u8) c;
    u8 ch;

    ch = *s++;
    while (ch != 0) {
        if (ch == m) {
            return (char *) s - 1;
        }
        ch = *s++;
    }
    return m ? 0 : (char *) s - 1;
}
