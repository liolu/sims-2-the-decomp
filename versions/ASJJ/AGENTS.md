# Instructions for AI agents

Matching decompilation of The Sims 2 (ASJJ) (JP, `ASJJ`): C compiled with the original compiler must rebuild a byte-identical ROM.

## Hard rules
1. Only the build decides: a function is matched only at 100% (`python tools/match.py verify` prints `VERIFY PASSED`). Never commit otherwise.
2. Clean room: only the game binary and public projects; never leaked sources or Nintendo SDK source.
3. Natural C; `asm` only for instructions compilers never generate.
4. ASCII only in `src/`, `include/`.
5. Never commit the ROM, BIOS, `extract/` or `build/`.
6. Only commit this game's files (`git add -- .` from its folder, never `git add -A` at the root): the repository also holds the EU project (root) and the other regions.
7. Do not contribute AI-generated code to projects that forbid it.

## Workflow
```shell
cd versions/ASJJ
python tools/configure.py jp
ninja
python tools/match.py verify
```

## TODO for a new game
- Identify the compiler (`tools/probe_compiler.py`) and set `mwcc_version`, `opt`, `lang` (C or C++) in `game.toml` (never edit the shared `tools/configure.py`).
- Compiler settings: start from the EU project's `game.toml` and `config/eu/compilers.txt` (same game).
