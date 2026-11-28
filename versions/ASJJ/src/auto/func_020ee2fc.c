/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ee810 from projets/sims-2-the/src/donor/func_020ee810.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef void (*ModeCallback)(void);
typedef struct Mode {
    u32 unknown_00;
    void *resource;
    u32 unknown_08;
    ModeCallback callback_0c;
    u32 unknown_10;
    ModeCallback callback_14;
    u32 unknown_18;
    ModeCallback callback_1c;
    u8 unknown_20[0x34];
} Mode;
extern void func_020fc578(u32 value, void *destination, u32 size);
extern ModeCallback data_021385ac;
extern ModeCallback data_021385b0;
extern ModeCallback data_021385b4;
void func_020ee2fc(Mode *mode, void *resource) {
    volatile u32 clearValue = 0;

    func_020fc578(clearValue, mode, 0x54);
    mode->callback_0c = data_021385b4;
    mode->callback_14 = data_021385b0;
    mode->callback_1c = data_021385ac;
    mode->resource    = resource;
}
