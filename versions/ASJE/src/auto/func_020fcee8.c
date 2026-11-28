/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MIi_InitCard from https://github.com/ntrtwl/NitroSDK libraries/mi/src/mi_card.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
typedef u32 OSIntrMode;
extern OSIntrMode func_020fbd64(void);
extern OSIntrMode func_020fbd78(OSIntrMode state);
extern s32 func_020f9ab4(void);
typedef void (*MIDmaCallback)(void *);
typedef struct {
    BOOL is_init;
    u16 lock_id;
    u16 padding;
    MIDmaCallback dma_callback;
} MIi_CardParam;
extern MIi_CardParam data_02146224;
void func_020fcee8(void) {
    MIi_CardParam *const p = &data_02146224;
    OSIntrMode bak_psr     = func_020fbd64();

    if (!p->is_init) {
        s32 lock_id = func_020f9ab4();

        p->is_init = 1;
        p->lock_id = (u16) lock_id;
    }

    (void) func_020fbd78(bak_psr);
}
