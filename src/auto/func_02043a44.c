/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct Node {
    struct Node *left, *right;
    u32 parent;
} Node;

static inline Node *Parent(Node *n) {
    return (Node *) (n->parent & ~1);
}

extern void func_02043c48(Node *, void **), func_02043cc0(Node *, void **);

static inline int Red(Node *n) {
    return (n->parent & 1) ? 1 : 0;
}

static inline void Black(Node *n) {
    n->parent &= ~1;
}

static inline void Paint(Node *n) {
    n->parent |= 1;
}

void func_02043a44(Node *n, void *volatile root) {
    Paint(n);
    while (n != root && Red(Parent(n)) == 1) {
        Node *p = Parent(n), *g = Parent(p);
        if (p == g->left) {
            Node *u = (Node *) g->right;
            if (u && Red(u) == 1) {
                Black(p);
                Black(u);
                n = Parent(Parent(n));
                Paint(n);
            } else {
                if (n == p->right) {
                    n = p;
                    func_02043c48(n, (void **) &root);
                }
                Black(Parent(n));
                Paint(Parent(Parent(n)));
                func_02043cc0(Parent(Parent(n)), (void **) &root);
            }
        } else {
            Node *u = (Node *) g->left;
            if (u && Red(u) == 1) {
                Black(p);
                Black(u);
                n = Parent(Parent(n));
                Paint(n);
            } else {
                if (n == p->left) {
                    n = p;
                    func_02043cc0(n, (void **) &root);
                }
                Black(Parent(n));
                Paint(Parent(Parent(n)));
                func_02043c48(Parent(Parent(n)), (void **) &root);
            }
        }
    }
    Black((Node *) root);
}
