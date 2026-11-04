/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020c8490(void);
void func_020165bc(s32, s32);
void func_020cb238(u8 *);
void func_020cac74(u8 *);
void func_020ca618(u8 *);
void func_020ca190(u8 *);
s32 func_020480dc(s32, s32);
extern u8 data_0213e434;
extern u8 data_021424c4;
extern u8 data_02139fa4;

void func_020cb8d4(u8 *arg0) {
    s32 st;
    s32 r;

    if (*(s32 *) (*(u8 **) &data_0213e434 + 0x4000 + 0x79C) != 0) {
        *(s32 *) (arg0 + 0x34) += 1;
        if (*(s32 *) (arg0 + 0x34) >= 0x14) {
            *(s32 *) (arg0 + 0x34) = 0;
            r                      = func_020c8490();
            if (r != *(s32 *) (arg0 + 0x3C)) {
                *(s32 *) (arg0 + 0x3C) = r;
                func_020165bc(*(s32 *) (arg0 + 0x40), (*(s32 *) (arg0 + 0x3C) + 1) & 0xFF);
            }
        }
    }
    *(s32 *) (arg0 + 0x28) = *(s32 *) (arg0 + 0x24);
    *(u8 *) &data_021424c4 = 0;
    st                     = *(s32 *) (arg0 + 0x24);
    switch (st) {
        case 0:
            func_020cb238(arg0);
            break;
        case 1:
        case 2:
        case 3:
            func_020cac74(arg0);
            break;
        case 4:
            func_020ca618(arg0);
            break;
        case 5:
            func_020ca190(arg0);
            break;
    }
    st = *(s32 *) (arg0 + 0x28);
    if (*(s32 *) (arg0 + 0x24) == st) {
        return;
    }
    switch (st) {
        case 0:
            func_020480dc(*(s32 *) &data_02139fa4, 1);
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            break;
    }
}
