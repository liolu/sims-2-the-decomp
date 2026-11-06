/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9(u8 a);
};
struct V3 {
    s32 x;
    s32 y;
    s32 z;
};
struct V2 {
    s32 x;
    s32 y;
};
struct One {
    s32 v;
};

extern "C" void *func_0204688c(s32, s32, s32);
extern "C" M2C_UNK func_02017768(void *, s32);
extern "C" void func_020172bc(void *, One);
extern "C" u8 data_ov001_0214b1a4[];
extern "C" u8 data_0212fff8[];

extern "C" void func_ov001_02149cb8(u8 *arg0, s32 arg1) {
    u8 *tbl;
    s32 i;
    u8 *obj;
    u8 *rec4;
    u8 *rec;
    s32 y;
    u8 *o1;
    s32 j;
    volatile s32 fr[5];
    s32 x;

    tbl = ((u8 **) data_ov001_0214b1a4)[arg1];
    j   = 0;
    do {
        o1 = ((u8 **) (arg0 + 0x24))[j];
        if (o1 != NULL) {
            if (o1 != NULL) {
                ((VA *) o1)->f1();
            }
            ((u8 **) (arg0 + 0x24))[j] = 0;
        }
        j++;
    } while (j < 5);
    i = 0;
    if ((s32) *tbl <= 0) {
        return;
    }
    rec  = tbl;
    rec4 = tbl + 4;
    do {
        if (arg1 == 0) {
            if ((u32) i >= (u32) (*(s32 *) (arg0 + 0x40) + 2)) {
                goto next;
            }
        }
        obj = (u8 *) func_0204688c(0xA0, 0, 4);
        if (obj != NULL) {
            func_02017768(obj, 0);
            *(u8 **) obj          = data_0212fff8;
            *(u8 **) (obj + 0x90) = rec4;
            *(s32 *) (obj + 0x94) = 0;
            *(s32 *) (obj + 0x98) = 0;
            *(u8 *) (obj + 0x9C)  = 1;
            *(u8 *) (obj + 0x9D)  = 0;
            ((VA *) obj)->f9(*(u8 *) (obj + 0x9D));
        }
        ((u8 **) (arg0 + 0x24))[i]                   = obj;
        x                                            = rec[2] << 12;
        fr[0]                                        = x;
        fr[3]                                        = x;
        *(s32 *) (((u8 **) (arg0 + 0x24))[i] + 0x50) = x;
        y                                            = rec[3] << 12;
        fr[1]                                        = y;
        fr[4]                                        = y;
        *(s32 *) (((u8 **) (arg0 + 0x24))[i] + 0x54) = y;
        fr[2]                                        = 0x10000;
        func_020172bc(((u8 **) (arg0 + 0x24))[i], *(One *) (s32 *) &fr[2]);
    next:
        rec4 += 0x12;
        rec += 0x12;
        i++;
    } while (i < *tbl);
}
