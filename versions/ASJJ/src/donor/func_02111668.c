/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200e08c from children-of-mana/src/auto/func_0200e08c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
struct E {
    unsigned int f0;
    unsigned int f4;
    int f8;
};
struct E *func_02111668(struct E *base, int count, unsigned int key) {
    int lo = 0, hi = count - 1;
    while (lo <= hi) {
        int mid        = (lo + hi) >> 1;
        struct E *e    = &base[mid];
        unsigned int v = e->f0;
        if (key < v) {
            hi = mid - 1;
        } else if (key > v + (e->f4 & ~1u)) {
            lo = mid + 1;
        } else {
            return e;
        }
    }
    return 0;
}
