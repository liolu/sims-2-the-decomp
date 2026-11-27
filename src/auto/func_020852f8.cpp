/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VA {
    virtual void f0();
    virtual void f1();
};

extern "C" M2C_UNK func_02088240(void *);
extern "C" M2C_UNK func_020b8d2c(void *);
extern "C" M2C_UNK func_02046844(void *);
extern "C" M2C_UNK func_020d9bd4(void *);
extern "C" M2C_UNK func_020530f8(void *);
extern "C" M2C_UNK func_0208826c(void *);
extern "C" M2C_UNK func_020444f8(void);
extern "C" u8 data_02132d98[];

extern "C" void *func_020852f8(void *arg0) {
    void **slots = (void **) arg0;
    void *temp_r4;
    void *temp_r7;
    u32 var_r5;
    u32 count;
    void *z;

    *(void **) arg0 = (void *) data_02132d98;
    var_r5          = 0;
    count           = (u32) func_02088240(*(void **) ((u8 *) arg0 + 4));
    z               = (void *) var_r5;
    if (count > var_r5) {
        do {
            if (slots[2 + var_r5] != NULL) {
                if (slots[2 + var_r5] != NULL) {
                    ((VA *) slots[2 + var_r5])->f1();
                }
                slots[2 + var_r5] = z;
            }
            temp_r7 = slots[8 + var_r5];
            if (temp_r7 != NULL) {
                if (temp_r7 != NULL) {
                    func_020b8d2c(temp_r7);
                    func_02046844(temp_r7);
                }
                slots[8 + var_r5] = z;
            }
            var_r5 = (u16) (var_r5 + 1);
            count  = (u32) func_02088240(*(void **) ((u8 *) arg0 + 4));
        } while (var_r5 < count);
    }
    temp_r4 = *(void **) ((u8 *) arg0 + 0x38);
    if (temp_r4 != NULL) {
        if (temp_r4 != NULL) {
            func_020d9bd4(temp_r4);
            func_02046844(temp_r4);
        }
        *(void **) ((u8 *) arg0 + 0x38) = NULL;
    }
    temp_r4 = *(void **) ((u8 *) arg0 + 0x3C);
    if (temp_r4 != NULL) {
        if (temp_r4 != NULL) {
            func_020530f8(temp_r4);
            func_02046844(temp_r4);
        }
        *(void **) ((u8 *) arg0 + 0x3C) = NULL;
    }
    func_0208826c(*(void **) ((u8 *) arg0 + 4));
    func_020444f8();
    *(s32 *) ((u8 *) arg0 + 4) = 0x21;
    func_02046844(arg0);
    return arg0;
}
