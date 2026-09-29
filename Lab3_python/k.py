#K-Snake
import sys

def main():
    data = sys.stdin.read().split()
    idx = 0

    q = int(data[idx]); idx += 1
    queries = [int(data[idx + i]) for i in range(q)]
    idx += q

    n = int(data[idx]); idx += 1
    m = int(data[idx]); idx += 1

    pos = {}
    for r in range(n):
        for c in range(m):
            val = int(data[idx]); idx += 1
            pos[val] = (r, c)

    out = []
    for v in queries:
        if v in pos:
            r, c = pos[v]
            out.append(f"{r} {c}")
        else:
            out.append("-1")

    print('\n'.join(out))

main()