/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02071f1c from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0207/func_02071f1c.c (license: MIT), reused
 * by tools/donor_match.py */
extern void func_02110e18(void *a, void *b, int d);
extern void func_02110444(void *a, void *b, int x);
void func_02110bcc(char *a, void *b, char *c, int d) {
    char *buf;
    int off;

    func_02110e18(a, b, d);

    off                                    = *(int *) (c + 8);
    buf                                    = *(char **) (a + 0x18) + off;
    *(int *) (*(char **) (a + 0x18) + off) = *(int *) (a + 4);
    *(int *) (buf + 4)                     = *(int *) a;
    *(int *) (buf + 8)                     = *(int *) (a + 8);
    *(int *) (buf + 0x14)                  = d;

    func_02110444(a, b, *(int *) b + *(int *) (c + 4));
}
