#E-Patchwork Staccato II
import sys
from bisect import bisect_left, bisect_right

input = sys.stdin.readline

n, q = map(int, input().split())
a = list(map(int, input().split()))
a.sort()

out = []
for _ in range(q):
    l1, r1, l2, r2 = map(int, input().split())
    cnt1 = bisect_right(a, r1) - bisect_left(a, l1)
    cnt2 = bisect_right(a, r2) - bisect_left(a, l2)
    l3, r3 = max(l1, l2), min(r1, r2)
    cnt3 = bisect_right(a, r3) - bisect_left(a, l3) if l3 <= r3 else 0
    out.append(cnt1 + cnt2 - cnt3)

print('\n'.join(map(str, out)))
