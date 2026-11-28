#!/bin/bash
# zones_chain.sh ID... : adds other regions of The Sims 2 (same game as the EU project at the root) in versions/<ID>/.
# Only "THE SIMS 2" ROMs (game code ASJx): Pets (A4Ox), Castaway (YS2x), Apartment Pets (CAPx) are other games.
# Per version, one at a time:
#  1. dsd setup (All-nds-decomp-games/tools/new_game.py --no-commit), moved here, build tools copied from the root,
#     ROM rebuilt byte for byte, commit "<ID>: set up"
#  2. data to 100 % (same chain as Nintendogs: fakeptr, symmerge, orphanfix, thumbfalse, bssgen, datagen, delink_fix,
#     datasplit + bsssplit, fieldgap), commit only on VERIFY PASSED
#  3. functions without AI from the EU project: clone_match --other-games (main), clone_overlays --from .. (overlays,
#     ITCM), agentround (judge + submit), workbench commit (full verify) + report
# Log: versions/<ID>/zones_chain.log ; one line per step in versions/zones_chain.log.
V="$(cd "$(dirname "$0")" && pwd)"; ROOT="$(dirname "$V")"; DS="$ROOT/../.."
source "$DS/env.sh" >/dev/null 2>&1
G="$DS/studio/gametools"; MONO="$DS/All-nds-decomp-games"
TRAILER='Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>'
SUM="$V/zones_chain.log"
say() { echo "$(date '+%m-%d %H:%M') $*" >> "$SUM"; }
declare -A ROM=(
  [ASJE]="No-Intro Nintendo DS Decrypted ROMs 0001-6308 + x001-x193 + xB01-xB03 + z001-z183/0140 - Sims 2, The (USA) (En,Fr,De,Es,It).nds"
  [ASJJ]="No-Intro Nintendo DS Decrypted ROMs 0001-6308 + x001-x193 + xB01-xB03 + z001-z183/0313 - Sims 2, The - Hachamecha Hotel Life (Japan).nds"
)
for id in "$@"; do
  d="$V/$id"; rom="$DS/roms/${ROM[$id]}"
  [ -f "$rom" ] || { say "$id: no ROM"; continue; }
  code=$(dd if="$rom" bs=1 skip=12 count=4 2>/dev/null)
  [ "$code" = "$id" ] || { say "$id: ROM code is $code, skipped"; continue; }
  # ---------- 1. setup ----------
  if [ ! -d "$d" ]; then
    slug="sims-2-the-$(echo "$id" | tr 'A-Z' 'a-z')"
    (cd "$MONO" && python tools/new_game.py "$rom" --slug "$slug" --title "The Sims 2 ($id)" --any-rom --no-commit \
        --dsd "$DS/tools/dsd-dsi/dsd.exe" --arm7-bios "$DS/bios7.bin") > "$V/$id.setup.log" 2>&1 \
      || { say "$id: setup FAILED (see $id.setup.log)"; continue; }
    mv "$MONO/games/S/$slug" "$d" || { say "$id: move failed"; continue; }
    mv "$V/$id.setup.log" "$d/setup.log"
    mkdir -p "$d/tools"; (cd "$ROOT/tools" && for f in *.py *.txt; do cp "$f" "$d/tools/"; done)
    cp "$ROOT/dsd-dsi.exe" "$ROOT/dsd.exe" "$d/" 2>/dev/null
  fi
  cd "$d" || continue
  ver=$(ls config | head -1); L="$d/zones_chain.log"
  step() { echo "=== $(date +%H:%M:%S) $*" >> "$L"; "$@" >> "$L" 2>&1; }
  verify() { python tools/configure.py "$ver" >> "$L" 2>&1; python tools/match.py verify >> "$L" 2>&1; grep -q "VERIFY PASSED" <(tail -5 "$L"); }
  if ! git log -1 --format=%s -- . 2>/dev/null | grep -q .; then
    python "$G/prototypes/thumbfalse.py" --apply >> "$L" 2>&1  # Thumb guesses on ARM data (USA: +0x3c of veneers)
    python tools/configure.py "$ver" >> "$L" 2>&1; ninja >> "$L" 2>&1
    if ! verify; then say "$id ($ver): ROM rebuild FAILED"; continue; fi
    git add -- . >> "$L" 2>&1 && git commit -q -m "$id: set up The Sims 2 $id (config/$ver)" -m "$TRAILER" -- . >> "$L" 2>&1
    say "$id ($ver): set up, ROM byte-identical"
  fi
  # ---------- 2. data ----------
  if ! git log --format=%s -- . | grep -q ": data ("; then
    step python "$G/fakeptr.py" --apply
    step python "$G/symmerge.py" --apply
    step python "$G/prototypes/orphanfix.py" --apply
    step python "$G/prototypes/thumbfalse.py" --apply
    step python "$G/bssgen.py"
    step python "$G/datagen.py"
    step python tools/configure.py "$ver"
    step python "$G/delink_fix.py"
    if ! verify; then say "$id: data verify 1 FAILED"; continue; fi
    step python "$G/datagap.py" --json build/gap.json
    step python "$G/prototypes/datasplit.py" build/gap.json
    step python "$G/prototypes/bsssplit.py" build/gap.json
    if ! verify; then say "$id: data verify 2 (split) FAILED"; continue; fi
    step python "$G/prototypes/fieldgap.py" --sections .data,.rodata,.bss,.ctor
    if ! verify; then say "$id: data verify 3 (fieldgap) FAILED"; continue; fi
    python tools/match.py progress --rebuild >> "$L" 2>&1
    mkdir -p progress && gzip -9 -n -c "build/$ver/report.json" > progress/report.json.gz
    pct=$(grep -o 'data [0-9.]*%' README.md | head -1)
    git add -A -- . >> "$L" 2>&1; git commit -q -m "$id: data ($pct)" -m "$TRAILER" -- . >> "$L" 2>&1
    say "$id: data committed, $pct"
  fi
  # ---------- 3. functions cloned from EU ----------
  step python "$G/clone_match.py" --other-games --commit -j 8
  mkdir -p build/hunt/b1/a1
  step python "$G/prototypes/clone_overlays.py" build/hunt/clone_ov --from .. -j 8
  cp build/hunt/clone_ov/a1/*.c build/hunt/b1/a1/ 2>/dev/null
  step python "$G/agentround.py" build/hunt/b1 -j 8
  step python "$G/workbench.py" commit
  if git log -1 --format=%s | grep -q "^Match"; then
    git log -1 --format=%B > build/msg.txt; grep -q "$TRAILER" build/msg.txt || printf '\n%s\n' "$TRAILER" >> build/msg.txt
    git commit -q --amend -F build/msg.txt
  fi
  python tools/configure.py "$ver" > /dev/null 2>&1
  python tools/match.py progress --rebuild >> "$L" 2>&1
  gzip -9 -n -c "build/$ver/report.json" > progress/report.json.gz
  git add -- progress/report.json.gz README.md && git commit -q -m "$id: progress report" -m "$TRAILER" -- progress/report.json.gz README.md
  say "$id: $(grep -o '\*\*[0-9.]*%\*\* of the code[^|]*· [0-9/]* functions' README.md | head -1)"
done
say "chain finished"
