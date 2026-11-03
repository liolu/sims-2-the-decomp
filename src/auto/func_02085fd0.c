/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_02001944(s32);
extern void func_02001914(void);
extern u8 *func_0204561c(u8 *);
extern u8 data_027e0000;
extern u8 data_027e0014;

s32 func_02085fd0(void) {
    u8 *node;
    func_02001944(0);
    node = func_0204561c(&data_027e0014 + (*(s32 *) &data_027e0000) * 0x34);
    if (node != 0) {
        do {
            u8 *obj = *(u8 **) node;
            if (*(u16 *) (obj + 0xE) == 3 && *(u16 *) (obj + 0xC) == 0xB && *(s32 *) (obj + 0x134) != 0) {
                func_02001914();
                return 1;
            }
            node = *(u8 **) (node + 4);
        } while (node != 0);
    }
    func_02001914();
    return 0;
}
