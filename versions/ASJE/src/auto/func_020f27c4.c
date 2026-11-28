/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f2900 from projets/sims-2-the/src/donor/func_020f2900.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct {
    u8 pad0[6];
    u16 count;
    u8 pad8[0xc];
    u16 entry_offsets[1];
} BcaBlock;
typedef struct {
    u8 pad0[8];
    BcaBlock *block;
    void *shared_data;
    u8 pad10[9];
    u8 entry_count;
    u16 entries[1];
} AnimBlock;
typedef struct {
    u8 pad0[0x17];
    u8 entry_count;
} AnimCreateInfo;
extern void *data_02138970;
extern void func_020fc91c(u16 value, void *destination, u32 size);
void func_020f27c4(AnimBlock *block, BcaBlock *bca, AnimCreateInfo *info) {
    volatile u16 clear;
    u32 i;
    u16 *offsets;

    block->block       = bca;
    block->shared_data = data_02138970;
    block->entry_count = info->entry_count;
    clear              = 0;
    func_020fc91c(clear, block->entries, block->entry_count << 1);

    offsets = bca->entry_offsets;
    for (i = 0; i < bca->count; i++) {
        block->entries[i] = (*(u32 *) ((u8 *) bca + offsets[i]) >> 24) | 0x100;
    }
}
