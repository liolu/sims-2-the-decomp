/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Item {
    u8 unk_0[0x10];
    u16 unk_10;
    u8 unk_12;
} Item;

typedef struct Node {
    Item *item;
} Node;

typedef struct List {
    u32 unk_0;
    Node *head;
} List;

extern Node *func_01ff9620(List *, Node *, Node *, s32);
extern s32 func_01ff96c8(List *, Item *, s32);

Item *func_01ffae94(List *list, s32 id, s32 arg2) {
    Node *cur   = list->head;
    Node *head  = cur;
    Item *found = NULL;
    Item *item;
    Node *next;

    if (cur != NULL) {
        do {
            next = func_01ff9620(list, head, cur, arg2);
            item = cur->item;
            cur  = next;
            if ((item->unk_12 & 1) == 0 && id == item->unk_10) {
                if (arg2 == 0 || func_01ff96c8(list, item, arg2) != 0) {
                    found = item;
                    break;
                }
            }
        } while (cur != NULL);
    }
    return found;
}
