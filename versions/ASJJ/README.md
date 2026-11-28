# The Sims 2 - Hachamecha Hotel Life decompilation (Japan, `ASJJ`)

Nintendo DS, game code `ASJJ`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`████████░░░░░░░░░░░░` **38.62%** of the code matched · data 100.00% · 3807/5063 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 3696 | 3696/3696 | 36.89% |
| Reused from other decompilations, not merged into files yet | 111 | 111/111 | 1.73% |
| Game code: `src/data/` | 3031 | 0/0 | 0.00% |

*Updated 2026-11-28 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
cd versions/ASJJ
python tools/configure.py jp
ninja
python tools/match.py status
```

Same game as the EU project at the root of this repository (`ASJP`), another region: see `../README.md` and `AGENTS.md`. Functions were first copied from the EU matches (`clone_match.py`), each one checked byte for byte.
