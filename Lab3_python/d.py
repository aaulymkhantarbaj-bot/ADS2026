#D-Win me if you can!
import sys
from bisect import bisect_right

input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))
a.sort()

s = [0]
for x in a:
    s.append(s[-1] + x)

q = int(input())
ans = []

for _ in range(q):
    x = int(input())
    k = bisect_right(a, x)
    ans.append(f"{k} {s[k]}")

sys.stdout.write("\n".join(ans))