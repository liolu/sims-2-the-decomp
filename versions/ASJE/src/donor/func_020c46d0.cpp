/* compiler: 1.2/sp2p3  */
/* func_020c4798 from sims-2-the/src/auto/func_020c4798.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
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
extern int func_02107f34(const void *, const void *, int);
extern void *func_02108030(void *, const void *, u32);
extern void func_020c8c30(EntryVec *, const Entry &, Alloc);
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
        func_020c8c30(this, x, Alloc());
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
extern EntryVec data_02140084;
void func_020c46d0(const Data *p) {
    Entry *e;
    Entry *end;
    Entry tmp;
    for (e = data_02140084.begin(), end = data_02140084.end(); e != end; e++) {
        if (func_02107f34(e->d.name, p->name, 12) == 0) {
            e->timer = 90;
            return;
        }
    }
    func_02108030(&tmp.d, p, sizeof(Data));
    tmp.timer = 90;
    data_02140084.push_back(tmp);
}
}
