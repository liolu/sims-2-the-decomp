# Other regions of The Sims 2

The project at the root of this repository is the European ROM (`ASJP`). The other regions of the **same game** are
complete projects of their own here (own `config/`, `src/`, `tools/`), built from their folder:

| Folder | Game | Region | Build |
|---|---|---|---|
| [`ASJE`](ASJE/README.md) | The Sims 2 | USA | `cd versions/ASJE && python tools/configure.py usa && ninja` |
| [`ASJJ`](ASJJ/README.md) | The Sims 2 - Hachamecha Hotel Life | Japan | `cd versions/ASJJ && python tools/configure.py jp && ninja` |

The other Sims 2 games on DS are different games, not regions of this one: The Sims 2 Pets (`A4Ox`),
The Sims 2 Castaway (`YS2x`), The Sims 2 Apartment Pets (`CAPx`).

How these were made (scripts in this folder, run from DS Decomp Studio's workspace):

- `zones_chain.sh ID...`: dsd setup from the ROM, data to 100 %, then the functions already matched in the EU
  project copied with `clone_match.py --other-games` and `clone_overlays.py --from ..`, each kept only if the ROM
  still rebuilds byte for byte.
- `reuse_both.sh ID...`: `reuse.py apply` (public decompilations, then clones again).
- `bytematch_upload.py`: sends each version's `progress/report.json.gz` to ByteMatch under its game name.
