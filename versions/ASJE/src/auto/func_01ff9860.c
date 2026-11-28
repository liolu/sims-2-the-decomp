/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_01ff9620(u8 *a, void *b, void *c, s32 d);

void *func_01ff9860(u8 *arg0, s32 arg1) {
    void *next;
    void *head;
    void *cur;
    cur  = *(void **) (arg0 + 4);
    head = cur;
    while (cur != NULL) {
        next = func_01ff9620(arg0, head, cur, 0);
        if (*(s32 *) cur == arg1) {
            return cur;
        }
        cur = next;
    }
    return NULL;
}
