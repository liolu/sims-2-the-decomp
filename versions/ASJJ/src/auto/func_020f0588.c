/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G3dGeSendDL from https://github.com/RonyxDumb/mkds src/arm9/01ff9048_func_01ff9048.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
extern u32 data_02138814;
typedef void (*MIDmaCallback)(void *);
extern void func_020fc430(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern void func_020fc234(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
extern void func_020f0688(void);
extern void func_020f0588(const void *src, u32 szByte);
extern void func_020f048c(u32 op, const u32 *args, u32 num);
extern volatile int data_02145a38;
void func_020f0688(void);
void func_020f0664(void *arg);
extern BOOL data_02145a3c;
void func_020f0588(const void *src, u32 szByte) {
    ((void) 0);
    ((void) 0);

    if (szByte < 256 || (data_02138814) == ((u32) ~0)) {
        func_020f048c(*(const u32 *) src, (const u32 *) src + 1, (szByte >> 2) - 1);
    } else {
        func_020f0688();
        data_02145a38 = 1;

        if (data_02145a3c) {
            func_020fc234((data_02138814), src, szByte, &func_020f0664, (void *) &data_02145a38);
        } else {
            func_020fc430((data_02138814), src, szByte, &func_020f0664, (void *) &data_02145a38);
        }
    }
}
void func_020f048c(u32 op, const u32 *args, u32 num);
