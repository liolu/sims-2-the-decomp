/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef __typeof__(sizeof(0)) size_t;

inline void *operator new(size_t, void *p) {
    return p;
}

struct Data {
    u32 x0;
    char name[12];
    u8 rest[0xb0];
};

struct Entry {
    Data d;
    s32 timer;
};

class Alloc {};

struct EntryVec;

extern "C" {
int func_02108070(const void *, const void *, int);
void *func_0210816c(void *, const void *, u32);
void func_020c8cf8(EntryVec *, const Entry &, Alloc);
}

struct EntryVec {
    Entry *data;
    u32 count, cap;

    Alloc get_alloc() const {
        return Alloc();
    }

    Entry *begin() {
        return data;
    }

    Entry *end() {
        return data + count;
    }

    void grow(const Entry &x) {
        func_020c8cf8(this, x, Alloc());
    }

    void push_back(const Entry &x) {
        Alloc a = get_alloc();
        (void) a;
        if (count < cap) {
            ++count;
            data[count - 1] = x;
        } else {
            grow(x);
        }
    }
};

extern "C" {
extern EntryVec data_021401c4;

void func_020c4798(const Data *p) {
    Entry *e;
    Entry *end;
    Entry tmp;
    for (e = data_021401c4.begin(), end = data_021401c4.end(); e != end; e++) {
        if (func_02108070(e->d.name, p->name, 12) == 0) {
            e->timer = 90;
            return;
        }
    }
    func_0210816c(&tmp.d, p, sizeof(Data));
    tmp.timer = 90;
    data_021401c4.push_back(tmp);
}
}
