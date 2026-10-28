# The Sims 2 decompilation (EU)

<!-- bytematch:start -->
[![Code](https://bytematch.dev/liolu/sims-2-the-decomp.svg?label=Code&measure=matched_code_percent)](https://bytematch.dev/liolu/sims-2-the-decomp) [![Data](https://bytematch.dev/liolu/sims-2-the-decomp.svg?label=Data&measure=matched_data_percent)](https://bytematch.dev/liolu/sims-2-the-decomp) [![Functions](https://bytematch.dev/liolu/sims-2-the-decomp.svg?label=Functions&measure=matched_functions)](https://bytematch.dev/liolu/sims-2-the-decomp)
<!-- bytematch:end -->

Nintendo DS, game code `ASJP`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`█░░░░░░░░░░░░░░░░░░░` **7.28%** of the code matched · data 97.66% · 1814/5063 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 1814 | 1814/1814 | 7.28% |
| Game code: `src/data/` | 3160 | 0/0 | 0.00% |

*Updated 2026-10-28 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py eu
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.
