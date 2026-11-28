# The Sims 2 (ASJE) decompilation (USA)

Nintendo DS, game code `ASJE`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python ../../../tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

From the root of All-nds-decomp-games:

## Progress

<!-- progress:start -->
`█████████░░░░░░░░░░░` **44.36%** of the code matched · data 100.00% · 4043/5062 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 3946 | 3946/3946 | 42.66% |
| Reused from other decompilations, not merged into files yet | 97 | 97/97 | 1.70% |
| Game code: `src/data/` | 3037 | 0/0 | 0.00% |

*Updated 2026-11-28 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python nds.py build sims-2-the-asje
python nds.py match sims-2-the-asje status
```

See `CONTRIBUTING.md` at the root of the repository and `AGENTS.md` for the rules.
