"""bytematch_upload.py [ID...] : sends versions/<ID>/progress/report.json.gz to ByteMatch as version "<game> (<region>)"
of liolu/sims-2-the-decomp (commit = HEAD, already pushed). The EU project at the root stays version ASJP (CI).
Token: studio/data/bytematch.json (key liolu/sims-2-the-decomp). Same as projets/nintendogs/bytematch_upload.py."""
import json, subprocess, sys, urllib.error, urllib.parse, urllib.request
from pathlib import Path

VERSIONS = {"ASJE": "The Sims 2 (USA)", "ASJJ": "The Sims 2 - Hachamecha Hotel Life (Japan)"}
HERE = Path(__file__).resolve().parent
ROOT = HERE.parent
REPO = "liolu/sims-2-the-decomp"
token = json.loads((ROOT.parent.parent / "studio" / "data" / "bytematch.json").read_text())[REPO]
git = lambda *a: subprocess.run(["git", *a], cwd=ROOT, capture_output=True, text=True).stdout.strip()
sha, msg, when = git("rev-parse", "HEAD"), git("log", "-1", "--format=%s"), git("log", "-1", "--format=%cI")
for vid in sys.argv[1:] or sorted(VERSIONS):
    f = HERE / vid / "progress" / "report.json.gz"
    if not f.exists():
        print(vid, "no report")
        continue
    q = urllib.parse.urlencode({"version": VERSIONS[vid], "commit": sha, "commit_message": msg, "commit_timestamp": when})
    req = urllib.request.Request(f"https://bytematch.dev/api/v1/projects/{REPO}/reports?{q}", data=f.read_bytes(),
                                 method="POST", headers={"Authorization": f"Bearer {token}", "Content-Encoding": "gzip",
                                                         "Content-Type": "application/json",
                                                         "User-Agent": "ds-decomp-studio (+https://github.com/liolu/ds-decomp-studio)"})
    try:
        with urllib.request.urlopen(req, timeout=120) as r:
            print(VERSIONS[vid], "sent", json.loads(r.read() or b"{}").get("url", ""))
    except urllib.error.HTTPError as e:
        print(vid, "refused", e.code, e.read()[:300].decode("utf-8", "replace"))
