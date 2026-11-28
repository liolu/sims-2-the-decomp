/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* __call_static_initializers from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/Runtime/src/StaticInitializers.cpp
 * (license: none), reused by tools/donor_match.py */
extern "C" {
extern void func_0211172c(void);
}
typedef void (*StaticInitializer)(void);
extern StaticInitializer data_0212f310[];
void func_0211172c(void) {
    StaticInitializer s, *p;

    if (data_0212f310 == 0) {
        return;
    }

    for (p = data_0212f310; p != 0 && (s = *p); p++) {
        s();
    }
}
