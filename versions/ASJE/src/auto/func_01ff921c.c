/* compiler: 1.2/sp2p3 */
typedef struct {
    int a, b, c, id;
} O;
typedef struct M {
    O *o;
    struct M *volatile n;
    int x;
    struct M *volatile p;
} M;
void *func_01ff921c(void *arg0, void *arg1, int arg2, int arg3) {
    M *p = (M *) arg1;
    if (p == 0) {
        return 0;
    }
    switch (arg3) {
        case 0:
            if (p->n != 0) {
                do {
                    p = p->n;
                    if (p->o->id == arg2) {
                        return p;
                    }
                } while (p->n != 0);
            }
            break;
        case 1:
            if (p->p != 0) {
                do {
                    p = p->p;
                    if (p->o->id == arg2) {
                        return p;
                    }
                } while (p->p != 0);
            }
            break;
    }
    return 0;
}
