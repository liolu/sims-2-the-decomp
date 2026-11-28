/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Node020433e8 {
    struct Node020433e8 *left;
    struct Node020433e8 *right;
    u8 unk8[4];
    u16 key;
} Node020433e8;

typedef struct Tree020433e8 {
    s32 unk0;
    Node020433e8 *root;
} Tree020433e8;

Node020433e8 **func_02043370(Tree020433e8 *tree, u16 *key, Node020433e8 **found, u8 *goLeft, u8 *leftmost) {
    Node020433e8 *node;
    Node020433e8 **parent;
    *found    = NULL;
    node      = tree->root;
    *goLeft   = 1;
    *leftmost = 1;
    parent    = &tree->root;
    while (node != NULL) {
        parent = (Node020433e8 **) node;
        if (*key < node->key) {
            node    = node->left;
            *goLeft = 1;
        } else {
            *found    = node;
            node      = node->right;
            *goLeft   = 0;
            *leftmost = 0;
        }
    }
    return parent;
}
