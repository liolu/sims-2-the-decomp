# The Sims 2 decompilation (EU)

<!-- bytematch:start -->
[![Code](https://bytematch.dev/liolu/sims-2-the-decomp.svg?label=Code&measure=matched_code_percent)](https://bytematch.dev/liolu/sims-2-the-decomp) [![Data](https://bytematch.dev/liolu/sims-2-the-decomp.svg?label=Data&measure=matched_data_percent)](https://bytematch.dev/liolu/sims-2-the-decomp) [![Functions](https://bytematch.dev/liolu/sims-2-the-decomp.svg?label=Functions&measure=matched_functions)](https://bytematch.dev/liolu/sims-2-the-decomp)
<!-- bytematch:end -->

Nintendo DS, game code `ASJP`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`████████░░░░░░░░░░░░` **42.36%** of the code matched · data 100.00% · 4163/5063 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 4024 | 4024/4024 | 39.22% |
| Reused from other decompilations, not merged into files yet | 138 | 138/138 | 3.14% |
| NitroSDK (Nintendo's system library) | 1 | 1/1 | 0.00% |
| Game code: `src/data/` | 3226 | 0/0 | 0.00% |

*Updated 2026-11-27 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py eu
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
