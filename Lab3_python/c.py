#C-Debugging
from bisect import bisect_left

n, m = map(int, input().split())
a = list(map(int, input().split()))

for i in range(1, n):
    a[i] += a[i - 1]

for _ in range(m):
    x = int(input())
    print(bisect_left(a, x) + 1)