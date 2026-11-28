/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_020fbd64(void);
extern u32 func_020fbd78(u32 state);
extern void func_020fbdd4(u32 count);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_020fd9bc(u32 flags);
extern u32 func_020fdd68(void);
extern u32 data_0214624c;
extern UnkSndCommand *data_02146258;
extern UnkSndCommand *data_02146248;
extern s32 data_0214625c;
extern s32 data_02146264;
extern UnkSndCommand *data_0214626c[9];

/* func_0207a818 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_020fd9bc(u32 flags) {
    u32 enabled = func_020fbd64();
    UnkSndCommand *head;
    UnkSndCommand *tail;

    if (flags & 1) {
        while (data_0214624c == func_020fdd68()) {
            func_020fbd78(enabled);
            func_020fbdd4(100);
            enabled = func_020fbd64();
        }
    } else if (data_0214624c == func_020fdd68()) {
        func_020fbd78(enabled);
        return 0;
    }

    head = data_0214626c[data_0214625c];
    data_0214625c++;
    if (data_0214625c > 8) {
        data_0214625c = 0;
    }

    tail = head;
    while (tail->next != 0) {
        tail = tail->next;
    }

    if (data_02146258 != 0) {
        data_02146258->next = head;
    } else {
        data_02146248 = head;
    }
    data_02146258 = tail;
    data_02146264--;
    data_0214624c++;

    func_020fbd78(enabled);
    return head;
}
