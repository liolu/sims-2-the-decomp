/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200cbac from children-of-mana/src/donor/func_0200cbac.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long __file_handle;
extern int func_02110560(__file_handle handle, unsigned char *buffer, int *count, void *ref);
// clang-format off
extern asm int func_021104fc(void);
// clang-format on
int func_02110560(__file_handle handle, unsigned char *buffer, int *count, void *ref) {
    unsigned long i, n;

    for (i = 0, n = *count; i < n; i++) {
        buffer[i] = func_021104fc();
        if (buffer[i] == '\r' || buffer[i] == '\n') {
            *count = i + 1;
            break;
        }
    }

    return 0;
}
