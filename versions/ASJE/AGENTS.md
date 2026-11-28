# Instructions for AI agents

Matching decompilation of The Sims 2 (ASJE) (USA, `ASJE`): C compiled with the original compiler must rebuild a byte-identical ROM.

## Hard rules
1. Only the build decides: a function is matched only at 100% (`python nds.py match sims-2-the-asje verify` prints `VERIFY PASSED`). Never commit otherwise.
2. Clean room: only the game binary and public projects; never leaked sources or Nintendo SDK source.
3. Natural C; `asm` only for instructions compilers never generate.
4. ASCII only in `src/`, `include/`.
5. Never commit the ROM, BIOS, `extract/` or `build/`.
6. Only commit this game's files (`git add -- .` from its folder, never `git add -A` at the root): the repository holds every game.
7. Do not contribute AI-generated code to projects that forbid it.

## Workflow
```shell
python nds.py build sims-2-the-asje
python nds.py match sims-2-the-asje verify
```

## TODO for a new game
- Identify the compiler (`tools/probe_compiler.py`) and set `mwcc_version`, `opt`, `lang` (C or C++) in `game.toml` (never edit the shared `tools/configure.py`).
- Read `docs/compiler.md` and `docs/troubleshooting.md` at the root of the repository.
