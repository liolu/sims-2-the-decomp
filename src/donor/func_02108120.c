/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* memmove from https://github.com/Project-Holon/aletheia src/game/arm9/msl_string_mem.c (license: none (MIT = tooling only)),
 * reused by tools/donor_match.py */
typedef unsigned long size_t;
extern void *func_02108120(void *dest, const void *src, size_t n);
void *func_02108120(void *dest, const void *src, size_t n) {
    if ((const unsigned char *) src >= (unsigned char *) dest) {
        unsigned char *d       = (unsigned char *) dest;
        const unsigned char *s = (const unsigned char *) src;

        if (n == 0) {
            return dest;
        }

        do {
            *d++ = *s++;
        } while (--n != 0);

        return dest;
    } else {
        const unsigned char *s = (const unsigned char *) src + n;
        unsigned char *d       = (unsigned char *) dest + n;

        if (n == 0) {
            return dest;
        }

        do {
            *--d = *--s;
        } while (--n != 0);

        return dest;
    }
}
