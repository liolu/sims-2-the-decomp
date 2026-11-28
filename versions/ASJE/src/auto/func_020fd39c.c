/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_020fbd64(void);
extern u32 func_020fbd78(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_020fd39c(void);
extern UnkSndCommand *data_02146258;
extern UnkSndCommand *data_02146248;

/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_020fd39c(void) {
    UnkSndCommand *cmd;
    u32 enabled = func_020fbd64();

    cmd = data_02146248;
    if (cmd == 0) {
        func_020fbd78(enabled);
        return 0;
    }
    data_02146248 = cmd->next;
    if (data_02146248 == 0) {
        data_02146258 = 0;
    }
    func_020fbd78(enabled);
    return cmd;
}
