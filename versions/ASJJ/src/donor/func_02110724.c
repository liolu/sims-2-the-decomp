/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200d148 from children-of-mana/src/auto/func_0200d148.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef struct {
    unsigned int count;
    int pad4;
    int pad8;
    unsigned char *data;
} List;
extern int func_02111764(void *a, unsigned int val, void *out);
int func_02110724(void *a, List *list) {
    unsigned char *p;
    unsigned int i;
    unsigned int buf[2];

    p = list->data;
    for (i = 0; i < list->count; i++) {
        unsigned int val = p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24);
        buf[0]           = val;
        if (func_02111764(a, val, &buf[1])) {
            return 1;
        }
        p += 4;
    }
    return 0;
}
