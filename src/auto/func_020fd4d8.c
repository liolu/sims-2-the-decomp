/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 func_020fbea0(void);
extern u32 func_020fbeb4(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_020fd4d8(void);
extern UnkSndCommand *data_02146398;
extern UnkSndCommand *data_02146388;

/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *func_020fd4d8(void) {
    UnkSndCommand *cmd;
    u32 enabled = func_020fbea0();

    cmd = data_02146388;
    if (cmd == 0) {
        func_020fbeb4(enabled);
        return 0;
    }
    data_02146388 = cmd->next;
    if (data_02146388 == 0) {
        data_02146398 = 0;
    }
    func_020fbeb4(enabled);
    return cmd;
}
