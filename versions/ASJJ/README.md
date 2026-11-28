# The Sims 2 (ASJJ) decompilation (JP)

Nintendo DS, game code `ASJJ`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python ../../../tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

From the root of All-nds-decomp-games:

## Progress

<!-- progress:start -->
`███████░░░░░░░░░░░░░` **36.73%** of the code matched · data 100.00% · 3690/5063 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 3690 | 3690/3690 | 36.73% |
| Game code: `src/data/` | 3031 | 0/0 | 0.00% |

*Updated 2026-11-28 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python nds.py build sims-2-the-asjj
python nds.py match sims-2-the-asjj status
```

See `CONTRIBUTING.md` at the root of the repository and `AGENTS.md` for the rules.
