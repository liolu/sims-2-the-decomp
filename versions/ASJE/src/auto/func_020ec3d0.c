/* compiler: 1.2/b56 */
#include "m2c.h"
typedef struct NNSFndLink {
    void *prevObject;
    void *nextObject;
} NNSFndLink;
typedef struct NNSFndList {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} NNSFndList;
void func_020ec43c(NNSFndList *, void *);
static inline NNSFndLink *GetLink(NNSFndList *list, void *obj) {
    return (NNSFndLink *) ((u32) obj + list->offset);
}
void func_020ec3d0(NNSFndList *list, void *object) {
    if (list->headObject == NULL) {
        func_020ec43c(list, object);
    } else {
        NNSFndLink *link                            = GetLink(list, object);
        link->prevObject                            = list->tailObject;
        link->nextObject                            = NULL;
        GetLink(list, list->tailObject)->nextObject = object;
        list->tailObject                            = object;
        list->numObjects++;
    }
}
