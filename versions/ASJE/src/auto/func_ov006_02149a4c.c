/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u16 v;
} H16;

void func_0203c7cc(s32, s32, s32, s32, s32);
s32 func_020779d0(s32, s32);
s32 func_020779b4(s32, s32);
void func_02051b08(H16);
void func_020519d8(s32, s32, s32);
void *func_020521e0(s32);
void func_020512c0(s32, s32, s32, void *, s32);
void func_020515f4(s32, s32, s32, s32, void *, s32);
extern u8 *data_0213e2f4;
extern u8 data_ov006_0214aae0;
extern u8 data_ov006_0214aae4;
extern u16 data_ov006_0214a968;

void func_ov006_02149a4c(u8 *arg0, s32 arg1) {
    s32 v;
    s32 v2;
    s32 t;
    void *ptr;
    u8 *base;
    volatile s32 fr[3];
    s32 tv;

    if (arg1 == *(s32 *) (arg0 + 0x4c)) {
        return;
    }
    *(s32 *) (arg0 + 0x4c) = arg1;
    func_0203c7cc(0, 0, 0x12, 0x20, 6);
    if (*(s32 *) (arg0 + 0x4c) != -1) {
        base = data_0213e2f4;
        t    = *(u16 *) (base + *(s32 *) (arg0 + 0x4c) * 2 + 0x28);
        if (t == 0x4e) {
            v = *(u16 *) (*(u8 **) (arg0 + 0x24) + 0xa);
            if (v != 0x15) {
                goto cf4;
            }
        }
        if (t == 0x52) {
            v = *(u16 *) (*(u8 **) (arg0 + 0x24) + 0xa);
            if (v != 4) {
                goto cf4;
            }
        }
        if (t == 0x4d) {
            v = *(u16 *) (*(u8 **) (arg0 + 0x24) + 0xa);
            if (v != 4) {
                goto cf4;
            }
        }
        if (t == 0x50) {
            v = *(u16 *) (*(u8 **) (arg0 + 0x24) + 0xa);
            if (v != 0xe) {
                goto cf4;
            }
        }
        if ((u16) (t + 0xfed3) <= 2) {
            v = *(u16 *) (*(u8 **) (arg0 + 0x24) + 0xa);
            if (v == 6) {
                if (func_020779d0((s32) (base + 0x2f78), 0x11) != 0) {
                    if (func_020779b4((s32) (data_0213e2f4 + 0x2f78), 0x11) == 0) {
                        goto cf4;
                    }
                }
            }
        }
        base = data_0213e2f4;
        v2   = *(u16 *) (base + *(s32 *) (arg0 + 0x4c) * 2 + 0x28);
        if (v2 == 0x4f || v2 == 0x51 || v2 == 0x27 || v2 == 0x22 || v2 == 0x24) {
            goto cf4;
        }
        if (v2 == 0x26) {
            goto cf4;
        }
        goto d08;
    cf4:
        *(u8 *) (*(u8 **) (arg0 + (*(s32 *) (arg0 + 0x4c) << 2) + 0x34) + 0x94) = 1;
    d08:
        *(u32 *) (*(u8 **) (arg0 + 0x28) + 4) |= 1;
        ptr                                      = *(void **) (arg0 + 0x28);
        tv                                       = *(s32 *) (&data_ov006_0214aae0 + *(s32 *) (arg0 + 0x4c) * 8);
        fr[0]                                    = tv;
        *(s32 *) (*(u8 **) (arg0 + 0x28) + 0x50) = tv;
        tv                                       = *(s32 *) (&data_ov006_0214aae4 + *(s32 *) (arg0 + 0x4c) * 8);
        fr[1]                                    = tv;
        *(s32 *) (*(u8 **) (arg0 + 0x28) + 0x54) = tv;
        func_02051b08(*(H16 *) &data_ov006_0214a968);
        func_020519d8(3, 0, 0);
        ptr = func_020521e0(0x1cf + *(u16 *) (data_0213e2f4 + *(s32 *) (arg0 + 0x4c) * 2 + 0x28));
        func_020512c0(0x40, 0xa, 0x96, ptr, 0);
        func_020519d8(0, 0, -1);
        ptr = func_020521e0(*(u16 *) (data_0213e2f4 + *(s32 *) (arg0 + 0x4c) * 2 + 0x28) + 0x336);
        func_020515f4(0x80, 0xa, 0xa5, 0xd0, ptr, 0);
    } else {
        *(u32 *) (*(u8 **) (arg0 + 0x28) + 4) &= ~1;
    }
}
