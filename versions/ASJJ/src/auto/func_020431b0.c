/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct Node {
    u8 pad[0xc];
    u16 key;
} Node;
typedef struct KV {
    u16 key;
    s32 val;
} KV;
s32 func_020433fc(void *, u16 *, Node **, u8 *, u8 *);
u8 *func_02043948(void *, s32, u8, u8, KV *);
extern s32 data_02131264;
u8 *func_020431b0(void *m, u16 *key) {
    u8 b4;
    u8 b5;
    Node *node;
    KV kv;
    s32 r = func_020433fc(m, key, &node, &b4, &b5);
    if (node == NULL || node->key < *key) {
        kv.key = *key;
        kv.val = data_02131264;
        return func_02043948(m, r, b4, b5, &kv) + 0xc;
    }
    return (u8 *) node + 0xc;
}
