/* compiler: 1.2/sp2p3  */
/* func_0206c0d4 from sims-2-the/src/auto/func_0206c0d4.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
struct VA {
    virtual s32 f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" {
extern void func_020d5880(s32 a);
extern u16 func_020187ec(void *a);
extern s32 func_020666b0(void *a);
extern void func_0206c6c4(void *a);
extern s32 data_0213e2f4;
extern u8 *data_0213e440;
void func_0206c05c(u8 *arg0) {
    VA *obj;

    if (arg0[0x94] == 0) {
        return;
    }
    func_020d5880(0x16A);
    if (*(u16 *) (arg0 + 0xA) == 0) {
        arg0 = *(u8 **) (arg0 + 0x90);
        if (*(s32 *) (arg0 + 0x74) > -1) {
            if (func_020187ec((u8 *) *(s32 *) (data_0213e440 + 0xF8) + 0xE0) != 7) {
                return;
            }
            ((VA *) *(VA **) (arg0 + *(s32 *) (arg0 + 0x74) * 4 + 0x40))->f3(*(s32 *) (arg0 + 0x74));
            return;
        }
        obj = *(VA **) ((u8 *) data_0213e2f4 + *(s32 *) (arg0 + 0xE0) * 4 + 0x4000 + 0x670);
        if (func_020666b0(obj) == 0) {
            return;
        }
        if (obj->f0() == 0) {
            return;
        }
        if (func_020187ec((u8 *) *(s32 *) (data_0213e440 + 0xF8) + 0xE0) != 7) {
            return;
        }
        obj->f1();
        return;
    }
    func_0206c6c4(*(void **) (arg0 + 0x90));
}
}
