# Points in Proximity
import sys
data = sys.stdin.read().split()
n = int(data[0])
a = sorted(map(int, data[1:1 + n]))
d = min(a[i + 1] - a[i] for i in range(n - 1))
res = []
for i in range(n - 1):
    if a[i + 1] - a[i] == d:
        res.append(a[i])
        res.append(a[i + 1])
print(*res)