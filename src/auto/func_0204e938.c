/* compiler: 1.2/sp2p3 */
typedef int s32;
typedef struct {
    s32 a[8];
} E;
extern E data_0213d920[];
extern E data_0213d928[];
extern s32 data_027e0000;
s32 func_020f6444(s32);
void func_020f6484(s32, s32);
void func_020f7c48(s32, s32, s32);
void func_01ffb1f0(s32);

s32 func_0204e938(s32 arg0) {
    s32 v;
    if (data_0213d920[data_027e0000].a[0] & 4) {
        v = data_0213d928[data_027e0000].a[0];
        if (arg0 == 0x3F) {
            if (data_027e0000 == 0) {
                if (v != func_020f6444(0x0400006C)) {
                    func_020f6484(0x0400006C, v);
                }
            } else if (v != func_020f6444(0x0400106C)) {
                func_020f6484(0x0400106C, v);
            }
        } else if (data_027e0000 == 0) {
            func_020f7c48(0x04000050, 1 << arg0, v);
        } else {
            func_020f7c48(0x04001050, 1 << arg0, v);
        }
    }
    if (data_0213d928[data_027e0000].a[0] != 0) {
        data_0213d928[data_027e0000].a[0] = data_0213d928[data_027e0000].a[0] - 2;
        if (data_0213d928[data_027e0000].a[0] < 0) {
            data_0213d928[data_027e0000].a[0] = 0;
        }
        func_01ffb1f0(data_0213d928[data_027e0000].a[0]);
        return 1;
    }
    return 0;
}
