/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207782c from projets/nintendogs-dachshund/src/donor/func_0207782c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned long u32;
typedef volatile u32 vu32;
typedef vu32 REGType32v;
extern void func_020fcab8(const void *srcp, volatile void *destp, u32 size);
extern void func_020fcb1c(const void *srcp, void *destp, u32 size);
static inline void MI_CpuSend32(const void *src, volatile void *dest, u32 size) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    func_020fcab8(src, dest, size);
}
static inline void MI_CpuCopyFast(const void *src, void *dest, u32 size) {
    ((void) 0);
    ((void) 0);
    ((void) 0);

    func_020fcb1c(src, dest, size);
}
typedef struct NNSG3dGeBuffer_ {
    u32 idx;
    u32 data[192];
} NNSG3dGeBuffer;
extern void func_020f0b84(void);
extern void func_020f0b9c(void);
extern void func_020f09a0(u32 op, const u32 *args, u32 num);
extern volatile int data_02145f18;
extern NNSG3dGeBuffer *data_02145f14;
static inline void sendNB(const void *src, void *dst, u32 szByte) {
    MI_CpuSend32(src, dst, szByte);
}
extern void func_020f0b9c(void);
extern void func_020f0b84(void);
void func_020f09a0(u32 op, const u32 *args, u32 num) {
    if (data_02145f14) {
        if (data_02145f18) {
            if (data_02145f14->idx + 1 + num <= 192) {
                data_02145f14->data[data_02145f14->idx++] = op;
                if (num > 0) {
                    MI_CpuCopyFast(args, &data_02145f14->data[data_02145f14->idx], num << 2);
                    data_02145f14->idx += num;
                }

                return;
            }
        }

        if (data_02145f14->idx != 0) {
            func_020f0b9c();
        } else {
            if (data_02145f18) {
                func_020f0b84();
            }
        }
    } else {
        if (data_02145f18) {
            func_020f0b84();
        }
    }

    (*(REGType32v *) (0x04000000 + 0x400)) = op;
    sendNB(args, (void *) &(*(REGType32v *) (0x04000000 + 0x400)), num << 2);
}
