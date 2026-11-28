/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f6634 from projets/sims-2-the/src/donor/func_020f6634.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef volatile u16 vu16;
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void func_020f6120(void);
extern int data_02138814;
extern u16 data_02145a40;
extern void func_020f62b8(void);
extern int func_020f96dc(void);
extern void func_020fba08(void);
extern void func_020fc164(u32 channel, void *destination, u32 value, u32 size);
extern void func_020fc578(u32 value, void *destination, u32 size);
void func_020f6120(void) {
    (*(vu16 *) 0x04000304) |= 0x8000;
    (*(vu16 *) 0x04000304) = ((*(vu16 *) 0x04000304) & ~0x20e) | 0x20e;
    (*(vu16 *) 0x04000304) |= 1;
    func_020f62b8();
    if (!data_02145a40) {
        do {
            int lock = func_020f96dc();
            if (lock == -3) {
                func_020fba08();
            }
            data_02145a40 = lock;
        } while (!data_02145a40);
    }
    (*(vu16 *) 0x04000004) = 0;
    (*(vu32 *) 0x04000000) = 0;
    if (data_02138814 != -1) {
        func_020fc164(data_02138814, (void *) 0x04000008, 0, 96);
        *(vu16 *) 0x0400006c = 0;
        func_020fc164(data_02138814, (void *) 0x04001000, 0, 112);
    } else {
        volatile u32 main_zero = 0;
        func_020fc578(main_zero, (void *) 0x04000008, 96);
        *(vu16 *) 0x0400006c = 0;
        {
            volatile u32 sub_zero = 0;
            func_020fc578(sub_zero, (void *) 0x04001000, 112);
        }
    }
    *(vu16 *) 0x04000020 = 256;
    *(vu16 *) 0x04000026 = 256;
    *(vu16 *) 0x04000030 = 256;
    *(vu16 *) 0x04000036 = 256;
    *(vu16 *) 0x04001020 = 256;
    *(vu16 *) 0x04001026 = 256;
    *(vu16 *) 0x04001030 = 256;
    *(vu16 *) 0x04001036 = 256;
}
