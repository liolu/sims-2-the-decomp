/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200f968 from projets/code-lyoko/src/donor/func_0200f968.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef int BOOL;
extern void func_020fcbdc(void *dest, u8 data, u32 size);
extern void func_020fcc70(const void *src, void *dest, u32 size);
static inline void MI_CpuClear8(void *dest, u32 size) {
    func_020fcbdc(dest, 0, size);
}
extern void func_021006ac(void *digest, void *bin_ptr, int bin_len, void *key_ptr, int key_len);
extern const void *data_02138d48;
extern int data_02138d4c;
BOOL func_021002bc(const u8 *spec_digest, void *src, int len) {
    int i;
    u8 digest[(160 / 8)];
    u8 digest_key[64];

    MI_CpuClear8(digest, sizeof(digest));
    func_020fcc70(data_02138d48, digest_key, (u32) data_02138d4c);
    func_021006ac(digest, src, len, digest_key, data_02138d4c);

    for (i = 0; i < sizeof(digest); i += sizeof(u32)) {
        if (*(const u32 *) (digest + i) != *(const u32 *) (spec_digest + i)) {
            break;
        }
    }

    return (i == sizeof(digest));
}
