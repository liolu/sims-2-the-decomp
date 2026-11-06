/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02046b24(void *, s32, s32, s32, s32);
void func_02046384(void *, s32, s32);
extern s32 data_0213e434;
extern s32 data_ov003_021509b0;

u8 *func_ov003_0214b878(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 t;
    func_02046b24(arg0, 10, arg1, arg2, arg3);
    *(s32 **) arg0         = &data_ov003_021509b0;
    *(s32 *) (arg0 + 0x5c) = 0;
    *(s32 *) (arg0 + 0x60) = 0;
    *(s32 *) (arg0 + 0x64) = 0;
    *(s32 *) (arg0 + 0x68) = 0;
    *(s32 *) (arg0 + 0x6c) = 0;
    *(s32 *) (arg0 + 0x70) = 0;
    *(s32 *) (arg0 + 0x44) = 0;
    *(s32 *) (arg0 + 0x48) = 0;
    *(s32 *) (arg0 + 0x4c) = 0;
    *(s32 *) (arg0 + 0x50) = 0;
    *(s32 *) (arg0 + 0x54) = 0;
    *(s32 *) (arg0 + 0x58) = 0;
    *(u16 *) (arg0 + 0x76) = 0;
    *(u16 *) (arg0 + 0x74) = *(s32 *) (arg0 + 8);
    if (*(u16 *) (arg0 + 0x74) != 0) {
        u16 *g = (u16 *) (data_0213e434 + 0x47ac);
        t      = g[0x12];
        if (t == 0x3a || t == 0x3c) {
            *(u16 *) (arg0 + 0x76) = 1;
        }
    }
    *(u16 *) (arg0 + 0x78) = 0;
    *(u16 *) (arg0 + 0x7a) = 20;
    *(u16 *) (arg0 + 0x7c) = 0;
    *(u16 *) (arg0 + 0x7e) = 0;
    *(s32 *) (arg0 + 0x68) = 0;
    *(s32 *) (arg0 + 0x6c) = 0xc800;
    *(s32 *) (arg0 + 0x70) = 0x8000;
    *(s32 *) (arg0 + 0x5c) = 0;
    *(s32 *) (arg0 + 0x60) = 0x9000;
    *(s32 *) (arg0 + 0x64) = 0x1c000;
    *(u8 *) (arg0 + 0x80)  = 0;
    *(u8 *) (arg0 + 0x81)  = 0;
    *(u8 *) (arg0 + 0x82)  = 0;
    *(u8 *) (arg0 + 0x83)  = 0;
    func_02046384(arg0 + 0x28, 0, 0x18);
    func_02046384(arg0 + 0x24, 0, 4);
    *(u8 *) (arg0 + 0x40) = 0;
    if ((u16) (*(u16 *) (arg0 + 0x74) + 0xfffb) <= 1) {
        *(u8 *) (arg0 + 0x40) = 0xfe;
    }
    return arg0;
}
