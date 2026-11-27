/* compiler: 1.2/sp2p3 */
/* Initialises a text-entry object: sets vtable and handler pointers, toggles a
   hardware flag around a call, then inserts one or two characters into a
   shifting buffer at +0x10. */
typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef int s32;
typedef unsigned int u32;

extern u8 data_02133600;
extern u8 data_02134bb4;
extern u8 data_02134be0;
extern u8 data_027e0000;

void func_0208bb98(u8 *obj, s32 a, s32 b, s32 c);
void *func_0208afd0(s32 v);
void func_02018af8(void *a, s32 b, void *c, s32 d);

u8 *func_0209a840(u8 *arg0, s32 dummy, s32 arg2) {
    s32 i;
    u32 hw;
    u8 *t;
    s32 v;

    func_0208bb98(arg0, dummy, 0, 0);
    *(void **) (arg0 + 0x4c) = &data_02133600;
    *(s32 *) (arg0 + 0x50)   = arg2;
    *(s32 *) (arg0 + 0x54)   = *(s16 *) ((u8 *) func_0208afd0(arg2) + 0xe);
    arg0[0x58]               = 0;
    arg0[0x59]               = 1;
    *(void **) arg0          = &data_02134bb4;
    *(void **) (arg0 + 0x4c) = &data_02134be0;
    arg0[0x5a]               = 0;

    hw = *(u32 *) &data_027e0000;
    if (hw == 0) {
        *(u32 *) &data_027e0000 = 1;
    } else {
        *(u32 *) &data_027e0000 = 0;
    }
    func_02018af8(*(u8 **) (arg0 + 0x4) + 0x128, 0x4e, arg0 + 0x5a, 2);
    hw = *(u32 *) &data_027e0000;
    if (hw == 0) {
        *(u32 *) &data_027e0000 = 1;
    } else {
        *(u32 *) &data_027e0000 = 0;
    }

    if (arg0[0x5a] != 0) {
        i = *(s32 *) (arg0 + 0x8);
        if (i > *(s32 *) (arg0 + 0xc)) {
            do {
                t = arg0 + (i - 1);
                v = t[0x10];
                t = arg0 + i;
                i -= 1;
                t[0x10] = v;
            } while (i > *(s32 *) (arg0 + 0xc));
        }
        t                     = arg0 + *(s32 *) (arg0 + 0xc);
        t[0x10]               = 0x23;
        *(s32 *) (arg0 + 0xc) = *(s32 *) (arg0 + 0xc) + 1;
        *(s32 *) (arg0 + 0x8) = *(s32 *) (arg0 + 0x8) + 1;

        i = *(s32 *) (arg0 + 0x8);
        if (i > *(s32 *) (arg0 + 0xc)) {
            do {
                t = arg0 + (i - 1);
                v = t[0x10];
                t = arg0 + i;
                i -= 1;
                t[0x10] = v;
            } while (i > *(s32 *) (arg0 + 0xc));
        }
        t                     = arg0 + *(s32 *) (arg0 + 0xc);
        t[0x10]               = 0x51;
        *(s32 *) (arg0 + 0xc) = *(s32 *) (arg0 + 0xc) + 1;
        *(s32 *) (arg0 + 0x8) = *(s32 *) (arg0 + 0x8) + 1;
    } else {
        i = *(s32 *) (arg0 + 0x8);
        if (i > *(s32 *) (arg0 + 0xc)) {
            do {
                t = arg0 + (i - 1);
                v = t[0x10];
                t = arg0 + i;
                i -= 1;
                t[0x10] = v;
            } while (i > *(s32 *) (arg0 + 0xc));
        }
        t                     = arg0 + *(s32 *) (arg0 + 0xc);
        t[0x10]               = 0x22;
        *(s32 *) (arg0 + 0xc) = *(s32 *) (arg0 + 0xc) + 1;
        *(s32 *) (arg0 + 0x8) = *(s32 *) (arg0 + 0x8) + 1;
    }
    return arg0;
}
