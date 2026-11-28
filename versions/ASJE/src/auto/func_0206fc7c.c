/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Menu0206fcf4 {
    u8 unk0[0x1C];
    s32 count;
    s32 unk20;
    s32 selected;
} Menu0206fcf4;

s32 func_020d5880(s32);
void func_020165bc(void *, s32);
void func_0206fd18(Menu0206fcf4 *);

void func_0206fc7c(u8 *obj) {
    Menu0206fcf4 *menu;
    u16 direction;
    if ((*(u32 *) (obj + 4) & 1) == 1) {
        func_020d5880(0x161);
    }
    func_020165bc(obj, 1);
    menu      = *(Menu0206fcf4 **) (obj + 0x90);
    direction = *(u16 *) (obj + 0xA);
    if (menu->count != 0) {
        if (direction == 0) {
            menu->selected--;
        } else {
            menu->selected++;
        }
        if (menu->selected < 0) {
            menu->selected = 0;
        } else if (menu->selected >= menu->count) {
            menu->selected = menu->count - 1;
        } else {
            func_0206fd18(menu);
        }
    }
    *(s32 *) (obj + 0x94) = 10;
}
