#!/bin/bash
# reuse.py apply (donor_match then clone_match, verified, local commits) on the region versions, one at a time
V="$(cd "$(dirname "$0")" && pwd)"; source "$V/../../../env.sh" >/dev/null 2>&1
for id in "$@"; do
  cd "$V/$id" || continue
  python ../../../../studio/gametools/reuse.py apply > reuse.log 2>&1
  python tools/configure.py "$(ls config | head -1)" > /dev/null 2>&1
  python tools/match.py progress --rebuild >> reuse.log 2>&1
  gzip -9 -n -c "build/$(ls config | head -1)/report.json" > progress/report.json.gz
  git commit -q -m "$id: progress report" -m "Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>" -- progress/report.json.gz README.md
  echo "$(date '+%m-%d %H:%M') $id reuse: $(grep -o '\*\*[0-9.]*%\*\* of the code[^|]*· [0-9/]* functions' README.md | head -1)" >> "$V/zones_chain.log"
done
echo "$(date '+%m-%d %H:%M') reuse finished" >> "$V/zones_chain.log"
