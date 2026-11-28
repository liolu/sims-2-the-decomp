/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_020fb98c(void);
extern u32 func_020fb9a0(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_020fcfc4(void);
extern UnkSndCommand *data_02145eb8;
extern UnkSndCommand *data_02145ea8;

/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_020fcfc4(void) {
    UnkSndCommand *cmd;
    u32 enabled = func_020fb98c();

    cmd = data_02145ea8;
    if (cmd == 0) {
        func_020fb9a0(enabled);
        return 0;
    }
    data_02145ea8 = cmd->next;
    if (data_02145ea8 == 0) {
        data_02145eb8 = 0;
    }
    func_020fb9a0(enabled);
    return cmd;
}
