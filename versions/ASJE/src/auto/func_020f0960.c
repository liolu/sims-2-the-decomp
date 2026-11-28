/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G3dGeSendDL from https://github.com/RonyxDumb/mkds src/arm9/01ff9048_func_01ff9048.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
extern u32 data_02138be8;
typedef void (*MIDmaCallback)(void *);
extern void func_020fc808(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern void func_020fc60c(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern void func_020f0a60(void);
extern void func_020f0960(const void *src, u32 szByte);
extern void func_020f0864(u32 op, const u32 *args, u32 num);
extern volatile int data_02145dd8;
void func_020f0a60(void);
void func_020f0a3c(void *arg);
extern BOOL data_02145ddc;
void func_020f0960(const void *src, u32 szByte) {
    ((void) 0);
    ((void) 0);

    if (szByte < 256 || (data_02138be8) == ((u32) ~0)) {
        func_020f0864(*(const u32 *) src, (const u32 *) src + 1, (szByte >> 2) - 1);
    } else {
        func_020f0a60();
        data_02145dd8 = 1;

        if (data_02145ddc) {
            func_020fc60c((data_02138be8), src, szByte, &func_020f0a3c, (void *) &data_02145dd8);
        } else {
            func_020fc808((data_02138be8), src, szByte, &func_020f0a3c, (void *) &data_02145dd8);
        }
    }
}
void func_020f0864(u32 op, const u32 *args, u32 num);
