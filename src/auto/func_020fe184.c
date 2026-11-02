/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* PXI_InitFifo from projets/rayman-rr/src/donor/PXI_InitFifo.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern u32 func_020fbea0(void);
extern u32 func_020fbeb4(u32 state);
extern void func_020f9934(u32 mask);
extern void func_020f9b40(u32 mask, void *handler);
extern u32 _Z24EnableSpecificInterruptsj(u32 mask);
typedef void (*PxiCallback)(u32 tag, u32 data, BOOL err);
extern void func_020fe184(void);
extern void func_020fdf18(void);
typedef struct UnkPxiSystemWork {
    u8 unk_000[0x388];
    u32 unk_388[2];
} UnkPxiSystemWork;
static inline UnkPxiSystemWork *GetPxiSystemWork(void) {
    return (UnkPxiSystemWork *) 0x027ffc00;
}
extern u16 data_02147ec4;
extern PxiCallback data_02147ec8[32];
void func_020fe184(void) {
    u32 enabled = func_020fbea0();
    s32 i;

    if (!data_02147ec4) {
        data_02147ec4                  = 1;
        GetPxiSystemWork()->unk_388[0] = 0;
        for (i = 0; i < 32; i++) {
            data_02147ec8[i] = 0;
        }
        (*(vu16 *) 0x04000184) = 0xc408;
        func_020f9934(0x40000);
        func_020f9b40(0x40000, func_020fdf18);
        _Z24EnableSpecificInterruptsj(0x40000);

        for (i = 0;; i++) {
            s32 timeout;
            s32 sync               = (*(vu16 *) 0x04000180) & 0xf;
            (*(vu16 *) 0x04000180) = sync << 8;
            if (sync == 0 && i > 4) {
                break;
            }
            timeout = 1000;
            while (((*(vu16 *) 0x04000180) & 0xf) == sync) {
                if (timeout <= 0) {
                    i = 0;
                    break;
                }
                timeout--;
            }
        }
    }
    func_020fbeb4(enabled);
}
extern void func_020fdf18(void);
