/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G3dGeSendDL from https://github.com/RonyxDumb/mkds src/arm9/01ff9048_func_01ff9048.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
extern u32 data_02138d28;
typedef void (*MIDmaCallback)(void *);
extern void func_020fc944(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern void func_020fc748(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern void func_020f0b9c(void);
extern void func_020f0a9c(const void *src, u32 szByte);
extern void func_020f09a0(u32 op, const u32 *args, u32 num);
extern volatile int data_02145f18;
void func_020f0b9c(void);
void func_020f0b78(void *arg);
extern BOOL data_02145f1c;
void func_020f0a9c(const void *src, u32 szByte) {
    ((void) 0);
    ((void) 0);

    if (szByte < 256 || (data_02138d28) == ((u32) ~0)) {
        func_020f09a0(*(const u32 *) src, (const u32 *) src + 1, (szByte >> 2) - 1);
    } else {
        func_020f0b9c();
        data_02145f18 = 1;

        if (data_02145f1c) {
            func_020fc748((data_02138d28), src, szByte, &func_020f0b78, (void *) &data_02145f18);
        } else {
            func_020fc944((data_02138d28), src, szByte, &func_020f0b78, (void *) &data_02145f18);
        }
    }
}
void func_020f09a0(u32 op, const u32 *args, u32 num);
