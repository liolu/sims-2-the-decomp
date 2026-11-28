/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_020fb98c(void);
extern u32 func_020fb9a0(u32 state);
extern void func_020fb9fc(u32 count);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_020fd5e4(u32 flags);
extern u32 func_020fd990(void);
extern u32 data_02145eac;
extern UnkSndCommand *data_02145eb8;
extern UnkSndCommand *data_02145ea8;
extern s32 data_02145ebc;
extern s32 data_02145ec4;
extern UnkSndCommand *data_02145ecc[9];

/* func_0207a818 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_020fd5e4(u32 flags) {
    u32 enabled = func_020fb98c();
    UnkSndCommand *head;
    UnkSndCommand *tail;

    if (flags & 1) {
        while (data_02145eac == func_020fd990()) {
            func_020fb9a0(enabled);
            func_020fb9fc(100);
            enabled = func_020fb98c();
        }
    } else if (data_02145eac == func_020fd990()) {
        func_020fb9a0(enabled);
        return 0;
    }

    head = data_02145ecc[data_02145ebc];
    data_02145ebc++;
    if (data_02145ebc > 8) {
        data_02145ebc = 0;
    }

    tail = head;
    while (tail->next != 0) {
        tail = tail->next;
    }

    if (data_02145eb8 != 0) {
        data_02145eb8->next = head;
    } else {
        data_02145ea8 = head;
    }
    data_02145eb8 = tail;
    data_02145ec4--;
    data_02145eac++;

    func_020fb9a0(enabled);
    return head;
}
