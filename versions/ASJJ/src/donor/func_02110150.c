/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200cb74 from children-of-mana/src/donor/func_0200cb74.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long __file_handle;
extern int func_02110150(__file_handle handle, unsigned char *buffer, int *count, void *ref);
// clang-format off
extern asm void func_02110110(register void* c);
// clang-format on
extern void func_02110110(void *c);
int func_02110150(__file_handle handle, unsigned char *buffer, int *count, void *ref) {
    unsigned long i, n;

    for (i = 0, n = *count; i < n; i++) {
        func_02110110(&buffer[i]);
    }

    return 0;
}
