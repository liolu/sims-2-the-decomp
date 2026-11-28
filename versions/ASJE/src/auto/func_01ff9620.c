/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Node {
    struct Node *a;
    struct Node *b;
    struct Node *c8;
    struct Node *c;
} Node;

Node *func_01ff9394(void *t, Node *root, Node *n);

Node *func_01ff9620(void *t, Node *root, Node *n, s32 key) {
    s32 flag = 0;
    Node *r;

    if (n == 0) {
        return n;
    }
    if (n->c == 0 && n->b == 0) {
        n    = func_01ff9394(t, root, n);
        flag = 1;
        if (n == 0) {
            return n;
        }
    }
    if (flag) {
        r = n->c;
    } else {
        r = n->b;
        if (r == 0) {
            r = n->c;
        }
    }
    if (key != 0 && (s32) r->a->c != key) {
        return func_01ff9620(t, root, r, key);
    }
    return r;
}
