/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02072520(void *);

void func_02072c08(u8 *arg0) {
    volatile s32 st[14];
    s32 a;

    a      = *(s32 *) (arg0 + 0xc);
    st[11] = a;
    st[2]  = a;
    if (*(s32 *) (arg0 + 0x10) < a) {
        st[0]                  = 0x2000;
        st[3]                  = 0x2000;
        *(s32 *) (arg0 + 0x10) = *(s32 *) (arg0 + 0x10) + 0x2000;
        a                      = *(s32 *) (arg0 + 0xc);
        st[10]                 = a;
        st[4]                  = a;
        if (*(s32 *) (arg0 + 0x10) > a) {
            st[5]                  = a;
            *(s32 *) (arg0 + 0x10) = a;
        }
        *(u8 *) (arg0 + 8) = *(u8 *) (arg0 + 8) | 1;
    } else {
        st[6] = a;
        if (*(s32 *) (arg0 + 0x10) > a) {
            st[1]                  = 0x2000;
            st[7]                  = 0x2000;
            *(s32 *) (arg0 + 0x10) = *(s32 *) (arg0 + 0x10) - 0x2000;
            a                      = *(s32 *) (arg0 + 0xc);
            st[12]                 = a;
            st[8]                  = a;
            if (*(s32 *) (arg0 + 0x10) < a) {
                st[9]                  = a;
                *(s32 *) (arg0 + 0x10) = a;
            }
            *(u8 *) (arg0 + 8) = *(u8 *) (arg0 + 8) | 1;
        }
    }
    if ((*(u8 *) (arg0 + 8) & 1) == 0) {
        return;
    }
    func_02072520(arg0);
    *(u8 *) (arg0 + 8) = *(u8 *) (arg0 + 8) & ~1;
}
