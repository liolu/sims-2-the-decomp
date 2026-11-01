/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_020fbea0(void);
extern u32 func_020fbeb4(u32 state);
extern void func_020fbf10(u32 count);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_020fdaf8(u32 flags);
extern u32 func_020fdea4(void);
extern u32 data_0214638c;
extern UnkSndCommand *data_02146398;
extern UnkSndCommand *data_02146388;
extern s32 data_0214639c;
extern s32 data_021463a4;
extern UnkSndCommand *data_021463ac[9];

/* func_0207a818 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_020fdaf8(u32 flags) {
    u32 enabled = func_020fbea0();
    UnkSndCommand *head;
    UnkSndCommand *tail;

    if (flags & 1) {
        while (data_0214638c == func_020fdea4()) {
            func_020fbeb4(enabled);
            func_020fbf10(100);
            enabled = func_020fbea0();
        }
    } else if (data_0214638c == func_020fdea4()) {
        func_020fbeb4(enabled);
        return 0;
    }

    head = data_021463ac[data_0214639c];
    data_0214639c++;
    if (data_0214639c > 8) {
        data_0214639c = 0;
    }

    tail = head;
    while (tail->next != 0) {
        tail = tail->next;
    }

    if (data_02146398 != 0) {
        data_02146398->next = head;
    } else {
        data_02146388 = head;
    }
    data_02146398 = tail;
    data_021463a4--;
    data_0214638c++;

    func_020fbeb4(enabled);
    return head;
}
