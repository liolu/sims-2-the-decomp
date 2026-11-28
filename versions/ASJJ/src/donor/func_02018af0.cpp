/* compiler: 1.2/sp2p3  */
/* func_02018af8 from sims-2-the/src/auto/func_02018af8.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual s32 f7(s32, s32);
    virtual VA **f8(VA *, s32);
    virtual VA **f9(VA *, s32);
};
extern "C" {
extern VA **func_02045628(VA *);
extern VA **func_02045630(VA *);
void func_02018af0(VA **arg0, s32 arg1, s32 arg2, s32 arg3) {
    VA **cur;
    VA **next;
    s32 f2;
    s32 f1;

    f2 = arg3 & 2;
    if (f2 != 0) {
        cur = func_02045630(*arg0);
    } else {
        cur = func_02045628(*arg0);
    }
    if (cur == ((void *) 0)) {
        return;
    }
    f1 = arg3 & 1;
    do {
        if (f2 != 0) {
            next = (*arg0)->f8((VA *) cur, 0);
        } else {
            next = (*arg0)->f9((VA *) cur, 0);
        }
        if ((*cur)->f7(arg1, arg2) == 2 && f1 == 0) {
            return;
        }
        cur = next;
    } while (cur != ((void *) 0));
}
}
