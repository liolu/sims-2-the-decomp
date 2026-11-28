/* compiler: 1.2/sp2p3 */
typedef unsigned int u32;
typedef int s32;

extern s32 data_02138be8;
extern u32 data_02145e30;
void func_020fc238(s32, u32, u32, u32, void *, s32);
void func_020fc964(u32, u32, u32);

void func_020f91e8(u32 arg0, u32 arg1) {
    u32 v = data_02145e30;
    s32 h = data_02138be8;
    if (h != -1) {
        func_020fc238(h, arg0, v, arg1, 0, 0);
        return;
    }
    func_020fc964(arg0, v, arg1);
}
