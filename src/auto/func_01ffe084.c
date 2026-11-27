/* compiler: 1.2/sp2p3 */
typedef struct {
    volatile unsigned src;
    volatile unsigned dst;
    volatile unsigned cnt;
} DMA;
int func_01ffe084(int ch, unsigned a, unsigned b, unsigned c) {
    DMA *d = (DMA *) (0x040000B0 + ch * 12);
    unsigned v;
    d->src = a;
    d->dst = b;
    d->cnt = c;
    v      = *(volatile unsigned *) 0x040000B0;
    v      = *(volatile unsigned *) 0x040000B0;
    if (ch == 0) {
        d->src = 0;
        d->dst = 0;
        d->cnt = 0x81400001;
    }
    v = *(volatile unsigned *) 0x040000B0;
    return *(volatile unsigned *) 0x040000B0;
}
